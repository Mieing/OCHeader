@class HTSLiveGiftMarketingInfo, HTSLiveImage;

@interface HTSLiveGiftSceneConfig : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveGiftMarketingInfo *giftMarketingInfo;
@property (nonatomic) BOOL hasGiftMarketingInfo;
@property (retain, nonatomic) HTSLiveImage *label;
@property (nonatomic) BOOL hasLabel;

+ (id)descriptor;

@end
