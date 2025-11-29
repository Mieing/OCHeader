@interface BDPCloudSyncManager : NSObject

+ (id)sharedManager;

- (void)setupObserver;
- (void)updatePushMessage:(id)a0;
- (id)getMpConfigWithMpId:(id)a0 forKey:(id)a1;
- (void)monitorDeviceWithMpID:(id)a0 from:(id)a1;
- (void)requestForceIfNeedWithUpdateVersion:(long long)a0 from:(id)a1;
- (void)requestCloudSettingsForce:(BOOL)a0 from:(id)a1 isTriggerByAuto:(BOOL)a2;
- (id)getCloudUpdateIndexTimePair;
- (id)getCloudUpdateRecordDict;
- (long long)getCloudVersion;
- (void)addUpdateListner:(id /* block */)a0;
- (id)getCustomConfigWithSpaceName:(id)a0;
- (id)getSDKConfigForKey:(id)a0;
- (id)getMpConfigWithMpId:(id)a0;
- (void)monitorDeviceWithMpIDs:(id)a0 from:(id)a1;
- (long long)getCloudUpdateTimeStamp;
- (long long)getMpIntegerValueWithMpId:(id)a0 forKey:(id)a1;
- (id)init;

@end
