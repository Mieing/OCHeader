@class NSString, RxScheduler, RxDeferred, AWEAdPromiseContext;

@interface AWEAdPromise : NSObject <AWEAdPromiseExecuteProtocol, AWEAdPromiseUpdateStatus, AWEAdPromiseProtocol>

@property (retain, nonatomic) RxDeferred *deferred;
@property (copy, nonatomic) id /* block */ task;
@property (copy, nonatomic) id /* block */ errorTask;
@property (retain, nonatomic) AWEAdPromiseContext *context;
@property (retain, nonatomic) RxScheduler *scheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)promiseTask:(id /* block */)a0;
+ (id)promiseTask:(id /* block */)a0 errorTask:(id /* block */)a1 scheduler:(id)a2;
+ (id)promiseTask:(id /* block */)a0 errorTask:(id /* block */)a1;
+ (id)defaultRejectPromise;
+ (id)defaultResolvePromise;

- (void)whenCancelled:(id /* block */)a0;
- (void)runTaskWithContext:(id)a0;
- (BOOL)complete;
- (void)reject;
- (void).cxx_destruct;
- (id)init;
- (void)resolve;
- (void)cancel;
- (id)promise;

@end
