@class DUXAlertDialog, UIImageView, ACCAIGCLoraTextView, ACCAIGCLoraCreateInstructionsViewController, AWEAIGCLoraSuiteTipsVCConfig, NSDictionary;

@interface ACCAIGCLoraLawAlertView : UIView

@property (retain, nonatomic) UIImageView *bottomLeftIconView;
@property (retain, nonatomic) ACCAIGCLoraTextView *bottomRightLawTextView;
@property (retain, nonatomic) ACCAIGCLoraCreateInstructionsViewController *instructionsViewController;
@property (retain, nonatomic) DUXAlertDialog *alertDialogView;
@property (nonatomic) BOOL didSelectPermissionIcon;
@property (retain, nonatomic) AWEAIGCLoraSuiteTipsVCConfig *uiConfig;
@property (nonatomic) BOOL isConfirm;
@property (nonatomic) unsigned long long enterFrom;
@property (copy, nonatomic) NSDictionary *trackInfo;
@property (copy, nonatomic) id /* block */ tapConfirmButton;
@property (copy, nonatomic) id /* block */ tapRejectButton;

+ (id)confirmLawCacheKey;
+ (void)setConfirmLawForCurrentUser;

- (id)initWithUIConfig:(id)a0;
- (void)bindService;
- (void)setConfirmLawText:(BOOL)a0;
- (BOOL)getCurrentUserIsConfirmLaw;
- (BOOL)isConfirmLawFromCurrentUser;
- (id)getLinkTextRectsInRange;
- (void)trackLeaveAgreementAlertWithType:(unsigned long long)a0;
- (void)showInstructionsViewController;
- (void)tapBottomLeftIconEvent:(id)a0;
- (void)tapBottomRightTextEvent:(id)a0;
- (void).cxx_destruct;
- (void)showAlertView;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupView;

@end
