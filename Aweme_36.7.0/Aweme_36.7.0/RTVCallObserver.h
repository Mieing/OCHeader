@class RxDeferred, NSArray, NSString;
@protocol RTVMultipleDelegateInterface, RxInjector, RTVCallObserverDelegate, RTVAuthorizationInterface;

@interface RTVCallObserver : NSObject <RTVCallObserver>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) RxDeferred *callCenterWrapper;
@property (readonly, nonatomic) id<RTVMultipleDelegateInterface, RTVCallObserverDelegate> delegates;
@property (readonly, nonatomic) id<RTVAuthorizationInterface> authorization;
@property (readonly, copy, nonatomic) NSArray *calls;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)__createCallCenter;
- (void)addDelegate:(id)a0 queue:(id)a1;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;

@end
