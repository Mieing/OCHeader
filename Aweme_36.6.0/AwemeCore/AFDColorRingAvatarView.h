@class UIImageView, AFDColorRingGradientView, AFDColorRingDisplayConfig;

@interface AFDColorRingAvatarView : UIView

@property (retain, nonatomic) AFDColorRingDisplayConfig *config;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) AFDColorRingGradientView *colorRingView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1;
- (void)configWithAvatar:(id)a0 completion:(id /* block */)a1;
- (void)configWithAvatar:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
