@class UIView, NSString, UIImage, UIFont, NSMutableDictionary, UIImageView, CAGradientLayer, UILabel, UIColor;

@interface IESECButton : UIControl {
    BOOL _useBDImage;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) NSMutableDictionary *stateMap;
@property (nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long corners;
@property (readonly, nonatomic) UIImage *currentImage;
@property (copy, nonatomic) NSString *currentState;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (nonatomic) long long imagePostion;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) long long imageViewContentMode;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentEdgeInsets;
@property (nonatomic) double imageTextSpacing;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) double imageCornerRadius;
@property (nonatomic) double imageBorderWidth;
@property (retain, nonatomic) UIColor *imageBorderColor;
@property (nonatomic) long long horizontalAlignment;
@property (nonatomic) long long verticalAlignment;

+ (struct CGSize { double x0; double x1; })buttonSizeWithTextWithIconElement:(id)a0;

- (void)iesec_asyncSetBundleImageNamed:(id)a0 forState:(id)a1;
- (void)iesec_asyncSetBundleImageNamed:(id)a0 forState:(id)a1 renderingMode:(long long)a2;
- (void)iesec_setCurrentBundleImageName:(id)a0 forState:(id)a1;
- (id)iesec_currentBundleImageNameForState:(id)a0;
- (id)iesec_currentBundleImageMap;
- (void)iesec_setCurrentBundleImageMap:(id)a0;
- (void)setImageViewHidden:(BOOL)a0;
- (void)iesec_setTouchSize:(struct CGSize { double x0; double x1; })a0;
- (void)setGradientColors:(id)a0 startPoint:(struct CGPoint { double x0; double x1; })a1 endPoint:(struct CGPoint { double x0; double x1; })a2 locations:(id)a3;
- (void)setBackgroundColor:(id)a0 borderColor:(id)a1 borderWidth:(double)a2 cornerRadius:(double)a3;
- (void)setAsyncAttributedStringWithMaker:(id /* block */)a0;
- (void)setBackgroundColor:(id)a0 borderColor:(id)a1 borderWidth:(double)a2 cornerRadius:(double)a3 atCorners:(unsigned long long)a4;
- (id)initWithColorType:(long long)a0 sizeType:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 useBDImage:(BOOL)a1;
- (BOOL)validateValueForKey:(id)a0 forState:(id)a1;
- (id)valueForKey:(id)a0 forState:(id)a1;
- (void)setValue:(id)a0 forKey:(id)a1 forState:(id)a2;
- (void)removeValueForKey:(id)a0 forState:(id)a1;
- (void)setImageURLArray:(id)a0 placeholderImage:(id)a1 size:(struct CGSize { double x0; double x1; })a2 forState:(id)a3;
- (void)setImageURL:(id)a0 placeholderImage:(id)a1 size:(struct CGSize { double x0; double x1; })a2 forState:(id)a3;
- (id)initWithBDImage:(BOOL)a0;
- (void)setMultiLineAttributedTitle:(id)a0 forState:(id)a1;
- (id)imageURLForState:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })iesec_HitTestExpendEdgeInsets;
- (struct CGSize { double x0; double x1; })iesec_touchSize;
- (void)iesec_setHitTestExpendEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setupImagePositionWithIconDirection:(unsigned long long)a0;
- (void)setupWithTextWithIconElement:(id)a0;
- (void)setTitleLineBreakMode:(long long)a0;
- (void).cxx_destruct;
- (void)setImageTintColor:(id)a0;
- (void)setAttributedTitle:(id)a0 forState:(id)a1;
- (void)updateConstraints;
- (void)layout;
- (void)setTitle:(id)a0 forState:(id)a1;
- (void)setImage:(id)a0 forState:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)titleForState:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)backgroundColorForState:(id)a0;
- (void)setBackgroundColor:(id)a0 forState:(id)a1;
- (void)setTitleColor:(id)a0 forState:(id)a1;
- (id)titleColorForState:(id)a0;
- (id)imageForState:(id)a0;
- (id)attributedTitleForState:(id)a0;
- (void)updateColor:(long long)a0;
- (void)stateDidChange;
- (void)updateSize:(long long)a0;

@end
