@interface WeChat.MagicSnsTimelineBiz : WeChat.MagicEmojiBaseBiz <WeChat.IMagicBaseEmojiDelegate> {
    void /* unknown type, empty encoding */ snsEmojiDelegate;
    void /* unknown type, empty encoding */ snsCurrentScene;
    void /* unknown type, empty encoding */ pkgMgr;
}

- (void)start;
- (id)getMagicEmojiViewHolder;
- (void)sendFireWorkInfoEventWithInfo:(id)a0;
- (void)onFireworkSceneChangeWithScene:(long long)a0 fireworkPlayRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)getFireworkInfoByIDWithId:(id)a0;
- (void)onFireworkPlayEndWithId:(id)a0;
- (void)destroy;
- (void)onCreated;
- (void)onMainScriptInjected:(id)a0;
- (void)onDestroy:(int)a0;
- (void)onCanvasViewCreated:(unsigned int)a0 view:(id)a1;
- (void)onCanvasViewFirstFrameRendered:(unsigned int)a0;
- (id)init;
- (void).cxx_destruct;

@end
