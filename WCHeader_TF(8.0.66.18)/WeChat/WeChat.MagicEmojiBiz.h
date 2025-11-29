@interface WeChat.MagicEmojiBiz : WeChat.MBDynamicBizContext <IMBViewDelegate, IMBLifecycle> {
    void /* unknown type, empty encoding */ createdTime;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ magicbrush;
    void /* unknown type, empty encoding */ adapter;
    void /* unknown type, empty encoding */ package;
    void /* unknown type, empty encoding */ packageUDR;
    void /* unknown type, empty encoding */ $__lazy_storage_$_mbVConsoleHelper;
    void /* unknown type, empty encoding */ eventTaskQueue;
    void /* unknown type, empty encoding */ $__lazy_storage_$_semaphore;
    void /* unknown type, empty encoding */ envStatus;
    void /* unknown type, empty encoding */ $__lazy_storage_$_easterEggElementDict;
    void /* unknown type, empty encoding */ easterEggTimeout;
    void /* unknown type, empty encoding */ frame;
    void /* unknown type, empty encoding */ belowInputContainerWrapper;
    void /* unknown type, empty encoding */ useUDR;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ runtimeView;

- (id)init;
- (void)dealloc;
- (void)setup;
- (void)start;
- (void)destroy;
- (void)sendWithScene:(long long)a0 emojiData:(id)a1;
- (void)dispatch:(id)a0 data:(id)a1;
- (void)dispatchClientEventWithEventName:(id)a0 data:(id)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)pause;
- (void)resume;
- (void)onCanvasViewCreated:(unsigned int)a0 view:(id)a1;
- (void)onCanvasViewLayout:(unsigned int)a0 view:(id)a1 left:(float)a2 top:(float)a3 width:(float)a4 height:(float)a5;
- (void)onCanvasViewDestroy:(unsigned int)a0 view:(id)a1;
- (void)setCoverViewContainerBelowInputCoverView:(id)a0;
- (void)onCreated;
- (void)onMainScriptInjected:(id)a0;
- (id)getInstanceName;
- (id)getVisibleMetaDict:(BOOL)a0;
- (id)getMetaByID:(id)a0 needFrame:(BOOL)a1;
- (void)shakeAllVisiableViews:(BOOL)a0;
- (void).cxx_destruct;

@end
