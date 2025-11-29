@class UIImageView, UILabel;

@interface AWEVideoProductImageTitleView : UIView

@property (retain, nonatomic) UIImageView *titleImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) double rightOffset;
@property (nonatomic) double margin;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;

- (void)setImageTitleMargin:(double)a0;
- (Class)largeFontAdaptUtilClass;
- (BOOL)enableAdaptLargeFontMode;
- (BOOL)enableAdaptLargeFontModeV3;
- (void)removeTitleImageView;
- (void)setTitleRightOffset:(double)a0;
- (void)setImageWithURLArray:(id)a0;
- (struct CGSize { double x0; double x1; })largeFontAdaptImageSize:(struct CGSize { double x0; double x1; })a0;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)setTitleColor:(id)a0;
- (BOOL)accessibilityElementsHidden;
- (void)setImage:(id)a0;
- (id)init;
- (void)setTitleFont:(id)a0;
- (void)setTitleText:(id)a0;
- (id)titleLabelFont;
- (void)setupSubviews;

@end
