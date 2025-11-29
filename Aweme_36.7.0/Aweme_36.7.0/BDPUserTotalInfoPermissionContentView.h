@class NSString, UIImageView, UIImage, UILabel, UIView, BDPCheckBox;

@interface BDPUserTotalInfoPermissionContentView : UIView

@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *bindPhone;
@property (copy, nonatomic) NSString *subTitleText;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) UILabel *phoneNumberDetailLabel;
@property (retain, nonatomic) UILabel *phoneNumberLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UILabel *descriptionDetailLabel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *avatarContentContainer;
@property (retain, nonatomic) UIView *publicInfoContentContainer;
@property (retain, nonatomic) UIView *phoneNumberContentContainer;
@property (retain, nonatomic) UIImage *avatar;
@property (retain, nonatomic) UIImageView *userIconView;
@property (retain, nonatomic) UIImageView *mandatoryIconView;
@property (nonatomic) BOOL isAweType;
@property (weak, nonatomic) BDPCheckBox *checkBox;
@property (copy, nonatomic) id /* block */ didClickedPhoneNumberGrantedStatus;

- (void)setupContainer;
- (void)setupSubTitleLabel;
- (void)setUpTotalInfoViewWithAvatar:(id)a0 nickname:(id)a1 bindPhone:(id)a2 subTitleText:(id)a3 isAweType:(BOOL)a4;
- (void)setupMainComponents;
- (void)setupAvatarComponents;
- (void)setupPublicInfoComponents;
- (void)setupPhoneNumberComponents;
- (void)setupAvatarContentContainer;
- (void)setupUserIconView;
- (void)setupUserNameLabel;
- (void)setupPublicInfoContentContainer;
- (void)setupMandatoryIconView;
- (void)setupPublicInfoDescriptionLabel;
- (void)setupPhoneNumberContentContainer;
- (void)setupPhoneNumberCheckBox;
- (void)setupPhoneNumberLabel;
- (void)phoneNumberClicked;
- (void)setupBorders;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)setupTitleLabel;

@end
