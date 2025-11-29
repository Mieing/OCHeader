@class UILabel, NSString;

@interface AWETextTemplateCategoryCell : AWETextTemplateCategoryBaseCell <CAAnimationDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCategoryModel:(id)a0;
- (void)executeTwinkleAnimation;
- (struct CGSize { double x0; double x1; })titleLabelSizeWithTitle:(id)a0 height:(double)a1;
- (void)categoryDidUpdate;
- (void)configIconImageWithCategoryModel:(id)a0 showYellowDot:(BOOL)a1;
- (void)configWithCollectionImage;
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
