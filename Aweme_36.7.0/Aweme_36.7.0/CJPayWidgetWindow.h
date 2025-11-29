@protocol CJPayWidgetWindowEventDelegate;

@interface CJPayWidgetWindow : UIWindow

@property (weak, nonatomic) id<CJPayWidgetWindowEventDelegate> eventDelegate;

- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
