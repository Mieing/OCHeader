@class EmotionBannerSet, NSMutableArray;

@interface EmojiRecommendInfo : WXPBGeneratedMessage

@property (retain, nonatomic) EmotionBannerSet *setInfo;
@property (nonatomic) unsigned int emojiCount;
@property (retain, nonatomic) NSMutableArray *emojis;

+ (void)initialize;

@end
