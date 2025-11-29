@class IESECSliceXBaseElementView, NSMutableDictionary, IESECSliceXAnimatableLayerState;

@interface IESECSliceXAnimatableLayerChangesListener : NSObject

@property (weak, nonatomic) IESECSliceXBaseElementView *elementView;
@property (retain, nonatomic) IESECSliceXAnimatableLayerState *bgViewBoundsState;
@property (retain, nonatomic) IESECSliceXAnimatableLayerState *bgViewPositionState;
@property (retain, nonatomic) IESECSliceXAnimatableLayerState *bgGradientLayerBoundsState;
@property (retain, nonatomic) IESECSliceXAnimatableLayerState *bgGradientLayerPositionState;
@property (retain, nonatomic) IESECSliceXAnimatableLayerState *borderPathState;
@property (retain, nonatomic) IESECSliceXAnimatableLayerState *cornerRadiusPathState;
@property (retain, nonatomic) NSMutableDictionary *savedLayerStates;

- (id)initWithElementView:(id)a0;
- (void)saveLayerState:(id)a0;
- (void).cxx_destruct;
- (id)finish;
- (void)begin;

@end
