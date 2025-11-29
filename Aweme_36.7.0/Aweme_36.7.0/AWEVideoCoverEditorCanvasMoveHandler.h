@class ACCCameraSubscription, UIView, AWEStudioEditCanvasGestureConfig, NSString, AWEVideoPublishViewModel, IESMMCanvasSource, NLEStyCanvas_OC;
@protocol ACCStickerServiceProtocol, IESServiceProvider, ACCStickerProtocol, ACCEditServiceProtocol;

@interface AWEVideoCoverEditorCanvasMoveHandler : ACCStickerHandler <AWEVideoCoverEditorCanvasMoveServiceProtocol>

@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (retain, nonatomic) IESMMCanvasSource *currentCanvasSource;
@property (retain, nonatomic) NLEStyCanvas_OC *currentCanvasStyle;
@property (weak, nonatomic) UIView<ACCStickerProtocol> *currentCanvasWrapperView;
@property (retain, nonatomic) UIView *currentCanvasVirtualView;
@property (nonatomic) struct CGSize { double width; double height; } originCanvasVirtualSize;
@property (nonatomic) double lastScale;
@property (nonatomic) double minScale;
@property (nonatomic) double maxScale;
@property (copy, nonatomic) id /* block */ externalInterceptGestureAction;
@property (retain, nonatomic) AWEStudioEditCanvasGestureConfig *canvasGestureFeatureConfig;
@property (nonatomic) BOOL needTemplateLayoutScale;
@property (nonatomic) double templateLayoutScale;
@property (nonatomic) double templateLayoutPosX;
@property (nonatomic) double templateLayoutPosY;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRepository:(id)a0 serviceProvider:(id)a1;
- (BOOL)canHandleSticker:(id)a0;
- (void)apply:(id)a0 index:(unsigned long long)a1 doRender:(BOOL)a2;
- (BOOL)canRecoverSticker:(id)a0;
- (void)recoverSticker:(id)a0;
- (id)canvasBorderView;
- (id)setupCanvasSticker;
- (void)updatePinchScaleWithScale:(double)a0;
- (id)getCanvasSource;
- (id)canvasVirtualView;
- (void)updateCanvas;
- (void)refreshCanvas;
- (void)updateCanvasStyle;
- (void)updateCanvasWithCutRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inOriginRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)handlePanGesture:(id)a0 inView:(id)a1;
- (void)handlePinchGesture:(id)a0 inView:(id)a1;
- (void)p_setFrameSafely:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forView:(id)a1;
- (double)calculateInitialScaleFromAspectFitToAspectFill;
- (struct CGSize { double x0; double x1; })initialContentSizeUseAspectFit;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })initialFrameInPlayerUseAspectFill;
- (void)updateCanvasVirtualViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateCanvasVirtualViewWithTranslation:(struct CGPoint { double x0; double x1; })a0 scale:(double)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })makeSureFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)updateCanvasThroughVirtualView;
- (void)updateCanvasWithScale:(double)a0 centerPos:(struct CGPoint { double x0; double x1; })a1;
- (id)getCanvasStyle;
- (void).cxx_destruct;
- (void)finish;
- (void)reset;
- (void)addSubscriber:(id)a0;
- (double)currentScale;

@end
