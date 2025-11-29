@class NSString, UIViewController;
@protocol DVEPreviewTransitionContextProvider, ACCTrimCropZoomTransitionContextProvider, UIViewControllerContextTransitioning;

@interface ACCTrimCropZoomTransitionDelegate : NSObject <UIViewControllerTransitioningDelegate, DVEPreviewTransitionDelegateProtocol>

@property (nonatomic) BOOL needTrimZoomTranstionIn;
@property (weak, nonatomic) id<ACCTrimCropZoomTransitionContextProvider> outerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIViewController *outterViewController;
@property (weak, nonatomic) UIViewController *innerViewController;
@property (nonatomic) BOOL isAnimating;
@property (weak, nonatomic) id<UIViewControllerContextTransitioning> currentTransitioningContext;
@property (retain, nonatomic) id<DVEPreviewTransitionContextProvider> contextProvider;

- (void).cxx_destruct;
- (id)interactionControllerForPresentation:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (id)interactionControllerForDismissal:(id)a0;

@end
