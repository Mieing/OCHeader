@class MMBadgeView, UIColor, UIView;

@interface TextStateBlurButton : MMUIButton

@property (retain, nonatomic) UIView *highlightMaskView;
@property (retain, nonatomic) UIView *backgroundBlurView;
@property (retain, nonatomic) MMBadgeView *badgeView;
@property (nonatomic) BOOL useRoundCorner;
@property (retain, nonatomic) UIColor *blurColor;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)setBtnBlurEffect:(unsigned int)a0;
- (void)removeBtnBlurEffect;
- (void)setCornerRadius:(double)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void)showSmallRedDotWithoutNumber;
- (void)removeSmallRedDotWithoutNumber;
- (void)layoutBadgeView;
- (void).cxx_destruct;

@end
