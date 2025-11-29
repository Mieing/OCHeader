@class UIImageView, UILabel;

@interface RTVExceptionView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *informativeTextLabel;

- (void)p_configureLayout;
- (void)configWithIcon:(id)a0 title:(id)a1 subTitle:(id)a2;
- (void)p_setupUI;
- (void).cxx_destruct;

@end
