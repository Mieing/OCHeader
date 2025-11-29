@class NSString, RelaxEngine, RelaxDebugProxy, NSMutableArray;
@protocol RelaxUIRendererProtocol, RelaxViewLifecycle;

@interface RelaxView : UIView {
    RelaxDebugProxy *_debugProxy;
    NSString *_url;
}

@property (retain, nonatomic) id<RelaxUIRendererProtocol> relaxUIRenderer;
@property (nonatomic) BOOL needRelayout;
@property (nonatomic) BOOL loaded;
@property (weak, nonatomic) id<RelaxViewLifecycle> lifecycleClient;
@property (retain, nonatomic) RelaxEngine *relaxEngine;
@property (retain, nonatomic) NSMutableArray *delayedTasks;
@property (nonatomic) BOOL hasEngineAsyncCreated;
@property (nonatomic) BOOL hasDestroyed;
@property (nonatomic) unsigned long long initStart;
@property (nonatomic) unsigned long long initEnd;
@property (nonatomic) int widthMode;
@property (nonatomic) int heightMode;
@property (nonatomic) struct CGSize { double width; double height; } intrinsicContentSize;

+ (id)createView:(BOOL)a0;
+ (void)registerBridgeModule:(id)a0 classType:(Class)a1 methods:(id)a2;
+ (void)unregisterBridgeModule:(id)a0;
+ (void)globalInit;
+ (void)globalInitWithSettings:(id)a0;

- (void)onTimingSetup:(id)a0;
- (void)onTimingUpdate:(id)a0 updateTiming:(id)a1 flag:(id)a2;
- (void)onReceivedError:(id)a0;
- (void)addLifecycleClient:(id)a0;
- (void)setSizeModeWidth:(int)a0 height:(int)a1;
- (void)bindRelaxEngine:(id)a0;
- (void)onDestory;
- (id)initAutoCreate:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 autoCreate:(BOOL)a1;
- (void)onEnterBackground;
- (id)getUrl;
- (void)onEnterForeground;
- (void)initDevTool;
- (void)updateViewport;
- (void)loadByteCode:(id)a0;
- (void)loadFile:(id)a0 withUrl:(id)a1;
- (void)fireEvent:(id)a0 param:(id)a1;
- (void)registerBridgeModule:(id)a0 classType:(Class)a1 methods:(id)a2 params:(id)a3;
- (void)loadByteCode:(id)a0 withUrl:(id)a1;
- (void)setTiming:(id)a0 key:(id)a1 timestamp:(long long)a2;
- (void)bindShouldInterceptUrlCallback:(id /* block */)a0;
- (void)createRenderViewWithBuilder:(id)a0;
- (void)createRelaxEngine:(BOOL)a0;
- (void)setMsTiming:(id)a0 key:(id)a1 timestamp:(long long)a2;
- (void)onCustomContentSize:(id)a0;
- (void)loadScript:(id)a0 withUrl:(id)a1;
- (void)callRTSFunction:(id)a0 param:(id)a1 callback:(id /* block */)a2;
- (void)setGlobalProperty:(id)a0;
- (id)getSources;
- (void)loadScript:(id)a0;
- (void)handleDeviceOrientationChange:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setOpaque:(BOOL)a0;
- (void)willMoveToWindow:(id)a0;
- (id)initWithBuilder:(id)a0;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)traitCollectionDidChange:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)requestLayout;

@end
