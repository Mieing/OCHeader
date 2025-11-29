@interface IESIMTickleImpl.TickleUserSettingsViewController : UIViewController <AWEIMInAppPushProtocol> {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_naviBar;
    void /* unknown type, empty encoding */ $__lazy_storage_$_informationView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_emoticonView;
    void /* unknown type, empty encoding */ tickleSettingButton;
    void /* unknown type, empty encoding */ cancellables;
}

- (BOOL)canShowInnerPush;
- (void)backClicked;
- (void)moreClicked;
- (void)tickleSettingButtonClicked;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;

@end
