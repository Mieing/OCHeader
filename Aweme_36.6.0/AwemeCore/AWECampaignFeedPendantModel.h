@class NSString, UIImage, NSArray, AWEAwemeCampaignPendantLimitModel, AWECampaignPendantFrequentLimit, AWECampaignPendantLimitModel, NSDictionary, LOTComposition, NSNumber;

@interface AWECampaignFeedPendantModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *imageList;
@property (retain, nonatomic) AWECampaignPendantLimitModel *showLimit;
@property (retain, nonatomic) AWEAwemeCampaignPendantLimitModel *awemeShowLimit;
@property (nonatomic) unsigned long long imageType;
@property (retain, nonatomic) NSArray *compressedLottieFileURLs;
@property (retain, nonatomic) NSString *compressedLottieFIleMD5;
@property (retain, nonatomic) NSNumber *disappearThreshold;
@property (copy, nonatomic) NSString *webUrl;
@property (nonatomic) BOOL canFoldedPendantClose;
@property (nonatomic) BOOL canShowInFollowing;
@property (retain, nonatomic) AWECampaignPendantFrequentLimit *frequentLimit;
@property (retain, nonatomic) UIImage *pendantBigImage;
@property (retain, nonatomic) UIImage *pendantSmallImage;
@property (nonatomic) BOOL isReady;
@property (nonatomic) unsigned long long showTimes;
@property (retain, nonatomic) LOTComposition *pendantExpendedLottie;
@property (retain, nonatomic) LOTComposition *pendantFoldedLottie;
@property (nonatomic) BOOL foldedPendantSwitchable;
@property (nonatomic) BOOL enableInTeenagerMode;
@property (retain, nonatomic) NSArray *capsuleContent;
@property (retain, nonatomic) NSArray *capsuleColor;
@property (retain, nonatomic) NSArray *secondLottieTime;
@property (retain, nonatomic) NSString *secondH5Link;
@property (retain, nonatomic) NSArray *expandedPendantFrameList;
@property (retain, nonatomic) NSArray *foldedPendantFrameList;
@property (nonatomic) BOOL isKProject;
@property (copy, nonatomic) NSString *secondMultiSchema;
@property (copy, nonatomic) NSString *multiSchema;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageListJSONTransformer;
+ (id)showLimitJSONTransformer;
+ (id)awemeShowLimitJSONTransformer;
+ (id)frequentLimitJSONTransformer;
+ (id)imageTypeJsonTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isEmpty;

@end
