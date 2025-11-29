@interface FlowKit.FullDisplayBioViewController : FlowCommon.FlowBaseViewController <UIViewControllerTransitioningDelegate> {
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bioLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_blurEffectView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_container;
    void /* unknown type, empty encoding */ $__lazy_storage_$_textStyle;
}

- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
