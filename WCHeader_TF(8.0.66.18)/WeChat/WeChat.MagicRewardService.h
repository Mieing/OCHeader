@interface WeChat.MagicRewardService : MMUserService <MMServiceProtocol, IMBLifecycle, MagicPkgDownloadExt> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_listeners;
    void /* unknown type, empty encoding */ $__lazy_storage_$_prepareResCallbacksDict;
    void /* unknown type, empty encoding */ prepareResCallbackId;
    void /* unknown type, empty encoding */ currentScene;
    void /* unknown type, empty encoding */ currentBundle;
    void /* unknown type, empty encoding */ _biz;
    void /* unknown type, empty encoding */ _frameRate;
    void /* unknown type, empty encoding */ _qualityLevel;
    void /* unknown type, empty encoding */ _pixelRatio;
}

@property (nonatomic) long long frameRate;
@property (nonatomic) long long qualityLevel;
@property (nonatomic) float pixelRatio;

- (void)fetchEngineStatus:(id /* block */)a0;
- (id)getCodeVersion;
- (BOOL)isCodeVersionSupported:(id)a0;
- (BOOL)isPkgExist;
- (void)prepareResourceWithResourceName:(id)a0 url:(id)a1 md5:(id)a2 force:(BOOL)a3 callback:(id /* block */)a4;
- (void)forceUpdate;
- (void)preload:(long long)a0;
- (void)destroy;
- (void)updateResourcesWithZipPath:(id)a0 callback:(id /* block */)a1;
- (id)addListener:(id)a0;
- (void)removeListener:(id)a0;
- (void)onMainScriptInjected:(id)a0;
- (void)onJSException:(id)a0 msg:(id)a1 extra:(id)a2;
- (void)onDestroy:(int)a0;
- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)onPkgUpdateSuccess:(id)a0 pkgVersion:(id)a1;
- (void)onPkgUpdateFail:(id)a0 reason:(unsigned long long)a1;
- (id)init;
- (void).cxx_destruct;

@end
