@class NSString;

@interface AWESearchCardInteractorButton : UIButton

@property (copy, nonatomic) NSString *accessKey;
@property (nonatomic) BOOL needImageAnimation;
@property (nonatomic) BOOL needWholeAnimation;
@property (nonatomic) double realContentWidth;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (copy, nonatomic) id /* block */ touchUpInsideBlock;
@property (copy, nonatomic) id /* block */ didBecomeVoiceOverFocused;

+ (id)showStringFromNumber:(long long)a0;
+ (id)emptyDescWhenNumZero;
+ (double)realContentWidthForContent:(long long)a0 imageWidth:(double)a1;

- (id)showStringFromNumber:(long long)a0;
- (void)_onTouchUpInside;
- (void)announceAccessibility:(id)a0;
- (void)adjustButtonUIStyle;
- (id)lottieDataFromGecko:(id)a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)accessibilityElementDidBecomeFocused;

@end
