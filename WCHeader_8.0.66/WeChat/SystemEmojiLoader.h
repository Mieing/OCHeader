@interface SystemEmojiLoader : NSObject

+ (id)getAllEmojisInCategories;
+ (id)getEmoticonAndCharacterEmojis;
+ (id)getAnimalAndNatureEmojis;
+ (id)getFoodAndDrinkEmojis;
+ (id)getActivitiesEmojis;
+ (id)getTravelAndLocEmojis;
+ (id)getGoodEmojis;
+ (id)getSymbolEmojis;
+ (id)emojisFromEmojiStrings:(id)a0;
+ (id)changeUnicodeToEmoji:(id)a0;

@end
