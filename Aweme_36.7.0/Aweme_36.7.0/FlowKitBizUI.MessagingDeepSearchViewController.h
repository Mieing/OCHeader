@interface FlowKitBizUI.MessagingDeepSearchViewController : FlowCommon.FlowBaseViewController {
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_navigationBar;
    void /* unknown type, empty encoding */ retryBlock;
    void /* unknown type, empty encoding */ collectBlock;
    void /* unknown type, empty encoding */ shareBlock;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_errorView;
    void /* unknown type, empty encoding */ rootComponent;
}

- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)retry;

@end
