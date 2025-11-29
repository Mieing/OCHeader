@interface AWEClassroomAudioDetailViewController : UIViewController {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ lastVisibleTime;
    void /* unknown type, empty encoding */ alertShowing;
    void /* unknown type, empty encoding */ visibleByAlert;
    void /* unknown type, empty encoding */ shouldKickout;
    void /* unknown type, empty encoding */ kickoutShowing;
    void /* unknown type, empty encoding */ shouldShowKickout;
    void /* unknown type, empty encoding */ pageVisible;
    void /* unknown type, empty encoding */ initTime;
    void /* unknown type, empty encoding */ requestTime;
    void /* unknown type, empty encoding */ inlineContainer;
    void /* unknown type, empty encoding */ player;
    void /* unknown type, empty encoding */ naviHeaderBar;
    void /* unknown type, empty encoding */ isLoadingInPage;
    void /* unknown type, empty encoding */ $__lazy_storage_$_headerTitleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_lessonTitleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_lessonCatalogView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_retryView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_expireLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_expireContentView;
    void /* unknown type, empty encoding */ sheet;
    void /* unknown type, empty encoding */ isSheetShowing;
}

- (void)handleBackButtonWithSender:(id)a0;
- (void)didBecomeActive;
- (void)willResignActive;
- (void).cxx_destruct;
- (void)didMoveToParentViewController:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;

@end
