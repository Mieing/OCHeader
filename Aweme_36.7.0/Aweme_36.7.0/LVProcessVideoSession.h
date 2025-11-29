@class NSFileManager, NSOperationQueue, LVTemplateDataManager, LVMultiTasksProgress;

@interface LVProcessVideoSession : LVPreprocessSession {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (retain, nonatomic) NSOperationQueue *queue;
@property (weak, nonatomic) LVTemplateDataManager *dataManager;
@property (weak, nonatomic) NSFileManager *manager;
@property (copy, nonatomic) id /* block */ callback;
@property (nonatomic, getter=isInterrupted) BOOL interrupted;
@property (retain, nonatomic) LVMultiTasksProgress *tasksProgress;

- (void)excuteNLETemplateWithCallback:(id /* block */)a0;
- (void)excuteWithCallback:(id /* block */)a0;
- (void)interruptWithError:(id)a0;
- (void)addLVReverseOperationForVideo:(id)a0;
- (void)addNLERewindOperationForVideo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDataManager:(id)a0;
- (void)addObserver;
- (void)finishWithError:(id)a0;
- (void)dealloc;
- (void)cancel;
- (void)removeObserver;

@end
