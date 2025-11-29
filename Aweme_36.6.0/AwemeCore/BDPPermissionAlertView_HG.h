@class NSLayoutConstraint, NSString, UIImageView, UILabel, UIView, UIButton;
@protocol BDPPermissionViewDelegate_HG;

@interface BDPPermissionAlertView_HG : UIView

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *iconURL;
@property (copy, nonatomic) NSString *cancelText;
@property (copy, nonatomic) NSString *confirmText;
@property (retain, nonatomic) UIView *logoContainer;
@property (retain, nonatomic) UIView *mainContainer;
@property (retain, nonatomic) UIView *footerContainerView;
@property (retain, nonatomic) UIView *contentContainerView;
@property (retain, nonatomic) UIView *privacyContainerView;
@property (retain, nonatomic) UIView *footerView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *privacyView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) NSLayoutConstraint *contentViewLeftConstraint;
@property (retain, nonatomic) NSLayoutConstraint *contentViewRightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *titleLabelLeftConstraint;
@property (retain, nonatomic) NSLayoutConstraint *titleLabelLeftNotIconConstraint;
@property (weak, nonatomic) id<BDPPermissionViewDelegate_HG> delegate;

- (void)setupConfirmButton;
- (void)onCancelButtonTaped:(id)a0;
- (void)onConfirmButtonTaped:(id)a0;
- (id)initWithTitle:(id)a0 iconURL:(id)a1 contentView:(id)a2 footerView:(id)a3 confirmText:(id)a4 cancelText:(id)a5 privacyView:(id)a6;
- (void)updateCancelButtonBottom;
- (void)updateConfirmButtonBottom;
- (void)updateFooterViewBottom;
- (void)setupPrivacyView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;
- (void)setupTitleLabel;
- (void)setupContentView;

@end
