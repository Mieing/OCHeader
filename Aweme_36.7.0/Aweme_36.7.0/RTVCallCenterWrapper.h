@class CXCallObserver, NSString;

@interface RTVCallCenterWrapper : NSObject <CXCallObserverDelegate>

@property (readonly, nonatomic) CXCallObserver *callObserver;
@property (copy, nonatomic) id /* block */ callEventHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)__rtvCallFromCXCall:(id)a0;
- (void).cxx_destruct;
- (id)calls;
- (void)callObserver:(id)a0 callChanged:(id)a1;
- (id)init;

@end
