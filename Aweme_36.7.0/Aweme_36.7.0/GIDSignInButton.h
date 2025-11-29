@class UIImageView;

@interface GIDSignInButton : UIControl {
    UIImageView *_icon;
}

@property (nonatomic) unsigned long long buttonState;
@property (nonatomic) long long style;
@property (nonatomic) long long colorScheme;

+ (id)buttonTextFont;
+ (struct CGSize { double x0; double x1; })textSize:(id)a0 withFont:(id)a1;

- (void)switchToPressed;
- (void)switchToNormal;
- (void)switchToDisabled;
- (BOOL)isConstraint:(id)a0 equalToConstraint:(id)a1;
- (void)drawButtonBackground:(struct CGContext { } *)a0;
- (void)drawButtonText:(struct CGContext { } *)a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (double)minWidth;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)buttonText;
- (void)sharedInit;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setEnabled:(BOOL)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateUI;
- (void)loadIcon;

@end
