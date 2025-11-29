@interface WAJSEventHandler_createLoadSubPackageTask : WAJSEventHandler_BaseEvent

@property (nonatomic) BOOL isBatchMode;

- (void)doBeforeTask:(id)a0;
- (void)onLoadReuslt:(id)a0 result:(id)a1;
- (unsigned long long)genTaskId;
- (void)handleJSEvent:(id)a0;
- (void)createLoadSubPackageTasksForModules:(id)a0;
- (void)resultHandler:(id)a0;
- (BOOL)configDataNotLoaded;

@end
