@class NSString, AWEPOISearchGuideModel, NSArray, NSDictionary, AWEPOIInfoModel, AWEPOICommonBannerModel, AWEPOISearchAddLocationBannerModel, AWEPOISearchLifeGovernNoticeModel, NSNumber;

@interface AWEPOISearchLocationResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *poiLocationArray;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *page;
@property (nonatomic) unsigned long long sessionID;
@property (retain, nonatomic) AWEPOIInfoModel *currentPOI;
@property (copy, nonatomic) NSArray *currentPOIs;
@property (retain, nonatomic) AWEPOICommonBannerModel *cpsBanner;
@property (nonatomic) BOOL showSearchGuide;
@property (retain, nonatomic) AWEPOISearchGuideModel *searchGuide;
@property (retain, nonatomic) AWEPOICommonBannerModel *storeBanner;
@property (retain, nonatomic) NSDictionary *cpsSignModal;
@property (copy, nonatomic) NSString *searchPlaceholder;
@property (retain, nonatomic) AWEPOISearchAddLocationBannerModel *addLocationBannerModel;
@property (retain, nonatomic) AWEPOISearchLifeGovernNoticeModel *lifeGovernNotice;
@property (copy, nonatomic) NSArray *poiSearchRange;

+ (id)poiLocationArrayJSONTransformer;
+ (id)currentPOIsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
