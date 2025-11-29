@class NSString, UIViewController, UIView;
@protocol UIViewControllerContextTransitioning;

@interface AWENearbyGrouponZoomOutTransition : NSObject <AWENearbyHalfScreenDismissAnimationProvider, AWETransitionContextProvider>

@property (weak, nonatomic) id fromContextProvider;
@property (weak, nonatomic) id toContextProvider;
@property (weak, nonatomic) UIView *containerView;
@property (weak, nonatomic) UIViewController *fromVC;
@property (weak, nonatomic) id<UIViewControllerContextTransitioning> transitioningContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startDefaultAnimationWithFromVC:(id)a0 toVC:(id)a1 fromContextProvider:(id)a2 toContextProvider:(id)a3 containerView:(id)a4 context:(id)a5 interactionType:(unsigned long long)a6 completionHandler:(id /* block */)a7;
- (id)dismissAnimationOfType:(unsigned long long)a0;
- (id)endingAnimationOfType:(unsigned long long)a0;
- (void).cxx_destruct;
- (unsigned long long)interactionType;

@end
