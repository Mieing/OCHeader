@class NSMutableArray;

@interface MinimizeIconAndStateWithBorderView : MinimizeIconAndStateView

@property (retain, nonatomic) NSMutableArray *lineLayerList;
@property (nonatomic) BOOL isRoundMaskPathAfterAnimation;

- (void)removeLineCircleOnIcon;
- (void)addLineCircleLayerOnIcon:(id)a0 LinePath:(id)a1;
- (void)resetLineCircleOnIcon;
- (void)resetIconViewSublayer:(double)a0;
- (void)updateAllSublayerAnimated:(double)a0 ViewPath:(id)a1 Duration:(double)a2;
- (void).cxx_destruct;

@end
