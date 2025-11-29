@class UIImageView, UIView;

@interface AWEKefuAvatarView : UIView

@property (retain, nonatomic) UIView *volumeView;
@property (retain, nonatomic) UIImageView *avatarImageView;

- (void)loadVolumeView;
- (void)loadAvatarImageView;
- (void)updateWithUrlString:(id)a0;
- (void)startVolumeAnimation:(double)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;

@end
