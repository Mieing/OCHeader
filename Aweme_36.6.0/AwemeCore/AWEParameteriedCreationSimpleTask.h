@class NSError, NSString, NSRecursiveLock;

@interface AWEParameteriedCreationSimpleTask : NSOperation <AWEPCTTaskProtocol>

@property (retain, nonatomic) NSRecursiveLock *stateLock;
@property BOOL willCancel;
@property (nonatomic) BOOL isFailed;
@property (readonly, getter=isCancelled) BOOL cancelled;
@property (getter=isExecuting) BOOL executing;
@property (getter=isFinished) BOOL finished;
@property (copy, nonatomic) id /* block */ cancelCallback;
@property (copy, nonatomic) id /* block */ finishHandler;
@property (nonatomic) double startExecutingTime;
@property (retain, nonatomic) id attachObj;
@property (nonatomic) BOOL isCancelSuccess;
@property (retain, nonatomic) NSError *taskError;
@property (retain, nonatomic) NSString *taskIdentifier;
@property (readonly, nonatomic) id /* block */ mainHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMainHandler:(id /* block */)a0;
- (id)initWithMainHandler:(id /* block */)a0 dep_cancelCallback:(id /* block */)a1;
- (void)setCancelled:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isAsynchronous;
- (void)start;
- (void)cancel;

@end
