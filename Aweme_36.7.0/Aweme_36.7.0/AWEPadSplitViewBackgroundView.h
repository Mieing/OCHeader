@protocol AWEPadSplitViewService;

@interface AWEPadSplitViewBackgroundView : UIView

@property (weak, nonatomic) id<AWEPadSplitViewService> service;

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
