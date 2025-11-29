@class CAGradientLayer, UIFont, UIImageView, CATextLayer;

@interface MJTemplateComposingButton : MMUIButton

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) CATextLayer *textLayer;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIFont *customFont;
@property (nonatomic) struct CGSize { double width; double height; } textContentWidth;

- (id)init;
- (void)layoutSubviews;
- (void)updateUIForEnabled;
- (void)updateUIForDisabled;
- (void)setupUIForEnabled;
- (void)setupUIForDisabled;
- (void)clearPreviousEffect;
- (void).cxx_destruct;

@end
