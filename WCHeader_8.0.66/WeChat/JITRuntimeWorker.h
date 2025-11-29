@class NSThread, JITRuntime;

@interface JITRuntimeWorker : NSObject

@property (retain) NSThread *thread;
@property BOOL threadStopped;
@property (weak, nonatomic) JITRuntime *runtime;
@property (copy, nonatomic) id /* block */ finishBlock;
@property (readonly, nonatomic) int workerId;

- (id)initWithId:(int)a0;
- (void)setup:(id)a0 finishBlock:(id /* block */)a1;
- (void)destroy;
- (BOOL)runCodeInWorkerThread:(id /* block */)a0;
- (BOOL)runCodeInWorkerThreadSync:(id /* block */)a0;
- (void)realRunCodeInWorkerThread:(id /* block */)a0;
- (BOOL)runCodeInWorkerThreadImpl:(id /* block */)a0 sync:(BOOL)a1;
- (void)runThread:(id)a0;
- (void).cxx_destruct;

@end
