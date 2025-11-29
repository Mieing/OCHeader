@class AWEGrouponSettingsResponse, AWEGrouponListDataResponse, NSString, AWEGrouponCacheToken, AWEGrouponC2ListDataResponse, AWEGrouponPreloadCachedDataModelABParams;

@interface AWEGrouponPreloadCachedDataModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long preMode;
@property (nonatomic) long long dataType;
@property (nonatomic) unsigned long long cacheFrom;
@property (nonatomic) BOOL isFullScreen;
@property (nonatomic) BOOL preRequestHasLoad;
@property (retain, nonatomic) AWEGrouponC2ListDataResponse *nearbyDualCachedListDataResponse;
@property (retain, nonatomic) AWEGrouponListDataResponse *grouponDualCachedListDataResponse;
@property (retain, nonatomic) AWEGrouponSettingsResponse *cachedSettingsResponse;
@property (retain, nonatomic) AWEGrouponCacheToken *preRequestToken;
@property (retain, nonatomic) AWEGrouponPreloadCachedDataModelABParams *abParams;
@property (retain, nonatomic) AWEGrouponC2ListDataResponse *storageNearbyDualFeedResponse;
@property (retain, nonatomic) AWEGrouponListDataResponse *storageGrouponDualCachedListDataResponse;
@property (retain, nonatomic) AWEGrouponSettingsResponse *storageSettingsResponse;
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
