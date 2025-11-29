@class NSString, MMFinderLiveAnchorCustomizeRewardStyleItem, NSMutableArray, MMFinderLiveAnchorCustomizeRewardResourceUrl;

@interface MMFinderLiveAnchorCustomizeRewardItem : NSObject

@property (retain, nonatomic) NSString *productId;
@property (nonatomic) float price;
@property (retain, nonatomic) NSString *rewardName;
@property (retain, nonatomic) MMFinderLiveAnchorCustomizeRewardResourceUrl *giftThumbnailUrl;
@property (retain, nonatomic) MMFinderLiveAnchorCustomizeRewardResourceUrl *giftAnimationUrl;
@property (retain, nonatomic) MMFinderLiveAnchorCustomizeRewardResourceUrl *giftPreviewAnimationUrl;
@property (nonatomic) unsigned int customFlag;
@property (nonatomic) unsigned int customModQuota;
@property (nonatomic) unsigned int customRemainModetimes;
@property (nonatomic) unsigned int customMaxTextLen;
@property (nonatomic) unsigned long long rewardSpamResult;
@property (copy, nonatomic) NSString *rewardSpamMessage;
@property (retain, nonatomic) NSMutableArray *switchSkinItemArray;
@property (retain, nonatomic) MMFinderLiveAnchorCustomizeRewardStyleItem *currentStyle;
@property (retain, nonatomic) MMFinderLiveAnchorCustomizeRewardStyleItem *commitStyle;
@property (readonly, nonatomic) MMFinderLiveAnchorCustomizeRewardResourceUrl *thumbnailUrl;
@property (readonly, nonatomic) MMFinderLiveAnchorCustomizeRewardResourceUrl *animationUrl;
@property (readonly, nonatomic) MMFinderLiveAnchorCustomizeRewardResourceUrl *previewAnimationUrl;
@property (readonly, nonatomic) BOOL isCustomizeColorEnable;
@property (readonly, nonatomic) BOOL isCustomizeTextEnable;
@property (readonly, nonatomic) BOOL isCustomizeImageEnable;

- (id)initWithFinderLiveGift:(id)a0;
- (void)initRewardBaseInfoProperty:(id)a0;
- (void)initCustomConfigProperty:(id)a0;
- (void)initRewardSpamResultProperty:(id)a0;
- (void)initCostomizeRewardProperty:(id)a0;
- (void)updateStatusOnLocalCommitStyleSuccess;
- (void)decreaseRemainModetimes;
- (void).cxx_destruct;

@end
