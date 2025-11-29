@class NSString;

@interface AWEIMMessageShareSendButton : UIButton

@property (nonatomic) BOOL animating;
@property (copy, nonatomic) NSString *shareTitleString;
@property (copy, nonatomic) NSString *sentTitleString;
@property (nonatomic) unsigned long long shareState;
@property (nonatomic) BOOL enableDynamicTheme;
@property (nonatomic) double selectedAlpha;

+ (id)buttonWithSelectedAlpha:(double)a0;
+ (id)titleFont;

- (void)p_updateUI;
- (void)p_updateUIAnimated:(BOOL)a0;
- (id)p_backgroundColorForState:(unsigned long long)a0;
- (void)setShareState:(unsigned long long)a0 animated:(BOOL)a1;
- (id)p_titleColorForState:(unsigned long long)a0;
- (id)p_titleForState:(unsigned long long)a0;
- (id)dynamicSendTextBackgroundColor;
- (id)dynamicSendTextTitleColor;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
