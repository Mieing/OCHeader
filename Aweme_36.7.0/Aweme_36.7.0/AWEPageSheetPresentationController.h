@class AWEPageSheetView, UIView, NSString, AWEPageSheetPresentationDimmingView, AWEPageSheetDecorationView, UIViewController, UIPanGestureRecognizer, UIPercentDrivenInteractiveTransition;
@protocol AWEPageSheetPresentationObserving, AWEPageSheetPresentationPopupEventDelegate, AWEPageSheetPresentationPhaseTransitionDelegate;

@interface AWEPageSheetPresentationController : UIPresentationController <UIGestureRecognizerDelegate, AWEPageSheetUIModifyDelegate>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sheetViewFrameWhenPanBegan;
@property (retain, nonatomic) UIView *tabBarSnapshotView;
@property (nonatomic) long long phase;
@property (nonatomic) BOOL isPresenting;
@property (nonatomic) BOOL isDismissing;
@property (nonatomic) BOOL shouldDismiss;
@property (nonatomic) BOOL isPhaseTrasnitioning;
@property (weak, nonatomic) UIPanGestureRecognizer *attachVeticalPanGesture;
@property (retain, nonatomic) UIPercentDrivenInteractiveTransition *interactiveTransition;
@property (nonatomic) struct CGSize { double width; double height; } preferredContentSize;
@property (retain, nonatomic) AWEPageSheetDecorationView *decorationView;
@property (retain, nonatomic) AWEPageSheetPresentationDimmingView *dimmingView;
@property (retain, nonatomic) AWEPageSheetView *sheetView;
@property (readonly, weak, nonatomic) UIViewController *sourceViewController;
@property (nonatomic) BOOL shouldUsePresentationContext;
@property (nonatomic) double dismissalThreshod;
@property (nonatomic, getter=isHapticFeedbackEnabled) BOOL hapticFeedbackEnabled;
@property (weak, nonatomic) id<AWEPageSheetPresentationObserving> presentationObserver;
@property (nonatomic) BOOL shouldUseFullscreen;
@property (weak, nonatomic) id<AWEPageSheetPresentationPhaseTransitionDelegate> phaseTransitionDelegate;
@property (weak, nonatomic) id<AWEPageSheetPresentationPopupEventDelegate> popupEventDelegate;
@property (nonatomic) BOOL shouldSupportHorizontalPan;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleScrollViewPan:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfPresentedViewForPhase:(long long)a0;
- (void)transitionToFullPhaseIfNeeded;
- (BOOL)isHorizonAppearing;
- (unsigned long long)phaseTransitionStyle;
- (BOOL)canPullToFullScreen;
- (void)cancelPhaseTransition:(BOOL)a0;
- (void)generateDismissingFeedback;
- (void)generateShowingFeedback;
- (void)begignTransitionToPhase:(long long)a0;
- (void)completePhaseTransition:(BOOL)a0;
- (void)setScrollViewToTop:(id)a0 animated:(BOOL)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsetsForScrollView:(id)a0;
- (void)transitionToPhase:(long long)a0;
- (BOOL)updatePresentedViewHeight:(double)a0 Animation:(BOOL)a1 duration:(double)a2;
- (double)presentedViewTopMargin;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (void)setPhase:(long long)a0 animated:(BOOL)a1;
- (void)setupAttachVeticalPanGesture:(id)a0;
- (void)handlePan:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)shouldPresentInFullscreen;
- (void)containerViewWillLayoutSubviews;
- (void)presentationTransitionWillBegin;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfPresentedViewInContainerView;
- (void)dismissalTransitionWillBegin;
- (id)presentedView;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (void)presentationTransitionDidEnd:(BOOL)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (id)observers;
- (BOOL)shouldRemovePresentersView;
- (void)handleTap:(id)a0;

@end
