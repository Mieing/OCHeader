@class NSString, NSArray, AWEPOISearchGuideModel, NSDictionary, NSMutableArray, AWEPOICommonBannerModel, AWEPOISearchAddLocationBannerModel, NSNumber, CLLocation;

@interface AWEPOISearchLocationDataManager : AWEListDataController <AWEPOISearchLocationDataManagerProtocol>

@property (retain, nonatomic) NSNumber *page;
@property (copy, nonatomic) id /* block */ searchCompletion;
@property (nonatomic) long long locationSource;
@property (retain, nonatomic) NSDictionary *cacheRequestDict;
@property (nonatomic) unsigned long long sessionID;
@property (copy, nonatomic) NSString *urlString;
@property (copy, nonatomic) NSArray *locationInfos;
@property (copy, nonatomic) NSString *keywords;
@property (nonatomic) unsigned long long type;
@property (nonatomic) long long searchType;
@property (nonatomic) BOOL needCurrentCity;
@property (retain, nonatomic) NSDictionary *logPassback;
@property (nonatomic) long long poiStickerEntranceType;
@property (nonatomic) unsigned long long stage;
@property (copy, nonatomic) NSString *awemeID;
@property (copy, nonatomic) NSArray *topics;
@property (copy, nonatomic) NSString *creationID;
@property (retain, nonatomic) AWEPOICommonBannerModel *banner;
@property (retain, nonatomic) AWEPOICommonBannerModel *storeBanner;
@property (retain, nonatomic) NSDictionary *cpsSignModal;
@property (copy, nonatomic) NSString *currentPOIId;
@property (copy, nonatomic) NSString *shootWay;
@property (nonatomic) BOOL showSearchGuide;
@property (retain, nonatomic) AWEPOISearchGuideModel *searchGuide;
@property (nonatomic) BOOL useInputtips;
@property (copy, nonatomic) NSDictionary *extraRequestParams;
@property (retain, nonatomic) NSMutableArray *placeholderArrayForSchoolType;
@property (retain, nonatomic) NSMutableArray *placeholderArrayForNoShowLocationSection;
@property (retain, nonatomic) AWEPOISearchAddLocationBannerModel *addLocationBannerModel;
@property (retain, nonatomic) CLLocation *location;
@property (retain, nonatomic) CLLocation *safeLocation;
@property (retain, nonatomic) NSMutableArray *dataSource;
@property (nonatomic) BOOL refreshHasMore;
@property (nonatomic) BOOL loadmoreHasMore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (id)searchRegionTypeString;
- (id)requestParameter;
- (void)p_fetchLocationArrayWithParameter:(id)a0 pullType:(long long)a1 completion:(id /* block */)a2;
- (void)refreshPublishDataWithCompletion:(id /* block */)a0;
- (id)p_invalidParameterError;
- (id)base64StringWithString:(id)a0;
- (void)p_requestLocationArrayWithParameters:(id)a0 pullType:(long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithURLString:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
