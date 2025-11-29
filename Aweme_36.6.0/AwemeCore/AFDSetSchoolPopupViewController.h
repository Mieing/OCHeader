@class DUXAbandonedButton, AFDModalViewHelper, NSString, UIViewController, DUXActionSheet, UIButton;

@interface AFDSetSchoolPopupViewController : UIViewController <AWEPanelTransitionWithBackground, DUXActionSheetDelegate>

@property (retain, nonatomic) AFDModalViewHelper *helper;
@property (retain, nonatomic) UIButton *selectSchoolButton;
@property (retain, nonatomic) DUXAbandonedButton *confirmButton;
@property (copy, nonatomic) id /* block */ schoolUpdateCallback;
@property (copy, nonatomic) id /* block */ userSettingDisabledCallBack;
@property (copy, nonatomic) NSString *schoolName;
@property (copy, nonatomic) NSString *comment;
@property (nonatomic) BOOL wantsDimmingBackground;
@property (nonatomic) BOOL wantsShowLoading;
@property (weak, nonatomic) UIViewController *sourceViewController;
@property (retain, nonatomic) DUXActionSheet *disableSheet;
@property (retain, nonatomic) DUXActionSheet *confirmSheet;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showIfNeededWithDimmingBackground:(BOOL)a0 shouldShowLoading:(BOOL)a1 ignoreFrequencyControl:(BOOL)a2 enterFrom:(id)a3 shown:(id /* block */)a4 schoolUpdate:(id /* block */)a5 userSettingDisabled:(id /* block */)a6;

- (void)actionSheet:(id)a0 didClickButtonAtIndex:(long long)a1;
- (void)actionSheetDidClickCancelButton:(id)a0;
- (void)actionSheetDidClickMaskArea:(id)a0;
- (BOOL)wantsDimmingTransitionBackground;
- (void)transitionBackgroundViewTapped:(id)a0;
- (void)p_updateUI;
- (void)p_setupViews;
- (void)p_safeShowAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)p_disableUserSettingWithCompletion:(id /* block */)a0;
- (void)p_updateSchoolWithCompletion:(id /* block */)a0;
- (void)p_closeAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)p_showConfirmSheet;
- (void)p_showDisableConfirmSheet;
- (void)p_close:(id)a0;
- (void)p_selectSchool:(id)a0;
- (void)p_confirm:(id)a0;
- (void)p_disable:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)init;
- (void)viewDidLoad;

@end
