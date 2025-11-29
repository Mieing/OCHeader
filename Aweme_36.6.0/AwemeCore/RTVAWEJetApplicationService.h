@protocol RTVJetWebAccessInterface, RxInjector;

@interface RTVAWEJetApplicationService : RTVJetBaseApplicationService

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVJetWebAccessInterface> webAccess;

- (void)rxAwakeFromPropertyInjection;
- (void).cxx_destruct;

@end
