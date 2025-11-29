@protocol WCFinderLiveStarterBaseViewDelegate;

@interface WCFinderLiveStarterBaseView : UIView

@property (weak, nonatomic) id<WCFinderLiveStarterBaseViewDelegate> actionDelegate;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
