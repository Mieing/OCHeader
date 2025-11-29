@class NSMutableDictionary, NSMapTable, NSString, MagicBrushCore;
@protocol WAMagicARPixelBufferDelegate, WALivePusherPixelBufferDelegate;

@interface WAJSContextPlugin_Canvas : WAJSContextPluginBase <MagicBrushCoreJSStuffDelegate, MagicBrushCoreResourceDelegate, MagicBrushCoreScreenCanvasDelegate, MagicBrushCVPixelBufferRTDelegate>

@property (retain, nonatomic) NSMapTable *canvasMap;
@property (retain) MagicBrushCore *mbCore;
@property (retain, nonatomic) NSMapTable *glLayerMap;
@property (retain, nonatomic) NSMutableDictionary *rendertargets;
@property (retain, nonatomic) NSMutableDictionary *captureInfos;
@property (weak, nonatomic) id<WALivePusherPixelBufferDelegate> livePusherDelegate;
@property (weak, nonatomic) id<WAMagicARPixelBufferDelegate> magicARDelegate;
@property (nonatomic) unsigned long long frameCaptureState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)getMagicBrush;
- (void)releaseMagicBrush;
- (void)setupFrameCapture;
- (BOOL)handleEvent:(long long)a0 userInfo:(id)a1;
- (void)notifyViewCreated:(id)a0 forViewId:(int)a1;
- (void)notifyViewDestroyForViewId:(int)a0;
- (void)captureMBCanvas:(unsigned int)a0 mark:(unsigned int)a1 delegate:(id)a2;
- (void)onJsException:(id)a0 stack:(id)a1;
- (id)getFileData:(id)a0;
- (struct __CVBuffer { } *)providePixelBufferByViewId:(unsigned int)a0 withType:(id)a1;
- (void)onLoadData:(id)a0 withCallback:(id /* block */)a1;
- (id)onLoadDataSync:(id)a0;
- (void)onProfilerFileGenerated:(id)a0 type:(id)a1;
- (void)onScreenCanvasBindWindow:(int)a0 windowId:(int)a1;
- (void)onFrameAvailable:(struct __CVBuffer { } *)a0 inRT:(id)a1;
- (void).cxx_destruct;

@end
