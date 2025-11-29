@interface WeChat.MagicRewardBiz : NSObject <IMBViewDelegate, IMBLifecycle> {
    void /* unknown type, empty encoding */ magicbrush;
    void /* unknown type, empty encoding */ adapter;
    void /* unknown type, empty encoding */ packageUDR;
    void /* unknown type, empty encoding */ $__lazy_storage_$_mbVConsoleHelper;
    void /* unknown type, empty encoding */ $__lazy_storage_$_semaphore;
    void /* unknown type, empty encoding */ envStatus;
    void /* unknown type, empty encoding */ eventTaskQueue;
    void /* unknown type, empty encoding */ runtimeView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_rewardViewWeakMap;
    void /* unknown type, empty encoding */ _rewardView;
}

- (void)dealloc;
- (void)onCanvasViewCreated:(unsigned int)a0 view:(id)a1;
- (void)onCanvasViewLayout:(unsigned int)a0 view:(id)a1 left:(float)a2 top:(float)a3 width:(float)a4 height:(float)a5;
- (void)onCanvasViewDestroy:(unsigned int)a0 view:(id)a1;
- (void)onCreated;
- (void)onMainScriptInjected:(id)a0;
- (void)onDestroy:(int)a0;
- (id)init;
- (void).cxx_destruct;

@end
