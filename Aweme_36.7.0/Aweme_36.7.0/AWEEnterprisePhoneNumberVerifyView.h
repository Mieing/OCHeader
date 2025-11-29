@class AWEEnterprisePhoneNumberVerifyViewModel, UILabel, UIView, UIButton;

@interface AWEEnterprisePhoneNumberVerifyView : AWEEnterpriseMessageBaseView

@property (weak, nonatomic) AWEEnterprisePhoneNumberVerifyViewModel *viewModel;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIButton *verifyPhoneBtn;
@property (retain, nonatomic) UILabel *phoneLabel;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIView *lineView;

- (void)bindViewModel:(id)a0;
- (void)constraintSubviews;
- (void)tapVerifyPhone;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })currentContentSize;
- (void)setupUI;

@end
