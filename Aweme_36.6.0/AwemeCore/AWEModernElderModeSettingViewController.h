@class AWECodeGenElderGuardStatusModel, NSString, UIImageView, DUXButton, UILabel, DUXContentSheet, UIButton;

@interface AWEModernElderModeSettingViewController : UIViewController <DUXSheetDelegate, AWERouterViewControllerProtocol>

@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIButton *ensureButton;
@property (retain, nonatomic) DUXButton *delayEffectButton;
@property (retain, nonatomic) DUXButton *elderGuardButton;
@property (retain, nonatomic) DUXContentSheet *elderGuardSheet;
@property (retain, nonatomic) AWECodeGenElderGuardStatusModel *elderGuardStatus;
@property (nonatomic) BOOL elderGuardStatusValid;
@property (readonly, copy, nonatomic) NSString *referString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)sheetDidClickMaskArea:(id)a0;
- (void)sheetDidClickCloseButton:(id)a0;
- (void)__setupUI;
- (void)__trackEnterElderModeSetting;
- (void)__setupElderGuardMode;
- (BOOL)enableElderGurdModeOptimize;
- (void)__trackElderModeStatusButtonClick;
- (void)__showElderGuardSheet;
- (void)__trackElderModeStatusTextClick;
- (void)__trackElderModeStatusPopupClick:(id)a0 action:(id)a1;
- (void)__elderGuardPopupButtonClicked;
- (void)__trackElderModeStatusPopupShow:(id)a0;
- (void)__ensureButtonClicked;
- (void)delayEffectButtonDidClick;
- (void)__elderGuardButtonClicked;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;

@end
