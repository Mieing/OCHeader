@interface FBSDKButton : UIButton {
    BOOL _skipIntrinsicContentSizing;
    BOOL _isExplicitlyDisabled;
}

@property (readonly, nonatomic, getter=isImplicitlyDisabled) BOOL implicitlyDisabled;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)awakeFromNib;
- (void)dealloc;
- (void)setEnabled:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)sizeToFit;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)logTapEventWithEventName:(id)a0 parameters:(id)a1;
- (void)checkImplicitlyDisabled;
- (void)configureButton;
- (void)configureWithIcon:(id)a0 title:(id)a1 backgroundColor:(id)a2 highlightedColor:(id)a3;
- (void)configureWithIcon:(id)a0 title:(id)a1 backgroundColor:(id)a2 highlightedColor:(id)a3 selectedTitle:(id)a4 selectedIcon:(id)a5 selectedColor:(id)a6 selectedHighlightedColor:(id)a7;
- (id)defaultBackgroundColor;
- (id)defaultDisabledColor;
- (id)defaultFont;
- (id)defaultHighlightedColor;
- (id)defaultIcon;
- (id)defaultSelectedColor;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 title:(id)a1;
- (void)_applicationDidBecomeActiveNotification:(id)a0;
- (id)_backgroundImageWithColor:(id)a0 cornerRadius:(double)a1 scale:(double)a2;
- (void)_configureWithIcon:(id)a0 title:(id)a1 backgroundColor:(id)a2 highlightedColor:(id)a3 selectedTitle:(id)a4 selectedIcon:(id)a5 selectedColor:(id)a6 selectedHighlightedColor:(id)a7;
- (double)_fontSizeForHeight:(double)a0;
- (double)_heightForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_heightForFont:(id)a0;
- (double)_marginForHeight:(double)a0;
- (double)_paddingForHeight:(double)a0;
- (double)_textPaddingCorrectionForHeight:(double)a0;

@end
