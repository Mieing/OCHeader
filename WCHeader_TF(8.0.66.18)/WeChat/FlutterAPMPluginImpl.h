@class NSNumber, NSString, FlutterEngine;

@interface FlutterAPMPluginImpl : NSObject <MMFlutterPlugin, WeAPMApi>

@property (retain, nonatomic) NSNumber *engineCreateStartMs;
@property (retain, nonatomic) NSNumber *engineCreateFinishMs;
@property (weak, nonatomic) FlutterEngine *engine;
@property (nonatomic) BOOL isRootEngine;
@property (retain, nonatomic) NSNumber *bindFlutterInstanceMills;
@property (retain, nonatomic) NSNumber *transitionStartMills;
@property (retain, nonatomic) NSNumber *transitionEndMills;
@property (retain, nonatomic) NSNumber *transitionMode;
@property (retain, nonatomic) NSNumber *pageEnterMills;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithEngineCreateStartMs:(id)a0 engineCreateFinishMs:(id)a1;
- (void)onAttachedToEngine:(id)a0;
- (void)onDetachedFromEngine:(id)a0;
- (void)getDartVMMemoryInfoWithCompletion:(id /* block */)a0;
- (id)getFlutterEngineCreateFinishMillsWithError:(id *)a0;
- (id)getFlutterEngineCreateStartMillsWithError:(id *)a0;
- (id)getNativeFirstPointerDownMillsWithError:(id *)a0;
- (id)getNativeFirstScrollMillsWithError:(id *)a0;
- (id)getSnapshotRenderMillsWithError:(id *)a0;
- (id)getBindFlutterInstanceMillsWithError:(id *)a0;
- (id)getPageEnterMillsWithError:(id *)a0;
- (id)getTransitionReportInfoWithError:(id *)a0;
- (void).cxx_destruct;

@end
