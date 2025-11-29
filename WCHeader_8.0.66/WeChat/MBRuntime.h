@class MagicBrushBiz, NSThread, MagicBrushService, MBBuildConfig;
@protocol MagicBrushDelegate;

@interface MBRuntime : NSObject

@property (retain, nonatomic) MBBuildConfig *config;
@property (weak, nonatomic) MagicBrushService *service;
@property (readonly, nonatomic) BOOL isRuntimeInvalid;
@property (weak, nonatomic) id privateData;
@property (weak, nonatomic) id<MagicBrushDelegate> delegate;
@property (weak, nonatomic) MagicBrushBiz *biz;
@property (nonatomic) BOOL enableVConsole;
@property (weak, nonatomic) NSThread *jsThread;

- (id)createView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1;
- (void)injectLibs;
- (id)createObject;
- (id)createObject:(id)a0;
- (void)evaluateScript:(id)a0 sourceURL:(id)a1;
- (void)evaluateScript:(id)a0 sourceURL:(id)a1 completionHandler:(id /* block */)a2;
- (void)onEventFinish:(id)a0 param:(id)a1;
- (void)notifyExternalCVPixelBuffer:(id)a0 elementId:(int)a1 buffer:(struct __CVBuffer { } *)a2;
- (void)destroyRuntime;
- (void)pause;
- (void)resume;
- (void)nativeLog:(unsigned long long)a0 msg:(id)a1;
- (void)vConsoleLog:(id)a0;
- (void)switchVConsole:(BOOL)a0;
- (id)getFileData:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getFrame;
- (void)setMute:(BOOL)a0;
- (void)runCodeInJsThread:(id /* block */)a0;
- (void)runCodeInJsThreadSync:(id /* block */)a0;
- (void)endWithResult:(unsigned long long)a0 result:(id)a1;
- (void)setExternalViewStub:(id)a0 forCanvasId:(unsigned int)a1;
- (id)createViewInCanvas:(int)a0;
- (void)createPixelBufferInCanvas:(int)a0;
- (void).cxx_destruct;

@end
