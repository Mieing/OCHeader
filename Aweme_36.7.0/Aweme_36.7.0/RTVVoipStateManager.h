@class RxMultipleDelegate;
@protocol RxInjector, RTVVoipStateObserver;

@interface RTVVoipStateManager : NSObject

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) RxMultipleDelegate<RTVVoipStateObserver> *multiDelegate;

- (void)rxAwakeFromPropertyInjection;
- (void)voipStateDidChange:(long long)a0 voip:(id)a1;
- (void)addVoipStatusObserver:(id)a0;
- (void)removeVoipStatusObserver:(id)a0;
- (void).cxx_destruct;

@end
