@class IESLLPOILynxModel;

@interface IESLLPOILynxContainerView : LLCubeView

@property (retain, nonatomic) IESLLPOILynxModel *poiLynxModel;
@property (nonatomic) BOOL enableEventThrough;

- (id)lynxInitialData;
- (id)nativeModuleClasses;
- (double)fontScaleForCubeWithModel:(id)a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
