@class SonicApp, NSString, SonicView;
@protocol SonicCanvasService;

@interface BDPAppSonicCanvasEngineInstance : BDPAppCanvasBaseInstance <SonicViewPaintListener>

@property (retain, nonatomic) SonicApp *sonicApp;
@property (retain, nonatomic) id<SonicCanvasService> sonicCanvasService;
@property (weak, nonatomic) SonicView *recordCanvasView;
@property (nonatomic) double startTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onFrame;
- (void)removeDrawableView:(id)a0 completion:(id /* block */)a1;
- (void)addDrawableView:(id)a0 completion:(id /* block */)a1;
- (void)setupEngineIfNeededWithCompletion:(id /* block */)a0;
- (void)doResume;
- (void)doStop;
- (void)setupDefaultSonicAppWithNapiLoader:(id)a0;
- (void)setupCustomRegisterService;
- (void).cxx_destruct;
- (id)engineType;
- (void)doPause;

@end
