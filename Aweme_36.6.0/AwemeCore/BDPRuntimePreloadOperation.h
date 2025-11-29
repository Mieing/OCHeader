@class NSString, BDPSchema, NSRecursiveLock;

@interface BDPRuntimePreloadOperation : NSOperation

@property (copy, nonatomic) NSString *caller;
@property (copy, nonatomic) NSString *preloadId;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) Class object;
@property (retain, nonatomic) BDPSchema *schema;
@property (nonatomic) BOOL useMixRuntime;
@property (nonatomic, getter=isFinished) BOOL finished;
@property (nonatomic, getter=isExecuting) BOOL executing;

- (id)initWithPreloadObject:(Class)a0 caller:(id)a1 schema:(id)a2 preloadId:(id)a3;
- (id)initWithPreloadObject:(Class)a0 caller:(id)a1 schema:(id)a2 preloadId:(id)a3 useMixRuntime:(BOOL)a4;
- (void).cxx_destruct;
- (void)done;
- (BOOL)isAsynchronous;
- (void)start;
- (void)cancel;

@end
