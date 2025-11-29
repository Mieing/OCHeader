@class IESIMTextKitEngineCluster;
@protocol IESIMTextKitEngineProtocol;

@interface IESIMTextKitLabelPresenter : AWEIMUIViewPresenter

@property (retain, nonatomic) IESIMTextKitEngineCluster<IESIMTextKitEngineProtocol> *engine;

- (id)createViewWithContext:(id)a0;
- (void)updateView:(id)a0 withContext:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFit:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isMeasurementRequired;
- (BOOL)isTextNode;
- (struct CGSize { double x0; double x1; })p_bounding:(struct CGSize { double x0; double x1; })a0 limited:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;

@end
