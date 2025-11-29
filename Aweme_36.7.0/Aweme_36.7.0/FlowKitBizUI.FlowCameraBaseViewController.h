@protocol UIViewControllerTransitioningDelegate;

@interface FlowKitBizUI.FlowCameraBaseViewController : UIViewController {
    void /* unknown type, empty encoding */ componentManager;
    void /* unknown type, empty encoding */ serviceContainer;
    void /* unknown type, empty encoding */ viewContainerManager;
    void /* unknown type, empty encoding */ defaultTransition;
}

@property (nonatomic) long long modalPresentationStyle;
@property (nonatomic, retain) id<UIViewControllerTransitioningDelegate> transitioningDelegate;

- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
