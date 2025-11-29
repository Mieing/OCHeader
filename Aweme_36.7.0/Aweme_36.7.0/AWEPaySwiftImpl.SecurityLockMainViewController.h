@class NSString;

@interface AWEPaySwiftImpl.SecurityLockMainViewController : UIViewController <DUXActionSheetDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_viewHolder;
    void /* unknown type, empty encoding */ $__lazy_storage_$_viewModel;
    void /* unknown type, empty encoding */ isInVerifyRoutine;
    void /* unknown type, empty encoding */ displayContext;
    void /* unknown type, empty encoding */ strongFromVC;
    void /* unknown type, empty encoding */ successWhenAppear;
}

@property (nonatomic, copy) NSString *btm_pageIdentifier;
@property (nonatomic) BOOL btm_autoManaged;

- (void)actionSheet:(id)a0 didClickButtonAtIndex:(long long)a1;
- (void)transition_didPopDoneTransitionWithContext:(id)a0;
- (void)dux_backAction;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;

@end
