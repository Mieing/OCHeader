@class EmotionBannerImg, EmotionSummary;

@interface EmotionBanner : WXPBGeneratedMessage

@property (retain, nonatomic) EmotionSummary *bannerSummary;
@property (retain, nonatomic) EmotionBannerImg *bannerImg;

+ (void)initialize;

@end
