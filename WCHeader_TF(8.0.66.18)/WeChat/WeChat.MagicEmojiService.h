@interface WeChat.MagicEmojiService : MMUserService <MMServiceProtocol> {
    void /* unknown type, empty encoding */ _biz;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ belowInputCoverViewContainer;
}

- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)setupWithDelegate:(id)a0;
- (void)resume;
- (void)insertView:(id)a0;
- (id)getRuntimeView;
- (void)clear;
- (void)safeDestroyWithDelegate:(id)a0;
- (BOOL)trigger:(id)a0 handler:(id)a1;
- (void)destroy;
- (id)getBizSession;
- (BOOL)easterEggPlayAnimationWithEggKey:(id)a0 eggId:(id)a1 animationType:(unsigned long long)a2 sceneId:(id)a3 extString:(id)a4;
- (void)easterEggGiftClickWithEggKey:(id)a0 eggId:(id)a1 sceneId:(id)a2;
- (void)easterEggForceStopWithEggKey:(id)a0 eggId:(id)a1 stopReason:(unsigned long long)a2 sceneId:(id)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getBoundingBoxWithEggId:(id)a0;
- (void)applicationDidBecomeActive;
- (void)applicationDidEnterBackground;
- (id)init;
- (void).cxx_destruct;

@end
