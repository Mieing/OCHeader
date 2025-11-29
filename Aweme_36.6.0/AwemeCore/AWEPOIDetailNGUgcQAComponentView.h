@class AWEPOIDetailNGUgcQAComponentViewModel, AWEPOIDetailFeedUgcQaFloatingView;

@interface AWEPOIDetailNGUgcQAComponentView : DitoComponentView

@property (retain, nonatomic) AWEPOIDetailFeedUgcQaFloatingView *ugcQaView;
@property (retain, nonatomic) AWEPOIDetailNGUgcQAComponentViewModel *vm;

- (void)updateViewModel:(id)a0;
- (void)bindActionAndState;
- (void)updateQAViewPositionIfNeed;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;

@end
