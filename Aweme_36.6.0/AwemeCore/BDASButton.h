@class UIColor, NSString, BDASImageView, BDASLabel, UIImage, NSAttributedString, NSMutableDictionary;

@interface BDASButton : BDASControl {
    NSMutableDictionary *_titleDict;
    NSMutableDictionary *_titleColorDict;
    NSMutableDictionary *_titleShadowColorDict;
    NSMutableDictionary *_attributedTitleDict;
    NSMutableDictionary *_imageDict;
    NSMutableDictionary *_backgroundImageDict;
}

@property (retain, nonatomic) BDASLabel *titleLabel;
@property (retain, nonatomic) BDASImageView *imageView;
@property (retain, nonatomic) BDASImageView *backgroundImageView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cachedTitleRect;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentEdgeInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } titleEdgeInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } imageEdgeInsets;
@property (readonly, nonatomic) UIColor *currentTitleColor;
@property (readonly, nonatomic) NSString *currentTitle;
@property (readonly, nonatomic) UIColor *currentTitleShadowColor;
@property (readonly, nonatomic) UIImage *currentImage;
@property (readonly, nonatomic) UIImage *currentBackgroundImage;
@property (readonly, nonatomic) NSAttributedString *currentAttributedTitle;
@property (nonatomic) BOOL reversesTitleShadowWhenHighlighted;
@property (nonatomic) BOOL adjustsImageWhenHighlighted;
@property (nonatomic) BOOL adjustsImageWhenDisabled;

- (void)updateTitleColor;
- (void)updateTitleShadowColor;
- (void)updateButtonContent;
- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateImage;
- (void)setAttributedTitle:(id)a0 forState:(unsigned long long)a1;
- (void)setNeedsDisplay;
- (void)setTitle:(id)a0 forState:(unsigned long long)a1;
- (void)setSelected:(BOOL)a0;
- (void)setBackgroundImage:(id)a0 forState:(unsigned long long)a1;
- (void)setImage:(id)a0 forState:(unsigned long long)a1;
- (id)backgroundImageForState:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)titleForState:(unsigned long long)a0;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })backgroundRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setEnabled:(BOOL)a0;
- (void)tintColorDidChange;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setTitleColor:(id)a0 forState:(unsigned long long)a1;
- (void)setTitleShadowColor:(id)a0 forState:(unsigned long long)a1;
- (id)titleColorForState:(unsigned long long)a0;
- (id)titleShadowColorForState:(unsigned long long)a0;
- (id)imageForState:(unsigned long long)a0;
- (id)attributedTitleForState:(unsigned long long)a0;
- (void)updateTitle;
- (void)updateBackgroundImage;

@end
