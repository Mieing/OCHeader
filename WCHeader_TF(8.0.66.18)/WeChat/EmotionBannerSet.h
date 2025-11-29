@class NSString, EmotionBannerSetJumpInfo, EmotionBannerImg;

@interface EmotionBannerSet : WXPBGeneratedMessage

@property (retain, nonatomic) EmotionBannerImg *bannerImg;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *locateUrl;
@property (nonatomic) unsigned int id;
@property (retain, nonatomic) NSString *secondUrl;
@property (nonatomic) unsigned int setType;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *productId;
@property (retain, nonatomic) NSString *tagUrl;
@property (retain, nonatomic) NSString *setKey;
@property (retain, nonatomic) EmotionBannerSetJumpInfo *emotionBannerSetJumpInfo;

+ (void)initialize;

@end
