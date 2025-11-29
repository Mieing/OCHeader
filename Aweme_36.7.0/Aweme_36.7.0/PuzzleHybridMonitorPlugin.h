@class NSString;

@interface PuzzleHybridMonitorPlugin : NSObject <PuzzleKitViewLifeCycleProtocol, PuzzleHybridMonitorReporter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)loadSwizzled;
+ (id)sharedMonitor;

- (void)setupMonitor;
- (void)kitView:(id)a0 willCreatedWithContext:(id)a1;
- (id)generateIDForContainer;
- (void)invalidateID:(id)a0 andData:(BOOL)a1;
- (void)deleteData:(id)a0 isForce:(BOOL)a1;
- (void)attach:(id)a0 webView:(id)a1;
- (void)attach:(id)a0 LynxView:(id)a1;
- (void)detach:(id)a0 webView:(id)a1;
- (void)detach:(id)a0 LynxView:(id)a1;
- (void)reportContainerError:(id)a0 withID:(id)a1 withError:(id)a2;
- (void)collectBoolean:(id)a0 field:(id)a1 data:(BOOL)a2;
- (void)collectString:(id)a0 field:(id)a1 data:(id)a2;
- (void)collectLong:(id)a0 field:(id)a1 data:(long long)a2;
- (void)collectInt:(id)a0 field:(id)a1 data:(int)a2;
- (void)fetchContainerData:(id)a0 block:(id /* block */)a1;
- (void)fetchAggregationPerfTiming:(id)a0 level:(unsigned long long)a1 waitCompleteData:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)lynxReportCustomWithEventName:(id)a0 LynxView:(id)a1 metric:(id)a2 category:(id)a3 extra:(id)a4 maySample:(BOOL)a5;
- (void)webReportCustomWithEventName:(id)a0 webView:(id)a1 metric:(id)a2 category:(id)a3 extra:(id)a4 maySample:(BOOL)a5;
- (void)reportHybridEventName:(id)a0 containerId:(id)a1 URL:(id)a2 metric:(id)a3 category:(id)a4 extra:(id)a5 kernalType:(unsigned long long)a6 aid:(id)a7 maySample:(BOOL)a8;
- (void)reportHybridEventName:(id)a0 containerId:(id)a1 URL:(id)a2 metric:(id)a3 category:(id)a4 extra:(id)a5 kernalType:(unsigned long long)a6 aid:(id)a7 sampleLevel:(unsigned long long)a8;
- (void)bindCrashInfoWithUrl:(id)a0 schema:(id)a1;
- (void)reportLatchEventName:(id)a0 containerId:(id)a1 URL:(id)a2 metric:(id)a3 category:(id)a4 extra:(id)a5 kernalType:(unsigned long long)a6 maySample:(BOOL)a7;
- (void)setMonitorFieldMap:(id)a0 containerId:(id)a1;
- (void)repairMonitorContextForReusedView:(id)a0;
- (void)configWebViewMonitor;
- (void)checkTurnOnBlanckDetect:(id)a0 context:(id)a1;

@end
