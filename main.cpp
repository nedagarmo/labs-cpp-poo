#include <iostream>
#include "channel.h"

int main() {
    system("clear");
    std::cout << "Youtube Channel Manager" << std::endl;
    CookingChannel cookingChannel { "Nelson's Kitchen!", "Nelson" };

    // Publishing videos!
    cookingChannel.publishVideo("My first homemade recipe");
    cookingChannel.publishVideo("My second homemade recipe");

    // Adding a recipe
    cookingChannel.addIngredient("400g (14 oz) spaghetti");
    cookingChannel.addIngredient("4-5 cloves garlic, thinly sliced");
    cookingChannel.addIngredient("1/4 cup extra virgin olive oil");
    cookingChannel.addIngredient("1/2 tsp red pepper flakes (optional, for a spicy kick)");

    // Subscribing and Unsubscribing
    cookingChannel.subscribe();
    cookingChannel.subscribe();
    cookingChannel.subscribe();
    cookingChannel.subscribe();

    cookingChannel.unsubscribe();

    cookingChannel.printInfo();
    cookingChannel.showIngredientList();
    std::cout << std::endl;
    std::cout << "***              ***                 ***              ***                 ***" << std::endl;
    std::cout << std::endl;
    cookingChannel.showIngredientList("Complete Recipe: ");
    std::cout << std::endl;
    std::cout << "***              ***                 ***              ***                 ***" << std::endl;
    std::cout << std::endl;
    cookingChannel.showOwnerName();
    std::cout << std::endl;

    std::cout << "***              ***                 ***              ***                 ***" << std::endl;
    std::cout << "***              ***                 ***              ***                 ***" << std::endl;
    std::cout << "***              ***                 ***              ***                 ***" << std::endl;

    std::cout << std::endl;
    SingersChannel singersChannel { "David's Songs", "David" };
    singersChannel.showOwnerName();

    return 0;
}
