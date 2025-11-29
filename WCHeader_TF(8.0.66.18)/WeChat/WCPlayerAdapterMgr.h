@class NSString;

@interface WCPlayerAdapterMgr : MMUserService <WCPlayerCoreAdapterDelegate, MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (BOOL)canUseTPPlayerWithPlayerScene:(unsigned long long)a0;
- (BOOL)openTPPlayerABTestWithScene:(unsigned long long)a0;
- (BOOL)justUseSystemDownloader;
- (id)generateReporterWithPlayerScene:(unsigned long long)a0;
- (void)WCPlayerCoreLog:(int)a0 toMMFile:(BOOL)a1 module:(const char *)a2 file:(const char *)a3 line:(int)a4 funcName:(const char *)a5 message:(id)a6;
- (void)LogFeatureIdKey:(unsigned int)a0 key:(unsigned int)a1 value:(unsigned int)a2 isKeyLog:(BOOL)a3;
- (id)GetExpt:(id)a0 withDef:(id)a1;
- (id)GetAppVersion;

@end
