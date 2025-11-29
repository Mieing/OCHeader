@class IESLiveTouchableView, NSString, IESLiveComponentContext, NSMutableArray, UIView;
@protocol IESLiveRoomService, IESLiveVideoEffectProcessing, IESLiveEffectProcessService;

@interface HTSLiveRecordCameraProcesser : NSObject <HTSLiveCameraEffectProvider>

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (weak, nonatomic) UIView *previewView;
@property (weak, nonatomic) UIView *virtualLivePreview;
@property (retain, nonatomic) NSMutableArray *cornerLayers;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) id<IESLiveVideoEffectProcessing> videoProcesser;
@property (retain, nonatomic) id<IESLiveEffectProcessService> effectProcesser;
@property (weak, nonatomic) IESLiveTouchableView *touchableView;
@property (nonatomic) BOOL isStreamNotInNormalLayout;
@property (nonatomic) BOOL openGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (BOOL)handleTouchDown:(struct CGPoint { double x0; double x1; })a0 withType:(unsigned long long)a1;
- (BOOL)handleTouchUp:(struct CGPoint { double x0; double x1; })a0 withType:(unsigned long long)a1;
- (BOOL)handlePanEventWithTranslation:(struct CGPoint { double x0; double x1; })a0 location:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)handleLongPressEventWithLocation:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)handleScaleEvent:(double)a0;
- (void)setCornerHidden:(BOOL)a0;
- (void)layoutTouchableViewWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutTouchableViewNormal;
- (void)updatePreviewHeiContrains:(float)a0;
- (void)openGesture:(BOOL)a0;
- (BOOL)streamIsNotInNormalLayout;
- (BOOL)touchableViewPointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)touchableViewHandleTouchEvent:(struct CGPoint { double x0; double x1; })a0 pointerId:(unsigned int)a1 force:(float)a2 majorRadius:(float)a3 eventType:(unsigned long long)a4 pointerCount:(int)a5;
- (id)initWithRoomModel:(id)a0 withContext:(id)a1 componentContext:(id)a2 virtualLivePreview:(id)a3;
- (void)addTouchableView;
- (void)loadCameraPreview;
- (void)addCornerLayerWithRotation:(double)a0 atOrigin:(struct CGPoint { double x0; double x1; })a1 inView:(id)a2;
- (id)getConerLayer:(double)a0;
- (id)initWithRoomModel:(id)a0 withContext:(id)a1 componentContext:(id)a2;
- (id)cameraPreview;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setup;
- (BOOL)handleTouchEvent:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)handleRotationEvent:(double)a0;

@end
