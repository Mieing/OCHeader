@protocol UIViewControllerTransitioningDelegate;

@interface FlowKit.UGCVoiceNavigationController : UINavigationController {
    void /* unknown type, empty encoding */ calcHeight;
    void /* unknown type, empty encoding */ $__lazy_storage_$_transitionInstance;
}

@property (nonatomic) long long modalPresentationStyle;
@property (nonatomic, retain) id<UIViewControllerTransitioningDelegate> transitioningDelegate;

- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (void).cxx_destruct;
- (id)initWithRootViewController:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
