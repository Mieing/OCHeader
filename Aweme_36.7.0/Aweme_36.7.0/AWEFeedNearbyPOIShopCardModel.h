@class AWEFeedShopSpuInfoModel, NSArray, NSDictionary, AWEPOIContentItemModel, NSString, AWEURLModel;

@interface AWEFeedNearbyPOIShopCardModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEPOIContentItemModel *poiInfo;
@property (retain, nonatomic) AWEFeedShopSpuInfoModel *spuInfo;
@property (copy, nonatomic) NSArray *recommendInfo;
@property (copy, nonatomic) NSArray *nearbyPoi;
@property (retain, nonatomic) AWEURLModel *music;
@property (readonly, copy, nonatomic) NSDictionary *serverControlParams;
@property (readonly, copy, nonatomic) NSDictionary *backgroundInfo;
@property (copy, nonatomic) NSArray *spuInfoList;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) long long bgColor;
@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) NSString *lynxURL;
@property (nonatomic) unsigned long long moduleType;
@property (readonly, copy, nonatomic) NSDictionary *frequencyParams;
@property (nonatomic) long long cardShowLimitDaily;
@property (nonatomic) long long cardShowInterval;
@property (nonatomic) long long cardShowLimitExpInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)recommendInfoJSONTransformer;
+ (id)nearbyPoiJSONTransformer;
+ (id)spuInfoListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)bgColorString;
- (void).cxx_destruct;

@end
