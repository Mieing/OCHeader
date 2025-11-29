@class YYLabel, NSTimer, BDPCDDynamicCardCountDownModel;

@interface AWEECOMIMDynamicCardCountDownView : AWEECOMIMDynamicCardBaseElementView

@property (retain, nonatomic) YYLabel *countDownLable;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) BDPCDDynamicCardCountDownModel *countDownModel;

+ (struct CGSize { double x0; double x1; })sizeWithElementModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)checkSupportSubElementViewWithElementModel:(id)a0;
+ (double)widthWithElementModel:(id)a0;
+ (double)heightWithElementModel:(id)a0;
+ (struct CGSize { double x0; double x1; })textSizeWithWithModel:(id)a0;
+ (long long)countDownDiff:(id)a0;
+ (id)countDownText:(id)a0;
+ (BOOL)isVisible:(id)a0;

- (void)timerInvalidate;
- (void)updateWithElememtModel:(id)a0;
- (double)widthWithElementModel:(id)a0;
- (double)heightWithElementModel:(id)a0;
- (void)onCountDown;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
