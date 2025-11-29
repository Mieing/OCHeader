@class AFDModalViewHelper, NSString, UILabel, UIView, UIButton;

@interface AWETeenModeFastEntryAlertViewController : UIViewController <AWEPanelTransitionWithBackground>

@property (retain, nonatomic) AFDModalViewHelper *helper;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIButton *settingBtn;
@property (retain, nonatomic) UIView *buttonContainerView;
@property (retain, nonatomic) UIButton *cancelBtn;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (retain, nonatomic) UIView *contentView;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)wantsDimmingTransitionBackground;
- (void)transitionBackgroundViewTapped:(id)a0;
- (void)didClickConfirmBtn;
- (void)didClickCancelBtn;
- (void)trackEventWithActionType:(id)a0;
- (void)didClickSettingBtn;
- (void)trackEventForEnterSettingPage;
- (void)dissmissWithCompletion:(id /* block */)a0;
- (void)trackEventForOpenTeenMode;
- (void)dismiss;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)init;
- (void)viewDidLoad;
- (void)setupUI;

@end
