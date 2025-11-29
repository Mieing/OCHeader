@class CJPayStyleButton, UIImageView, CJPayButton, UILabel, CJPayBaseVerifyManager, CJPayResultPageGuideInfoModel;

@interface CJPayGuideResetPwdPopUpViewController : CJPayPopUpBaseViewController

@property (retain, nonatomic) UIImageView *headerImgView;
@property (retain, nonatomic) UILabel *headerDescLabel;
@property (retain, nonatomic) UILabel *mainTitleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) CJPayStyleButton *topButton;
@property (retain, nonatomic) CJPayButton *bottomButton;
@property (weak, nonatomic) CJPayBaseVerifyManager *verifyManager;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (copy, nonatomic) id /* block */ trackerBlock;
@property (retain, nonatomic) CJPayResultPageGuideInfoModel *guideInfoModel;

- (void)p_bottomButtonTapped;
- (void)p_jumpLynxSetPassword;
- (void)p_jumpLynxResetPassword;
- (void)p_topButtonTapped;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupUI;

@end
