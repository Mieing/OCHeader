@class UIImageView, UIColor, UIView;

@interface AWEIMStreakPetElfWidgetGuideSmallAvatarView : UIView

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIView *customMaskView;
@property (retain, nonatomic) UIView *dotView;
@property (retain, nonatomic) UIColor *dotColor;

- (void)renderWithAvatarURL:(id)a0 dotColor:(id)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
