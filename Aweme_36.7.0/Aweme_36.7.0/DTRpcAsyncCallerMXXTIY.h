@class NSThread;

@interface DTRpcAsyncCallerMXXTIY : NSObject

@property (getter=isCancelled) BOOL cancelled;
@property (getter=isFinished) BOOL finished;
@property (weak, nonatomic) NSThread *asyncThread;

+ (id)callAsyncBlock:(id /* block */)a0 completion:(id /* block */)a1;

- (void)startAsyncBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (void)beforeCompleteAction;
- (void)afterCompleteAction;
- (void).cxx_destruct;
- (id)init;
- (void)cancel;
- (void)handleException:(id)a0;

@end
