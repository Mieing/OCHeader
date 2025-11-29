@class NSString, EmotionBannerMarkTagStyle;

@interface EmotionBannerImg : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *imgUrl;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;
@property (retain, nonatomic) NSString *stripUrl;
@property (retain, nonatomic) NSString *detailBackGroundUrl;
@property (retain, nonatomic) EmotionBannerMarkTagStyle *emotionBannerMarkTagStyle;

+ (void)initialize;

@end
