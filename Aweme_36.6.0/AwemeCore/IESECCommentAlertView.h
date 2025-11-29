@class IESECCommentAlertViewConfig, UILabel, UIView, UIButton;

@interface IESECCommentAlertView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIButton *leftButton;
@property (retain, nonatomic) UIButton *rightButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) IESECCommentAlertViewConfig *config;

- (void)tapCancelButton:(id)a0;
- (void)tapConfirmButton:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)show;
- (void)setupUI;

@end
