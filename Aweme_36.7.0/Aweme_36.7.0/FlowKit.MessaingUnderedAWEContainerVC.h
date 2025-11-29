@protocol UIViewControllerTransitioningDelegate;

@interface FlowKit.MessaingUnderedAWEContainerVC : UIViewController {
    void /* unknown type, empty encoding */ enterFrom;
    void /* unknown type, empty encoding */ willDismissHandler;
    void /* unknown type, empty encoding */ dismissHandler;
    void /* unknown type, empty encoding */ didDismissHandler;
    void /* unknown type, empty encoding */ fallsListItemsUpdated;
    void /* unknown type, empty encoding */ handleItemTap;
    void /* unknown type, empty encoding */ shouldPan;
    void /* unknown type, empty encoding */ currentWelcomebackItems;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundView;
    void /* unknown type, empty encoding */ closeImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_navigationBG;
    void /* unknown type, empty encoding */ $__lazy_storage_$_navigationBar;
    void /* unknown type, empty encoding */ $__lazy_storage_$_closeButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomCloseButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_feedVC;
    void /* unknown type, empty encoding */ delegateMessagingVC;
    void /* unknown type, empty encoding */ lastEnterMethod;
    void /* unknown type, empty encoding */ $__lazy_storage_$_inputShortCutView;
    void /* unknown type, empty encoding */ enablePullToRefresh;
    void /* unknown type, empty encoding */ _transitioningDelegate;
}

@property (nonatomic, retain) id<UIViewControllerTransitioningDelegate> transitioningDelegate;

- (id)flow_trackParametersWith:(id)a0;
- (void)clickBack;
- (void)clickTitle;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
