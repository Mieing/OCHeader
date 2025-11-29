@class NSMutableDictionary, NSString, MMWebOptimJSContextTaskLoader, JSVirtualMachine;

@interface MMWebOptimJSContextTaskMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) MMWebOptimJSContextTaskLoader *taskLoader;
@property (retain, nonatomic) NSMutableDictionary *dicTaskId2Task;
@property (retain, nonatomic) JSVirtualMachine *jsVirtualMachine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)launchTaskWithConfig:(id)a0 onSuccess:(id /* block */)a1 onFailed:(id /* block */)a2;
- (id)taskWithConfig:(id)a0;
- (id)taskWithTaskId:(id)a0;
- (void)closeTask:(id)a0;
- (void)closeTaskWithTaskId:(id)a0;
- (id)taskWithUrl:(id)a0;
- (void)closeAllTask;
- (void)callBackWithSuccessBlock:(id /* block */)a0 config:(id)a1 startTime:(unsigned long long)a2;
- (void)callBackWithFailBlock:(id /* block */)a0 config:(id)a1 startTime:(unsigned long long)a2;
- (void).cxx_destruct;

@end
