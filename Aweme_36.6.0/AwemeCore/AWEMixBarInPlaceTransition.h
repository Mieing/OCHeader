@class NSString, UIView;

@interface AWEMixBarInPlaceTransition : NSObject <AWEMixBarInPlaceTransitionProtocol, AWETransitionContextProvider>

@property (class, weak, nonatomic) UIView *triggerView;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startDefaultAnimationWithFromVC:(id)a0 toVC:(id)a1 fromContextProvider:(id)a2 toContextProvider:(id)a3 containerView:(id)a4 context:(id)a5 interactionType:(unsigned long long)a6 completionHandler:(id /* block */)a7;
- (id)createTopLevelViewConfigForContextProvider:(id)a0 topView:(id)a1;
- (id)addTriggerAndTabbarIfNeedForConfig:(id)a0 viewController:(id)a1;
- (id)createTopLevelViewConfigForViews:(id)a0 topView:(id)a1 stableRect:(id)a2 changeRect:(id)a3;
- (unsigned long long)interactionType;

@end
