@class NSObject;
@protocol OS_dispatch_queue;

@interface UnisusCloudManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notifySerialQueue;

+ (id)sharedManager;

- (void)updatePushMessage:(id)a0;
- (id)getMpConfigWithMpId:(id)a0 forKey:(id)a1;
- (void)monitorDeviceWithMpID:(id)a0 from:(id)a1;
- (id)getCloudUpdateIndexTimePair;
- (id)getCloudUpdateRecordDict;
- (long long)getCloudVersion;
- (void)addUpdateListner:(id /* block */)a0;
- (id)getCustomConfigWithSpaceName:(id)a0;
- (void)requestCloudSettings:(unsigned long long)a0 from:(id)a1 isTriggerByAuto:(BOOL)a2 targetVersion:(long long)a3;
- (id)getSDKConfigForKey:(id)a0;
- (id)getMpConfigWithMpId:(id)a0;
- (void)monitorDeviceWithMpIDs:(id)a0 from:(id)a1;
- (long long)getCloudUpdateTimeStamp;
- (BOOL)enableSerialQueue;
- (void).cxx_destruct;
- (id)init;

@end
