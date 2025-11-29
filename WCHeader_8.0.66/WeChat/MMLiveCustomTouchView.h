@class NSMutableArray;

@interface MMLiveCustomTouchView : UIView

@property (retain, nonatomic) NSMutableArray *customHitViewArray;

- (void)addCustomHitView:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
