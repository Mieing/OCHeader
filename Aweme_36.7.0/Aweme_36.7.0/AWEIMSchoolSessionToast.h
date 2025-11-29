@class UIImageView, UILabel;

@interface AWEIMSchoolSessionToast : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;

+ (void)showWithMessage:(id)a0;
+ (void)showView:(id)a0;

- (void)p_createComponents;
- (void)p_layoutComponents;
- (void)p_configComponentsWithMessage:(id)a0;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
