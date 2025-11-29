@class NSString, LLCubeView, BDXBridgeEventSubscriber, LLCubeModel;

@interface IESLLPendantContainerView : UIView

@property (nonatomic) struct CGPoint { double x; double y; } originalCenter;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frameValue;
@property (nonatomic) double margin;
@property (retain, nonatomic) LLCubeView *cubeView;
@property (retain, nonatomic) LLCubeModel *cubeModel;
@property (retain, nonatomic) BDXBridgeEventSubscriber *updateLogSubscriber;

- (void)commonInit:(id)a0 vcScheme:(id)a1;
- (void)addPublishEventSubscriber;
- (void)createCubeViewWithUrl:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 andBizData:(id)a2 vcScheme:(id)a3;
- (void)snapToEdge;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 margin:(double)a1 andLynxUrl:(id)a2 andBizData:(id)a3 vcScheme:(id)a4;
- (void)handlePan:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
