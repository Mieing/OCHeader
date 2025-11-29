@class NSMutableArray, MMLiveTaskId;

@interface MMFinderLiveOlyBarrageFloatingContainerView : UIView

@property (retain, nonatomic) NSMutableArray *floatingBarragePubbleRouteList;
@property (nonatomic) struct CGSize { double width; double height; } currSelfSize;
@property (retain, nonatomic) MMLiveTaskId *taskId;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)addBarragePubbleCell:(id)a0 presentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 barrageTravel:(id)a2;
- (void)notifyOtherPubbleRoutesEndFloatingExcept:(id)a0;
- (id)requestBarrageHitTestViewWithConvertedPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)clearBarragePubbles;
- (BOOL)isContainPubbleCell:(id)a0 barrageTravel:(id)a1;
- (id)getFinderLiveTask;
- (void).cxx_destruct;

@end
