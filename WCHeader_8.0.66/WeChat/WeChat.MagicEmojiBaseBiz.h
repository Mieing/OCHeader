@interface WeChat.MagicEmojiBaseBiz : WeChat.MagicDynamicBaseBiz {
    void /* unknown type, empty encoding */ frame;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ useJitMode;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ runtimeView;

- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)start;
- (void)resume;
- (void)dispatchClientEventWithEventName:(id)a0 data:(id)a1;
- (void)destroy;
- (void)onCreated;
- (void)onMainScriptInjected:(id)a0;
- (void)onDestroy:(int)a0;
- (void)onJSException:(id)a0 msg:(id)a1 extra:(id)a2;
- (void)onCanvasViewCreated:(unsigned int)a0 view:(id)a1;
- (void)onCanvasViewLayout:(unsigned int)a0 view:(id)a1 left:(float)a2 top:(float)a3 width:(float)a4 height:(float)a5;
- (void)onCanvasViewDestroy:(unsigned int)a0 view:(id)a1;
- (void)onCanvasViewFirstFrameRendered:(unsigned int)a0;
- (id)init;
- (void).cxx_destruct;

@end
