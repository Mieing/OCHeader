@class CSJSize, NSString, NSArray, NSDictionary, CSJAdBannerSlot, NSMutableArray;

@interface CSJAdSlot : NSObject

@property (nonatomic) long long AdCount;
@property (copy, nonatomic) NSString *ritScene;
@property (nonatomic) long long renderType;
@property (copy, nonatomic) NSArray *parentTplIds;
@property (nonatomic) struct CGSize { double width; double height; } viewSize;
@property (nonatomic) struct CGSize { double width; double height; } cardSize;
@property (nonatomic) long long splashPublisherTimeoutControl;
@property (nonatomic) long long splashTimeOutControl;
@property (nonatomic) long long splashTimeOut;
@property (retain, nonatomic) CSJAdBannerSlot *adBannerSlot;
@property (copy, nonatomic) NSString *preSessions;
@property (copy, nonatomic) NSString *playAgainRit;
@property (nonatomic) long long rewardAdType;
@property (nonatomic) BOOL needPreloadNormalReward;
@property (nonatomic) BOOL requestFailed;
@property (nonatomic) BOOL materialMetaFromPreload;
@property (nonatomic) double expireTimestamp;
@property (copy, nonatomic) NSString *ID;
@property (nonatomic) long long AdType;
@property (nonatomic) long long position;
@property (retain, nonatomic) NSMutableArray *imgSizeArray;
@property (retain, nonatomic) CSJSize *imgSize;
@property (retain, nonatomic) CSJSize *iconSize;
@property (nonatomic) BOOL supportRenderControl;
@property (nonatomic) long long adloadSeq;
@property (nonatomic) struct CGSize { double width; double height; } adSize;
@property (copy, nonatomic) NSString *primeRit;
@property (copy, nonatomic) NSString *previewAdID;
@property (copy, nonatomic) NSString *previewCreativeID;
@property (copy, nonatomic) NSDictionary *ext;
@property (copy, nonatomic) NSString *userData;
@property (nonatomic) long long adLoadType;
@property (nonatomic) BOOL groupLoadMore;

- (id)_acceptedSizeArray;
- (id)testMeasurementPreviewParams;
- (id)testMeasurementConfigRitParams;
- (BOOL)isNativeFeedAd;
- (BOOL)isBannerAd;
- (BOOL)isExpressFeedAd;
- (BOOL)isRewardedAd;
- (BOOL)isFullscreenAd;
- (BOOL)isFeedAd;
- (id)trackTag;
- (id)trackTagWithInteractionType:(long long)a0 ignoreLandscape:(BOOL)a1;
- (BOOL)isNativeBannerOrInterstitialAd;
- (BOOL)isSplashAd;
- (BOOL)isRewardedOrFullscreenAd;
- (void).cxx_destruct;
- (id)dictionaryValue;
- (id)init;
- (BOOL)isMemberOfClass:(Class)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (void)_setupData;

@end
