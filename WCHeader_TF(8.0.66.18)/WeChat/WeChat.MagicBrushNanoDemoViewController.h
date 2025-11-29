@interface WeChat.MagicBrushNanoDemoViewController : MMUIViewController <MagicBrushCoreScreenCanvasDelegate, MagicBrushCoreResourceDelegate> {
    void /* unknown type, empty encoding */ rt;
    void /* unknown type, empty encoding */ canvasMap;
    void /* unknown type, empty encoding */ jvm;
    void /* unknown type, empty encoding */ ctx;
    void /* unknown type, empty encoding */ thread;
}

- (void)didAppear;
- (void)setupMB;
- (void)willDisappear;
- (void)stopThread;
- (void)onScreenCanvasCreated:(int)a0;
- (void)onScreenCanvasBindWindow:(int)a0 windowId:(int)a1;
- (void)onScreenCanvasStyleChange:(int)a0 top:(float)a1 left:(float)a2 width:(float)a3 height:(float)a4 zIndex:(unsigned int)a5;
- (void)onScreenCanvasSetTouchableRects:(int)a0 left:(const float *)a1 top:(const float *)a2 width:(const float *)a3 height:(const float *)a4 count:(unsigned int)a5;
- (void)onScreenCanvasFirstFrameRendered:(int)a0;
- (void)onScreenCanvasRemove:(int)a0;
- (void)onLoadData:(id)a0 withCallback:(id /* block */)a1;
- (id)onLoadDataSync:(id)a0;
- (void)evaluateScript;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
