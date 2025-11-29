@class NSString, CADisplayLink;
@protocol MAMapRenderDelegate, MAMapService;

@interface MAMapRender : GLKView <MAMapRenderProtocol> {
    id<MAMapService> _internalMapService;
    CADisplayLink *_displayLink;
    BOOL _isNeedReloadMap;
    struct CGSize { double width; double height; } _EngineSize;
    BOOL _isInDrawRectCycle;
    BOOL _isInSnapshotMode;
    NSString *_runLoopMode;
    BOOL _willResignActiveReceived;
    BOOL _isAllowDecreaseRenderFrame;
    BOOL _checkContextInDrawRect;
    BOOL _isOpenGlDisabled;
    BOOL _isBindFBOEnableWhenRender;
    BOOL _terrainEnabled;
}

@property (nonatomic) int trueFPS;
@property (nonatomic) double lastTime;
@property (weak, nonatomic) id<MAMapRenderDelegate> internalDelegate;
@property (nonatomic) BOOL isRenderLoopDisabled;
@property (nonatomic) unsigned long long currentFPS;
@property (nonatomic) BOOL isAllowDecreaseRenderFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onDisplayLink;
- (void)startRender;
- (struct CGSize { double x0; double x1; })getDrawableSize;
- (void)testShouldStartRender;
- (void)resumeFPS;
- (BOOL)canPerformDrawing;
- (void)stopRender;
- (void)calculateTrueFPS;
- (void)initInternalMapService;
- (void)beginOurOwnCommandEncoder:(BOOL)a0;
- (void)endOurOwnCommandEncoder:(BOOL)a0;
- (void)MAMapRenderDeallocOperation;
- (void)onDidBecomeActiveNotification;
- (void)onWillResignActiveNotification;
- (id)mapService;
- (void)updateRunLoopMode:(id)a0;
- (void)reloadMap;
- (void)outterControlledDisplay;
- (void)removeSuperview;
- (void)addRenderObserver:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (void)removeRenderObserver:(id)a0 forKeyPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 layer:(id)a1 device:(id)a2 commandQueue:(id)a3;
- (id)getOurOwnCommandEncoder;
- (id)getDevice;
- (void)enableSnapshotMode:(struct CGSize { double x0; double x1; })a0;
- (void)disableSnapshotMode:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 terrainEnabled:(BOOL)a1;
- (void)updateEngineSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(id)a1 terrainEnabled:(BOOL)a2;
- (void).cxx_destruct;
- (id)snapshotImage;
- (void)display;
- (double)scaleFactor;
- (BOOL)isPaused;
- (void)setHidden:(BOOL)a0;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)renderContext;
- (void)setPresentsWithTransaction:(BOOL)a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(id)a1;
- (void)willDestroy;

@end
