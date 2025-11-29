@interface AWEIMGreetingMessageTracker : NSObject

+ (id)greetingEmojiParamsWithMessage:(id)a0 conversation:(id)a1;
+ (void)trackClickGreetingEmoticon:(id)a0 showedIndex:(long long)a1 message:(id)a2 conversation:(id)a3;
+ (void)trackDisplayGreetingEmoticonIfNeeded:(id)a0 showedIndex:(long long)a1 message:(id)a2 conversation:(id)a3 displayedSet:(id)a4;
+ (id)emojiSituationWithMessage:(id)a0;
+ (id)p_trackParamsWithEmoticon:(id)a0 showedIndex:(long long)a1 message:(id)a2 conversation:(id)a3;
+ (id)emojiEnterMethodWithMessage:(id)a0;

@end
