@class NSString, QUniversalMapCounter, TBOrderedSafeDictionary, QMediator;
@protocol glOverlayGestureClickDelegate;

@interface QLayerManager : NSObject <QOverlayProtocol> {
    void *_impl;
}

@property (weak, nonatomic) QMediator *mediator;
@property (retain, nonatomic) TBOrderedSafeDictionary *viewContainer;
@property (weak, nonatomic) QUniversalMapCounter *universalCounter;
@property (weak, nonatomic) QUniversalMapCounter *groundOverlayCounter;
@property (nonatomic) double deltalTimeStamp;
@property (weak, nonatomic) id<glOverlayGestureClickDelegate> glOverlayClickDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void *)impl;
- (void)makeDirty;
- (float *)glViewMatrix;
- (float *)glProjectionMatrix;
- (struct CGPoint { double x0; double x1; })glVertexForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (double)glPointRatio;
- (id)getView;
- (struct { double x0; double x1; })mapPointForPixelX:(double)a0 Y:(double)a1;
- (struct CGPoint { double x0; double x1; })pixelForMapPoint:(struct { double x0; double x1; })a0;
- (void)addOverlayView:(id)a0;
- (id)removeForOverlay:(id)a0;
- (id)viewForOverlay:(id)a0;
- (id)overlays;
- (void)update:(double)a0;
- (BOOL)draw;
- (BOOL)isDirty;
- (void)setClickCheckPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)notifyNoneGLLayerFound:(id)a0 ClickPos:(struct CGPoint { double x0; double x1; })a1;
- (void)handleClickedGLOverlay:(id)a0 withOverlayObj:(id)a1;
- (struct LightColor { float x0; float x1; float x2; })lightColorForUIColor:(id)a0;
- (void)setAmbientLight:(id)a0 intensity:(double)a1;
- (void)addSpotFollowCameraLight:(id)a0 intensity:(double)a1;
- (void)addDirectionalLight:(id)a0 direction:(union _GLKVector3 { struct { float x0; float x1; float x2; } x0; struct { float x0; float x1; float x2; } x1; struct { float x0; float x1; float x2; } x2; float x3[3]; })a1 intensity:(double)a2;
- (void).cxx_destruct;

@end
