@class UITabBar;

@interface AWEFakeTabBar : UITabBar

@property (weak, nonatomic) UITabBar *realBar;

- (id)awe_snapshotImageView;
- (void)setAwe_blockHidden:(BOOL)a0;
- (void)setAwe_blockAlpha:(BOOL)a0;
- (BOOL)awe_blockHidden;
- (BOOL)awe_blockAlpha;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isHidden;
- (void)setHidden:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)alpha;
- (void)setAlpha:(double)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
