@class UIImageView, DUXPluralAvatar, UILabel, UIView;

@interface AWEEcomKolVideoBottomBarView : UIView

@property (retain, nonatomic) UIView *roundCornerView;
@property (retain, nonatomic) DUXPluralAvatar *avatars;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *expandImageView;

- (void)updateWithAwemeModel:(id)a0;
- (void)onTapBottomBar;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)setHidden:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
