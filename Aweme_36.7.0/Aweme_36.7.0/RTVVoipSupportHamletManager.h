@class NSString, RTVVoipSession;
@protocol RTVCoordinator, RxInjector, RTVXRControllerInjector;

@interface RTVVoipSupportHamletManager : NSObject <RTVXRControllerInterface, RTVVoipSessionObserver, RTVVoipSupportHamletManager>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) RTVVoipSession *voipSession;
@property (readonly, nonatomic) id<RTVCoordinator> rtvCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)rtv_awakeFromControllerInjector;
- (void)renderBusinessHandler:(id)a0 context:(id)a1;
- (void)rtvSession:(id)a0 statusDidChangeTo:(long long)a1 fromStatus:(long long)a2;
- (void).cxx_destruct;

@end
