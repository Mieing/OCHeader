@interface AWEKnowledgeSwiftImpl.ImageBrowserViewController : UIViewController <AWEZoomTransitionInnerContextProvider, UIPageViewControllerDataSource, UIPageViewControllerDelegate, UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ pageViewController;
    void /* unknown type, empty encoding */ currentViewController;
    void /* unknown type, empty encoding */ viewControllerCache;
    void /* unknown type, empty encoding */ $__lazy_storage_$_closeButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_toolbar;
}

@property (nonatomic, readonly) long long preferredStatusBarStyle;

- (BOOL)zoomTransitionShouldAnimateWithTransform;
- (unsigned long long)zoomTransitionAllowedTriggerDirection;
- (BOOL)zoomTransitionWantsRemoveSpringAnimation;
- (long long)zoomTransitionItemOffset;
- (double)animationDuration;
- (void)pageViewController:(id)a0 didFinishAnimating:(BOOL)a1 previousViewControllers:(id)a2 transitionCompleted:(BOOL)a3;
- (id)pageViewController:(id)a0 viewControllerBeforeViewController:(id)a1;
- (id)pageViewController:(id)a0 viewControllerAfterViewController:(id)a1;
- (void)downloadButtonTapped;
- (void)avatarTapped;
- (void)handlePan:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)viewDidLayoutSubviews;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)deleteButtonTapped;
- (void)closeButtonTapped;

@end
