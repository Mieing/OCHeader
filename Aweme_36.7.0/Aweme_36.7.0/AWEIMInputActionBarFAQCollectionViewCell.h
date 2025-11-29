@class UILabel, UIVisualEffectView;

@interface AWEIMInputActionBarFAQCollectionViewCell : UICollectionViewCell

@property (nonatomic, getter=isFilled) BOOL filled;
@property (nonatomic) BOOL isLightStyle;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIVisualEffectView *blurView;

+ (struct CGSize { double x0; double x1; })itemSize:(id)a0;

- (void)addBlurView;
- (void)p_setupViews;
- (void)removeBlurView;
- (void)__refreshBasicUI;
- (void)configCell:(id)a0 isLightColor:(BOOL)a1;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
