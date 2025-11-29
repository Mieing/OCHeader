@class UILabel, UIView;

@interface ACCRichTextSocialToolbarHashTagItemCell : ACCRichTextSocialToolbarBaseItemCell

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UILabel *hashTagLabel;
@property (retain, nonatomic) UIView *loadingLabelFakeView;

+ (struct CGSize { double x0; double x1; })maxContentDisplaySize;
+ (struct CGSize { double x0; double x1; })sizeWithHashTag:(id)a0;
+ (id)realDisplayHashTagStringWithModel:(id)a0;

- (void)configWithHashTag:(id)a0 style:(long long)a1;
- (void)updateCellColorStyle:(long long)a0;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)setup;

@end
