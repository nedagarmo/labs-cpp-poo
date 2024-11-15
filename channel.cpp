//
// Created by Nelson Garzon on 13/11/24.
//

#include "channel.h"

#include <iostream>
#include <string>
#include <utility>

YoutubeChannel::YoutubeChannel(std::string title): title { std::move(title) }  {

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

void CockingChannel::addIngredient(const std::string &ingredientName) {
    ingredients.push_back(ingredientName);
}

void CockingChannel::showIngredientList() {
    std::cout << "Ingredients! " << std::endl;
    for (const std::string& ingredient: ingredients) {
        std::cout << "- " << ingredient << std::endl;
    }
}
