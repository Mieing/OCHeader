@class NSArray, DUXVisualEffectView;
@protocol AWEDisViewDelegate;

@interface DUXPartialSheetCustomView : UIView

@property (nonatomic) double lastHitTime;
@property (weak, nonatomic) id<AWEDisViewDelegate> delegate;
@property (weak, nonatomic) DUXVisualEffectView *contentview;
@property (retain, nonatomic) NSArray *regions;

- (BOOL)shouldDismissSheet:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
