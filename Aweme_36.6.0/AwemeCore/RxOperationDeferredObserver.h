@class RxDeferred, RxPromise, NSString;

@interface RxOperationDeferredObserver : NSObject <RxOperationObserver>

@property (readonly, nonatomic) RxDeferred *deferred;
@property BOOL finished;
@property (readonly, nonatomic) RxPromise *promise;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)operation:(id)a0 didFinishedWithErrors:(id)a1;
- (void)operation:(id)a0 didProduceOperation:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)operationDidStart:(id)a0;

@end
