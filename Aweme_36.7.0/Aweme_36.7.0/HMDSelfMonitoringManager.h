@class NSSet, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HMDSelfMonitoringManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *traceData;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *selfMonitoringQueue;
@property (nonatomic) BOOL isRunning;
@property (copy, nonatomic) NSSet *monitorModuleSet;

+ (id)sharedInstance;

- (void)checkForLastTraceDataUploadWithConfig:(id)a0;
- (void)uploadTraceDataWithExtraFilter:(id)a0;
- (void)increaseTraceDataWithKey:(id)a0 count:(unsigned long long)a1 traceType:(unsigned long long)a2 isHermas:(BOOL)a3;
- (void)increaseTraceDataWithKey:(id)a0 count:(unsigned long long)a1 traceType:(unsigned long long)a2 uuidArray:(id)a3 extraData:(id)a4 isHermas:(BOOL)a5;
- (void)updateTraceDataToFile:(id)a0 count:(unsigned long long)a1 uuidKey:(id)a2 uuidValue:(id)a3 extraData:(id)a4 isHermas:(BOOL)a5;
- (void)increaseTraceDataWithKey:(id)a0 traceType:(unsigned long long)a1 isHermas:(BOOL)a2;
- (void)dataUploadFinishSuccess:(BOOL)a0 dropData:(BOOL)a1 dataCountMap:(id)a2 uuidMap:(id)a3 extraData:(id)a4 isHermas:(BOOL)a5;
- (void)startSelfMonitoring;
- (void)dataUploadFinishSuccess:(BOOL)a0 dropData:(BOOL)a1 dataCountMap:(id)a2 extraData:(id)a3 isHermas:(BOOL)a4;
- (void)increaseTraceDataWithTraceType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
