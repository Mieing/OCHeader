@class AWENearbyC2ListDataResponse, AWENearbyListDataResponse, AWENearbyGrouponListDataResponse, AWENearbyCacheToken, AWENearbySettingsResponse, AWENearbyPreloadCachedDataModelABParams, NSString;

@interface AWENearbyPreloadCachedDataModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long preMode;
@property (nonatomic) long long dataType;
@property (nonatomic) unsigned long long cacheFrom;
@property (nonatomic) BOOL isFullScreen;
@property (nonatomic) BOOL preRequestHasLoad;
@property (retain, nonatomic) AWENearbyListDataResponse *cachedListDataResponse;
@property (retain, nonatomic) AWENearbyC2ListDataResponse *nearbyDualCachedListDataResponse;
@property (retain, nonatomic) AWENearbyGrouponListDataResponse *grouponDualCachedListDataResponse;
@property (retain, nonatomic) AWENearbySettingsResponse *cachedSettingsResponse;
@property (retain, nonatomic) AWENearbyCacheToken *preRequestToken;
@property (retain, nonatomic) AWENearbyPreloadCachedDataModelABParams *abParams;
@property (retain, nonatomic) AWENearbyListDataResponse *storageFeedResponse;
@property (retain, nonatomic) AWENearbyC2ListDataResponse *storageNearbyDualFeedResponse;
@property (retain, nonatomic) AWENearbyGrouponListDataResponse *storageGrouponDualCachedListDataResponse;
@property (retain, nonatomic) AWENearbySettingsResponse *storageSettingsResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (id)copyToDiskModel;
- (id)memoryAwemeList;
- (id)diskAwemeList;
- (void).cxx_destruct;
- (id)init;

@end
