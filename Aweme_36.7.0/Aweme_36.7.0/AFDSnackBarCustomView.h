@class AFDSnackBarButton, UIImageView, DUXPluralAvatar, UILabel, AFDSnackBarCustomViewContext;

@interface AFDSnackBarCustomView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) AFDSnackBarButton *rightBtn;
@property (retain, nonatomic) DUXPluralAvatar *multiAvatars;
@property (retain, nonatomic) AFDSnackBarCustomViewContext *context;

- (void)initSubViews;
- (void)configWithContext:(id /* block */)a0;
- (void)p_configTitleLabel:(id)a0;
- (void)p_configIconImage;
- (void)p_configRightButton:(id)a0;
- (void)p_configMultiAvatars;
- (void)p_configRightView:(id)a0;
- (double)p_calculateBtnTitleLabelWidth;
- (void)didTappedActionBtn;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithContext:(id /* block */)a0;
- (id)init;

@end
