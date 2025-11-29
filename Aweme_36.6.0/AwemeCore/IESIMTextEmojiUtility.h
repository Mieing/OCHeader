@interface IESIMTextEmojiUtility : NSObject

+ (id)matchCommonEmojiWithAttributedString:(id)a0 font:(id)a1 emojiHeight:(double)a2;
+ (id)matchAnimEmojiIfNeedWithAttributedString:(id)a0 emojiHeight:(double)a1 matchedAnimEmoji:(BOOL *)a2;
+ (id)matchCommonEmojiWithAttributedString:(id)a0 emojiHeight:(double)a1;

@end
