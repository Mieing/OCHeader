@interface WCAdRepeatLimitedPagView : WCAdHangingPagView

@property (nonatomic) unsigned long long remainRepeatCount;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pagInfo:(id)a1 config:(id)a2;
- (void)play;
- (void)stop;
- (void)parseRepeatCount;
- (void)onAnimationEnd:(id)a0;

@end
