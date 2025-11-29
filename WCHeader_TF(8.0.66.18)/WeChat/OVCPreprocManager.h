@class NSArray, NSMutableDictionary;

@interface OVCPreprocManager : NSObject {
    NSArray *_tasks;
    NSMutableDictionary *_tasksByID;
    struct SharedPtr<XVIPreprocManager> { struct XVIPreprocManager *_ptr; } _backingManager;
}

- (id)initWithPHAssets:(id)a0;
- (id)initWithPreprocTasks:(id)a0;
- (void)dealloc;
- (void)startProcessingWithTasksPrepareCompletionHandler:(id /* block */)a0 taskStateUpdateHandler:(id /* block */)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)cancelProcessing;
- (void)prepareTasksWithCompletion:(id /* block */)a0;
- (void)internalStartWithTaskStateUpdateHandler:(id /* block */)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
