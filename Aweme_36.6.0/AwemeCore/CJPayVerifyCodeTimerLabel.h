@class NSString, UIColor;

@interface CJPayVerifyCodeTimerLabel : CJPayTimerView

@property (copy, nonatomic) NSString *silentTitle;
@property (copy, nonatomic) NSString *dynamicTitle;
@property (retain, nonatomic) UIColor *silentColor;
@property (retain, nonatomic) UIColor *dynamicColor;
@property (copy, nonatomic) id /* block */ timeRunOutBlock;
@property (copy, nonatomic) id /* block */ sizeChangedTo;

- (void)startTimerWithCountTime:(int)a0;
- (void)currentCountChangeTo:(int)a0;
- (void)configTimerLabel:(id)a0 silentT:(id)a1 dynamicColor:(id)a2 silentColor:(id)a3;
- (void)changeToDynamicColor;
- (void)contentChange;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;
- (void)setupUI;

@end
