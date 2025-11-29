@class UIColor;

@interface AWEUIButton : UIButton

@property (nonatomic) BOOL needChangeAlphaWhenPressed;
@property (nonatomic) BOOL needHighlightAnimation;
@property (nonatomic) BOOL usingConstColor;
@property (nonatomic) double selectedAlpha;
@property (retain, nonatomic) UIColor *originBackgroundColor;
@property (copy, nonatomic) id /* block */ tappedBlock;

- (void)invokeTouchUpInsideButtonBlock:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;

@end
