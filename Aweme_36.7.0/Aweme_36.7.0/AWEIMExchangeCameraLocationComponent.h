@class AWEIMExchangeCameraLocationViewModel, AWEIMRadarAnimationView, UIView, UIButton;
@protocol AFDMomentCameraFlowService, IESIMLocationAnchorViewProtocol;

@interface AWEIMExchangeCameraLocationComponent : AFDMomentCameraBaseComponent

@property (weak, nonatomic) id<AFDMomentCameraFlowService> flowService;
@property (retain, nonatomic) AWEIMExchangeCameraLocationViewModel *viewModel;
@property (retain, nonatomic) UIButton *locationButton;
@property (retain, nonatomic) UIView *loadingBackView;
@property (retain, nonatomic) AWEIMRadarAnimationView *radarLoadingView;
@property (retain, nonatomic) UIView<IESIMLocationAnchorViewProtocol> *locationAnchorView;

+ (id)makeLineReplicatorLayerWithLength:(double)a0 lineCount:(long long)a1 lineColor:(id)a2 isHorizontal:(BOOL)a3;

- (void)bindObserver;
- (void)componentDidLoad;
- (void)p_makeAndLayoutRadarLoadingViewIfNeeded;
- (void)p_makeAndLayoutLocationAnchorWithTitle:(id)a0;
- (id)p_make2DGridWithSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
