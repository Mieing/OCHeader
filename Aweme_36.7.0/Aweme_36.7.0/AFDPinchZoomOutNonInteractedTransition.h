@class NSString, UIViewController, UIView;
@protocol AFDPureModePageOuterContextProvider, AFDPureModePageInnerContextProvider;

@interface AFDPinchZoomOutNonInteractedTransition : NSObject <AWETransitionContextProvider>

@property (retain, nonatomic) UIViewController<AFDPureModePageInnerContextProvider> *fromCP;
@property (retain, nonatomic) UIViewController<AFDPureModePageOuterContextProvider> *toCP;
@property (retain, nonatomic) UIViewController *fromVC;
@property (retain, nonatomic) UIViewController *toVC;
@property (retain, nonatomic) UIView *containerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startDefaultAnimationWithFromVC:(id)a0 toVC:(id)a1 fromContextProvider:(id)a2 toContextProvider:(id)a3 containerView:(id)a4 context:(id)a5 interactionType:(unsigned long long)a6 completionHandler:(id /* block */)a7;
- (id)getPureModePageVC;
- (double)transitionDuration;
- (void).cxx_destruct;
- (unsigned long long)interactionType;

@end
