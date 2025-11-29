@class UIColor, DUXLoadingCircleView, UIImageView, NSString, UIView, UIFont, UIButton;

@interface DUXBasicButton : UIControl

@property (nonatomic) unsigned long long resizingStrategy;
@property (retain, nonatomic) UIView *interactionMaskView;
@property (retain, nonatomic) UIImageView *leftIconImageView;
@property (retain, nonatomic) UIImageView *rightIconImageView;
@property (retain, nonatomic) DUXLoadingCircleView *loadingView;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) BOOL loading;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ leftIconProvider;
@property (copy, nonatomic) id /* block */ rightIconProvider;
@property (nonatomic) BOOL useInteractionEffect;
@property (nonatomic) double customWidth;
@property (retain, nonatomic) UIColor *contentTintColor;
@property (retain, nonatomic) UIColor *contentBackgroundColor;
@property (retain, nonatomic) UIFont *contentTitleFont;
@property (nonatomic) double contentIconWidth;
@property (nonatomic) double horizentalContentEdgeInset;
@property (nonatomic) double contentCornerRadius;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } interactionZoneEnlargeInsets;

- (void)awe_themeDidChange:(long long)a0;
- (void)awe_themeReload;
- (void)updateIconImage;
- (void)hideLoading;
- (id)p_borderColor;
- (unsigned long long)colorStyleToSuit:(long long)a0;
- (BOOL)canInteractToPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)p_isIconStyle;
- (double)p_horizentalPadding;
- (double)p_loadingEdgeLength;
- (id)p_interactionMaskColor;
- (void)p_setupFrame;
- (void)showInteractionMask;
- (void)hideInteractionMask;
- (double)p_borderWidth;
- (id)p_shadowColor;
- (struct CGSize { double x0; double x1; })p_shadowOffset;
- (double)p_shadowRadius;
- (double)p_shadowOpacity;
- (id)revisedContentTintColor:(id)a0;
- (void).cxx_destruct;
- (void)setTitle:(id)a0 forState:(unsigned long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setup;
- (void)setEnabled:(BOOL)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)showLoading;

@end
