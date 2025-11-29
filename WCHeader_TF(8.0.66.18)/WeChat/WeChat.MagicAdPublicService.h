@interface WeChat.MagicAdPublicService : NSObject <IMBPublicService, IMBLifecycle> {
    void /* unknown type, empty encoding */ mbCommonAdapter;
    void /* unknown type, empty encoding */ jsapiContext;
    void /* unknown type, empty encoding */ pkgMgr;
    void /* unknown type, empty encoding */ bizName;
}

- (id)init;
- (void)dealloc;
- (id)provideConfig:(id)a0;
- (id)provideLifecycle;
- (void)onMainScriptInjected:(id)a0;
- (void)onDestroy:(int)a0;
- (void)onJSException:(id)a0 msg:(id)a1 extra:(id)a2;
- (void).cxx_destruct;

@end
