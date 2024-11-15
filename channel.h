//
// Created by Nelson Garzon on 13/11/24.
//

#ifndef CPPPOO_CHANNEL_H
#define CPPPOO_CHANNEL_H

#include <string>
#include <utility>
#include <vector>

class YoutubeChannel {
private:
    std::string title;
    std::vector<std::string> videos;
    int subscribersCount{};
public:
    explicit YoutubeChannel(std::string title);
    void subscribe();
    void unsubscribe();
    void publishVideo(const std::string& videoTitle);
    void printInfo();
};

class CockingChannel : public YoutubeChannel {
private:
    std::vector<std::string> ingredients;
public:
    explicit CockingChannel(std::string title): YoutubeChannel(std::move(title)) {}
    void showIngredientList();
    void addIngredient(const std::string& ingredientName);
};
#endif //CPPPOO_CHANNEL_H
