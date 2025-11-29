@protocol AWENearbyUGCPendantBackgroundViewDelegate;

@interface AWENearbyUGCPendantBackgroundView : UIView

@property (weak, nonatomic) id<AWENearbyUGCPendantBackgroundViewDelegate> delegate;

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
