@class FixTitleColorButtonChainModel, NSMutableDictionary, MMUIActivityIndicatorView, NSMutableSet, UIView, UIColor, ButtonAttachManager;

@interface FixTitleColorButton : MMUIButton {
    NSMutableSet *m_titleColorStateSet;
    double m_fixHeight;
    double m_fixWidth;
    double m_fixLeftRightMargin;
    UIColor *m_fixBackgroundColor;
}

@property (readonly, copy, nonatomic) FixTitleColorButtonChainModel *zz_setup;
@property (retain, nonatomic) NSMutableDictionary *m_titleColorStateDict;
@property (retain, nonatomic) NSMutableSet *m_backgroundImageStateSet;
@property (retain, nonatomic) MMUIActivityIndicatorView *indicatorView;
@property (retain, nonatomic) UIView *animatedMaskView;
@property (retain, nonatomic) UIView *blurEffectContainerView;
@property (retain, nonatomic) UIColor *m_highlighBorderColor;
@property (retain, nonatomic) UIColor *m_disabledBorderColor;
@property (retain, nonatomic) UIColor *m_normalBorderColor;
@property (retain, nonatomic) UIColor *defaultBGColor;
@property (retain, nonatomic) UIColor *defaultFGColor;
@property (retain, nonatomic) UIColor *disableBGColor;
@property (retain, nonatomic) UIColor *disableFGColor;
@property (nonatomic) BOOL loading;
@property (nonatomic) BOOL isBlurForDefault;
@property (nonatomic) BOOL isBlurForDisable;
@property (nonatomic) BOOL oldStyle;
@property (nonatomic) BOOL wideStyle;
@property (nonatomic) BOOL bigStyle;
@property (nonatomic) BOOL halfScreenStyle;
@property (nonatomic) BOOL mediumStyle;
@property (nonatomic) BOOL smallStyle;
@property (nonatomic) BOOL weakStyle;
@property (nonatomic) double maxWidth;
@property (retain, nonatomic) ButtonAttachManager *attachManager;
@property (nonatomic) double verticalPadding;
@property (nonatomic) double horizontalPadding;

+ (id /* block */)zz_create;

- (void)setTitleColor:(id)a0 forState:(unsigned long long)a1;
- (void)setBackgroundImage:(id)a0 forState:(unsigned long long)a1;
- (void)setBackgroundColor:(id)a0;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (BOOL)isClearColor:(id)a0;
- (void)updateRedesignBackgroundColor;
- (void)addTouchAnimations;
- (void)setTitle:(id)a0 forState:(unsigned long long)a1;
- (void)setImage:(id)a0 forState:(unsigned long long)a1;
- (void)setAttributedTitle:(id)a0 forState:(unsigned long long)a1;
- (struct CGSize { double x0; double x1; })calAttributedSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })imageEdgeInsets;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })imageEdgeInsetsWithSize:(struct CGSize { double x0; double x1; })a0;
- (double)iconImgPadding;
- (double)iconImgHeight;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })titleEdgeInsets;
- (struct CGSize { double x0; double x1; })calImageFitSizeByImage:(id)a0;
- (double)calTitleVerticalEdge;
- (struct CGSize { double x0; double x1; })calculateFittingSize;
- (double)calcWidthNoAttr;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (double)adjustWidthForWidth:(double)a0 ignoreFixWidth:(BOOL)a1;
- (double)adjustWidthForWidth:(double)a0;
- (double)adjustHeight;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFixWidth:(double)a0;
- (double)fixWidth;
- (void)setFixHeight:(double)a0;
- (void)setFixLeftRightMargin:(double)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)setEnabled:(BOOL)a0;
- (id)init;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)sendAction:(id)a0;
- (void)sendActionsForControlEvents:(unsigned long long)a0;
- (void)sendAction:(SEL)a0 to:(id)a1 forEvent:(id)a2;
- (id)currentImage;
- (id)currentAttributedTitle;
- (BOOL)adjustsImageWhenHighlighted;
- (void).cxx_destruct;

@end
