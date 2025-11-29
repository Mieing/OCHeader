@class AWEURLModel, NSString, NSArray, AWESocialSettingNearbyCacheConfig, AWENearbyActivityResourceModel;

@interface AWESocialSettingModel : AWEBaseApiModel

@property (nonatomic) BOOL enableLandingLatestVisit;
@property (copy, nonatomic) NSString *landingTabName;
@property (retain, nonatomic) AWEURLModel *nearbyPostIconUrls;
@property (retain, nonatomic) AWEURLModel *nearbyBubbleIconUrls;
@property (copy, nonatomic) NSString *nearbyPostText;
@property (nonatomic) long long userType;
@property (retain, nonatomic) AWENearbyActivityResourceModel *resourceGroup;
@property (nonatomic) BOOL isHometown;
@property (nonatomic) BOOL shouldLandingToNearbyWhenColdLaunch;
@property (copy, nonatomic) NSArray *nearbyDotList;
@property (retain, nonatomic) AWESocialSettingNearbyCacheConfig *nearbyCacheConfig;

+ (id)resourceGroupJSONTransformer;
+ (id)nearbyPostIconUrlsJSONTransformer;
+ (id)nearbyBubbleIconUrlsJSONTransformer;
+ (id)nearbyDotListJSONTransformer;
+ (id)cacheConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
