//
// Created by Nelson Garzon on 13/11/24.
//

#include "channel.h"

#include <iostream>
#include <string>
#include <utility>

YoutubeChannel::YoutubeChannel(std::string title, std::string owner): title { std::move(title) }, owner { std::move(owner)}  {

}

void YoutubeChannel::subscribe() {
    subscribersCount++;
}

void YoutubeChannel::unsubscribe() {
    subscribersCount--;
}

void YoutubeChannel::publishVideo(const std::string& videoTitle) {
    videos.push_back(videoTitle);
}

void YoutubeChannel::printInfo() {
    std::cout << "Youtube Channel: " << title << std::endl;
    std::cout << "Subscribers: " << subscribersCount << std::endl;
    std::cout << "Videos: " << std::endl;
    for (const std::string& video : videos) {
        std::cout << " - " << video << std::endl;
    }
}

std::string YoutubeChannel::getOwnerName() {
    return owner;
}

void CookingChannel::addIngredient(const std::string &ingredientName) {
    ingredients.push_back(ingredientName);
}

void CookingChannel::showIngredientList() {
    std::cout << "Ingredients! " << std::endl;
    for (const std::string& ingredient: ingredients) {
        std::cout << "- " << ingredient << std::endl;
    }
}

void CookingChannel::showIngredientList(const std::string& header) {
    std::cout << header << std::endl;
    for (const std::string& ingredient: ingredients) {
        std::cout << "- " << ingredient << std::endl;
    }
}

void CookingChannel::printInfo() {
    std::cout << "* *  This is the information of the Cooking Channel  * * " << std::endl;
    YoutubeChannel::printInfo();
}


// POO Polymorphism Implementation
void CookingChannel::showOwnerName() {
    std::cout << "Cooker's Name: " << getOwnerName() << std::endl;
}

void SingersChannel::showOwnerName() {
    std::cout << "Singer's Name: " << getOwnerName() << std::endl;
}