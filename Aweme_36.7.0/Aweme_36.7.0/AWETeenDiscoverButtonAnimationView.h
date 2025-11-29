@class BDImageView, UIView;

@interface AWETeenDiscoverButtonAnimationView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) BDImageView *iconView;
@property (retain, nonatomic) UIView *dotView;

- (id)p_addIconLayer;
- (void)configWithIconURL:(id)a0 showIcon:(BOOL)a1 showYellowDot:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;

@end
