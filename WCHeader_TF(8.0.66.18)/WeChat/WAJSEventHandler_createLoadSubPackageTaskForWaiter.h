@class WAJSContextPlugin_SyncWaiter;

@interface WAJSEventHandler_createLoadSubPackageTaskForWaiter : WAJSEventHandler_createLoadSubPackageTask

@property (weak, nonatomic) WAJSContextPlugin_SyncWaiter *syncWaiter;

+ (id)getAwaitTag:(id)a0;

- (void)doBeforeTask:(id)a0;
- (void)onLoadReuslt:(id)a0 result:(id)a1;
- (void).cxx_destruct;

@end
