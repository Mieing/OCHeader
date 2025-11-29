@class AWECityModel, NSString, NSArray, AWENearbyGrouponControlInfo, AWENearbyGrouponFeedFirstPoiInfo, NSDictionary, AWENearbyGrouponFeedbackConfig, AWENearbyGrouponMutipleTabModel;

@interface AWENearbyGrouponListDataResponse : AWEBaseApiModel

@property (copy, nonatomic) NSString *mob;
@property (nonatomic) long long tabID;
@property (nonatomic) long long grouponStatusCode;
@property (nonatomic) long long hasMore;
@property (copy, nonatomic) NSArray *cardList;
@property (copy, nonatomic) NSArray *awemeList;
@property (retain, nonatomic) AWENearbyGrouponMutipleTabModel *tabsModel;
@property (retain, nonatomic) AWECityModel *currentCity;
@property (retain, nonatomic) AWENearbyGrouponControlInfo *controlInfo;
@property (retain, nonatomic) AWENearbyGrouponFeedFirstPoiInfo *feedFirstPoiInfo;
@property (copy, nonatomic) NSString *serverLatency;
@property (copy, nonatomic) NSString *deliveryInfo;
@property (copy, nonatomic) NSDictionary *mobDict;
@property (copy, nonatomic) NSString *feedDebugFilter;
@property (retain, nonatomic) AWENearbyGrouponFeedbackConfig *feedConfig;
@property (copy, nonatomic) NSDictionary *locationInfo;

+ (BOOL)automaticallyDefaultMapping;
+ (id)cardListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)getResponseCacheModel;
- (id)getResponseCacheModelCopy;
- (void)p_setMob:(id)a0;
- (void).cxx_destruct;

@end
