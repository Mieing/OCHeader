@class DUXBasicSheet, DUXToast, AWEAdOrderCenterPopWindowControlModel, AWEAwemeModel, UILabel, UIButton;

@interface AWEAdOrderCenterFeedbackViewController : UIViewController <AWEAdOrderCenterFeedbackViewController>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) DUXBasicSheet *sheetView;
@property (retain, nonatomic) UIButton *completedButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *nonCompletedButton;
@property (retain, nonatomic) UILabel *topTitleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) DUXToast *toast;
@property (retain, nonatomic) AWEAdOrderCenterPopWindowControlModel *controlInfo;

+ (void)presentOrderCenterFeedbackViewControllerWithModel:(id)a0;
+ (BOOL)isValidPopInfo:(id)a0;
+ (unsigned long long)isCurrentUserEnableOpenFeedbackPageAndUpdateData:(id)a0;
+ (BOOL)canPopupStrongStyleViewWith:(id)a0 and:(unsigned long long)a1;
+ (BOOL)canPopWeakTipsWith:(id)a0 and:(unsigned long long)a1;
+ (void)recordConvertAdModelWillShow:(id)a0;
+ (void)startJumpToAppStoreOrOtherAppWithCreativeID:(id)a0;
+ (void)dismissWeakTips:(id)a0;
+ (void)popUpWeakTipsIfNeed:(id)a0;

- (void)popupStrongWindow;
- (void)popupWeakTips;
- (void)setupPopUpView;
- (void)setupTipsWith:(id)a0;
- (void)setupToastWithText:(id)a0;
- (void)configPopUpViewConstraint;
- (void)didTappedCloseView:(id)a0;
- (void)pressNonCompletedButton:(id)a0;
- (void)pressCompletedButton:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
