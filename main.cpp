#include <iostream>
#include "channel.h"

int main() {
    system("clear");
    std::cout << "Youtube Channel Manager" << std::endl;
    CockingChannel cockingChannel { "Nelson's Kitchen!" };

    // Publishing videos!
    cockingChannel.publishVideo("My first homemade recipe");
    cockingChannel.publishVideo("My second homemade recipe");

    // Adding a recipe
    cockingChannel.addIngredient("400g (14 oz) spaghetti");
    cockingChannel.addIngredient("4-5 cloves garlic, thinly sliced");
    cockingChannel.addIngredient("1/4 cup extra virgin olive oil");
    cockingChannel.addIngredient("1/2 tsp red pepper flakes (optional, for a spicy kick)");

    // Subscribing and Unsubscribing
    cockingChannel.subscribe();
    cockingChannel.subscribe();
    cockingChannel.subscribe();
    cockingChannel.subscribe();

    cockingChannel.unsubscribe();

    cockingChannel.printInfo();
    cockingChannel.showIngredientList();
    return 0;
}
