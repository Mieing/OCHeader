@class AWECityModel, NSString, NSArray, AWENearbyCardListDetailModel, NSMutableDictionary, NSDictionary, AWENearbyAdModel, AWENearbyRelationCardModel, AWENearbyHotCommentRuleModel;

@interface AWENearbyListDataResponse : AWEBaseApiModel <AWENearbyFeedColdCacheResponseProtocol>

@property (retain, nonatomic) NSMutableDictionary *parseDurTimeDic;
@property (copy, nonatomic) NSString *mob;
@property (nonatomic) long long hasMore;
@property (retain, nonatomic) NSArray *awemeList;
@property (retain, nonatomic) NSArray *awemeListOriginData;
@property (retain, nonatomic) AWECityModel *currentCity;
@property (retain, nonatomic) NSArray *POIEntries;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSArray *operationCards;
@property (retain, nonatomic) NSArray *marketingItems;
@property (nonatomic) long long schoolCircleAuth;
@property (nonatomic) unsigned long long schoolVisible;
@property (nonatomic) long long nearbyType;
@property (retain, nonatomic) AWENearbyAdModel *adModel;
@property (copy, nonatomic) NSArray *poiLynxCardList;
@property (copy, nonatomic) NSArray *coverComment;
@property (copy, nonatomic) AWENearbyHotCommentRuleModel *ruleModel;
@property (copy, nonatomic) AWENearbyRelationCardModel *relationCardModel;
@property (copy, nonatomic) NSString *deliveryInfo;
@property (copy, nonatomic) NSString *endToast;
@property (copy, nonatomic) NSString *pullToast;
@property (copy, nonatomic) NSString *serverLatency;
@property (copy, nonatomic) NSDictionary *mobDict;
@property (copy, nonatomic) NSString *feedDebugFilter;
@property (nonatomic) long long pageType;
@property (retain, nonatomic) AWENearbyCardListDetailModel *feedCardListDetail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemsJSONTransformer;
+ (id)awemeListJSONTransformer;
+ (id)adModelJSONTransformer;
+ (id)ruleModelJSONTransformer;
+ (id)POIEntriesJSONTransformer;
+ (id)marketingItemsJSONTransformer;
+ (id)operationCardsJSONTransformer;
+ (id)poiLynxCardListJSONTransformer;
+ (id)coverCommentJSONTransformer;
+ (id)relationCardModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)modelDidInitWithDictionary;
- (id)initWithJsonObj:(id)a0;
- (void)assignPropWithJsonObj:(id)a0;
- (id)getArrayPropWithJsonObj:(id)a0 cls:(Class)a1 nameStr:(id)a2;
- (double)recordDurTimeWithString:(id)a0 startTime:(double)a1;
- (id)getParseDurTimeDicCopy;
- (void).cxx_destruct;

@end
