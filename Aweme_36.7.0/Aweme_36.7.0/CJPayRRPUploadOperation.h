@class NSDictionary, NSRecursiveLock, NSObject;
@protocol OS_dispatch_queue;

@interface CJPayRRPUploadOperation : NSOperation

@property (copy, nonatomic) NSDictionary *body;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (copy, nonatomic) id /* block */ callback;
@property (readonly, getter=isCancelled) BOOL cancelled;
@property (getter=isExecuting) BOOL executing;
@property (getter=isFinished) BOOL finished;
@property (retain, nonatomic) NSRecursiveLock *lock;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)setCancelled:(BOOL)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (BOOL)isAsynchronous;
- (void)start;
- (void)cancel;

@end
