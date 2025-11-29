@class BDPCloseButton, NSString, UIView, BDPCheckBox, UIImageView, UIButton, BDPGoldPrivacyButton, BDPGoldIconView, UILabel;

@interface BDPGoldPyConfirmView : UIView

@property (weak, nonatomic) id delegate;
@property (nonatomic) unsigned long long goldNum;
@property (copy, nonatomic) NSString *info;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) UIView *confirmView;
@property (retain, nonatomic) UIImageView *bgImage;
@property (retain, nonatomic) BDPCloseButton *closeButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) BDPGoldPrivacyButton *privacyButton;
@property (retain, nonatomic) UIButton *linkButton;
@property (retain, nonatomic) UIView *goldBoxView;
@property (retain, nonatomic) BDPGoldIconView *goldIcon;
@property (retain, nonatomic) UILabel *goldNumLabel;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) BDPCheckBox *checkBox;
@property (retain, nonatomic) UILabel *checkBoxLabel;
@property (retain, nonatomic) UIView *privacyView;

- (void)didClickClose;
- (void)didClickConfirm;
- (double)safeBottom;
- (void)setupLayoutForConfirmView;
- (void)drawTopLeftAndRightCorner:(id)a0;
- (void)didClickPrivacy;
- (void)didClickPrivacyBack;
- (void)didClickPrivacyLink;
- (void)setupLayoutForPrivacyView;
- (id)initWithGoldNum:(unsigned long long)a0 info:(id)a1 type:(unsigned long long)a2 delegate:(id)a3;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;
- (void)setupLayout;

@end
