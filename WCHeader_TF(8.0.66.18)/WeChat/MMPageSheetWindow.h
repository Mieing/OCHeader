@protocol MMPageSheetWindowDelegate;

@interface MMPageSheetWindow : MMUIWindow

@property (weak, nonatomic) id<MMPageSheetWindowDelegate> delegate;

- (id)init;
- (BOOL)shouldHandleStatusBarAppearance;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
