@class NSString, UIImageView, UILabel, UIView;

@interface AWEStickerPickerCategoryCell : AWEStickerPickerCategoryBaseCell <CAAnimationDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *yellowDot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCategoryModel:(id)a0;
- (void)executeTwinkleAnimation;
- (void)categoryDidUpdate;
- (void)configIconImageWithCategoryModel:(id)a0 showYellowDot:(BOOL)a1;
- (void)configWithCollectionImage;
- (void)configWithTitle:(id)a0 showYellowDot:(BOOL)a1;
- (void)layoutDot;
- (void)configCollectionImageBackgroundColor:(BOOL)a0;
- (void)updateTitleFontWithSelected:(BOOL)a0 size:(double)a1;
- (void)showYellowDotAnimated:(BOOL)a0;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)setSelected:(BOOL)a0;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)accessibilityElementDidBecomeFocused;
- (void)setupSubviews;

@end
