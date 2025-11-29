@class AWEStorageServiceMonitorDataManager, NSObject;
@protocol OS_dispatch_queue;

@interface AWEStorageServiceMonitor : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) AWEStorageServiceMonitorDataManager *dataManager;

- (double)timestampMsec;
- (id)processSpecialKey:(id)a0;
- (id)errorInfo:(id)a0;
- (long long)getSizeFromValue:(id)a0;
- (void)startWithKey:(id)a0 domain:(id)a1 monitorType:(long long)a2 opreationType:(long long)a3;
- (void)finishWithKey:(id)a0 domain:(id)a1 data:(id)a2 success:(BOOL)a3 error:(id)a4;
- (void)startWithKey:(id)a0 domain:(id)a1 monitorType:(long long)a2 opreationType:(long long)a3 moduleName:(long long)a4 identifier:(id)a5;
- (void)updateSerializeStartTime:(id)a0;
- (void)updateSerializeFinishTime:(id)a0 data:(id)a1;
- (void)updateDeserializeStartTime:(id)a0;
- (void)updateDeserializeFinishTime:(id)a0 data:(id)a1;
- (void)updateWriteStartTime:(id)a0;
- (void)updateWriteFinishTime:(id)a0 value:(id)a1;
- (void)updateReadStartTime:(id)a0;
- (void)updateReadFinishTime:(id)a0 value:(id)a1 inputFrom:(long long)a2;
- (void)finishWithKey:(id)a0 value:(id)a1 error:(id)a2 identifier:(id)a3;
- (void)recordCacheExtension:(id)a0 domain:(id)a1;
- (double)timestampSec;
- (void).cxx_destruct;
- (id)init;

@end
