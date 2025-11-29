@class KryptonApp;

@interface BDPAppKryptonCanvasEngineInstance : BDPAppCanvasBaseInstance

@property (retain, nonatomic) KryptonApp *kryptonApp;
@property long long viewId;

- (void)removeDrawableView:(id)a0 completion:(id /* block */)a1;
- (void)addDrawableView:(id)a0 completion:(id /* block */)a1;
- (void)setupDefaultKryptonAppWithNapiLoader:(id)a0;
- (void)reportFirstCanvasFirstPaintEvent;
- (void)setupEngineIfNeededWithCompletion:(id /* block */)a0;
- (void)doResume;
- (void)doStop;
- (void).cxx_destruct;
- (id)engineType;
- (void)doPause;

@end
