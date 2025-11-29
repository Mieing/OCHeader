@class NSDictionary, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AWEIMGlobalPlatformConfigManager : HTSService <AWEUserMessage, IESIMIMGlobalPlatformConfigServiceProtocol>

@property (nonatomic) BOOL hasAnyDataInThisLife;
@property (nonatomic) BOOL hasFetchedInThisLife;
@property (copy) NSDictionary *msgType_aweType_platformSettingsModelDictStore;
@property (copy) NSDictionary *groupCreateType_groupFeatureConfig_dictStore;
@property (readonly, nonatomic) BOOL asyncLoadData;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dataProcessQueue;
@property (readonly, copy) NSDictionary *msgType_aweType_platformSettingsModelDict;
@property (readonly, copy) NSDictionary *groupCreateType_groupFeatureConfig_dict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enable;
+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)fetchWithContext:(id)a0;
- (void)__prepareWithDiskDataWithShouldSync:(BOOL)a0;
- (void)p_fetchWithContext:(id)a0;
- (BOOL)__exceedFetchTimeInterval;
- (id)__buildDictWithJsonArray:(id)a0;
- (id)__bulidGroupFeatureConfigDictWithServerConfig:(id)a0;
- (void)p_loadDataFromDisk;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
