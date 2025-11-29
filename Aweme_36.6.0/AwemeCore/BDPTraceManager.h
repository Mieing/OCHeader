@class BDPTraceInfo, NSObject;
@protocol OS_dispatch_queue;

@interface BDPTraceManager : NSObject

@property BOOL isTracing;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;
@property (retain, nonatomic) BDPTraceInfo *traceInfo;

+ (id)sharedInstance;

- (void)addPointWithName:(id)a0 uniqueID:(id)a1 extra:(id)a2 date:(id)a3;
- (void)addPointWithName:(id)a0 uniqueID:(id)a1 extra:(id)a2;
- (void)executeBlkInTaskQueue:(id /* block */)a0;
- (void)startTraceWithUniqueID:(id)a0;
- (void)addPoint:(id)a0 uniqueID:(id)a1;
- (void)addPoints:(id)a0 uniqueID:(id)a1;
- (void)stopTraceWithUniqueID:(id)a0;
- (void)buildTraceManager;
- (id)getTraceUploadURL;
- (id)commonTimelineParamsWithUniqueId:(id)a0 uniqueString:(id)a1 points:(id)a2;
- (void)uploadTraceDataWithCallback:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
