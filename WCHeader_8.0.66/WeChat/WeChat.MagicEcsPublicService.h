@interface WeChat.MagicEcsPublicService : NSObject <IMBPublicService, IMBLifecycle, IMBPlugin> {
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
- (id)providePlugin:(id)a0;
- (void).cxx_destruct;

@end
