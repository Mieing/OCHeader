@class UIColor, UIImageView, UIView, IESLiveGradientView;

@interface IESLiveAvatarContainerView : UIView

@property (retain, nonatomic) IESLiveGradientView *containerView;
@property (nonatomic) struct CGSize { double width; double height; } mSize;
@property (retain, nonatomic) UIView *whiteBorderView;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIColor *borderColor;
@property (readonly, nonatomic) IESLiveGradientView *borderView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
