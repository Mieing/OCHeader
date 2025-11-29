@class RxScheduler, RxPromise;

@interface __RxPromiseCallbacks : NSObject

@property (copy, nonatomic) id /* block */ fulfilledCallback;
@property (copy, nonatomic) id /* block */ errorCallback;
@property (retain, nonatomic) RxScheduler *scheduler;
@property (retain, nonatomic) RxPromise *childPromise;

- (id)initWithFulfilledCallback:(id /* block */)a0 errorCallback:(id /* block */)a1 cancellable:(id)a2 scheduler:(id)a3;
- (void).cxx_destruct;

@end
