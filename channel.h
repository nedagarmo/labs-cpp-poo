//
// Created by Nelson Garzon on 13/11/24.
//

/*
 * This is a small representation of object-oriented programming created for learning purposes.
 * We have a YouTube channel class with some defined methods (one of them virtual to be overridden) and properties.
 * Also, we have a Cooking channel class which inherits from YouTube channel class and has some other implementations
 * of POO approach, I mean overload, encapsulation and polymorphism.
 * */

#ifndef CPPPOO_CHANNEL_H
#define CPPPOO_CHANNEL_H

#include <string>
#include <utility>
#include <vector>

class YoutubeChannel {
private:
    std::string title;
    std::string owner;
    std::vector<std::string> videos;
    int subscribersCount{};

protected:
    std::string getOwnerName();

public:
    explicit YoutubeChannel(std::string title, std::string owner = "");
    void subscribe();
    void unsubscribe();
    void publishVideo(const std::string& videoTitle);

    // this method is declared as virtual to be overridden in the CookingChannel class.
    virtual void printInfo();
};

class CookingChannel : public YoutubeChannel {
private:
    std::vector<std::string> ingredients;
public:
    explicit CookingChannel(std::string title, std::string owner): YoutubeChannel(std::move(title), std::move(owner)) {}
    // method overload
    void showIngredientList();
    void showIngredientList(const std::string& header);

    void addIngredient(const std::string& ingredientName);

    // overriding
    void printInfo() override;

    // polymorphism implementation
    void showOwnerName();
};

class SingersChannel : public YoutubeChannel {
private:
    std::vector<std::string> singers;
public:
    explicit SingersChannel(std::string title, std::string owner): YoutubeChannel(std::move(title), std::move(owner)) {}

    // polymorphism implementation
    void showOwnerName();
};
#endif //CPPPOO_CHANNEL_H
