@class RTVInteractionFeedContext, RTVFeedSession, NSString;
@protocol RxInjector, RTVXRControllerInjector, RTVInteractionConfigureManagerInterface, RTVInteractionConfigurator;

@interface RTVFeedScopeController : NSObject <RTVFeedScopeControllerInterface>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, nonatomic) id<RTVInteractionConfigurator> interactionConfigurator;
@property (readonly, nonatomic) id<RTVInteractionConfigureManagerInterface> interactionConfigureManager;
@property (readonly, weak, nonatomic) RTVFeedSession *feedSession;
@property (readonly, nonatomic) RTVInteractionFeedContext *context;
@property (readonly, nonatomic) id feedScopeTokenKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (void)renderModel:(id)a0 context:(id)a1;
- (id)scopeKey;
- (void)configInterationViewController:(id)a0;
- (id)createInterationViewController;
- (id)createNarrowInterationViewController;
- (void)feedShareWillFinish;
- (void).cxx_destruct;

@end
