@class BDEnvGeckoConfigModel, NSObject, BDEnvPlatformWindowManager;
@protocol OS_dispatch_queue;

@interface BDEnvPlatformManager : NSObject

@property (retain, nonatomic) BDEnvPlatformWindowManager *windowManager;
@property (retain, nonatomic) BDEnvGeckoConfigModel *geckoModel;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)defaultManager;

- (void)didSwitchEnv:(id)a0;
- (void)switchEnvWithModel:(id)a0 OriginModel:(id)a1 GeckoModel:(id)a2 OriginGeckoModel:(id)a3 isReset:(BOOL)a4 restart:(BOOL)a5;
- (void)presentToastWithTitle:(id)a0;
- (void)storageModel:(id)a0;
- (id)geckoConfigModel;
- (void)postEnvSwitchWithModel:(id)a0 OriginModel:(id)a1;
- (void)postGeckoSwitchWithModel:(id)a0 OriginModel:(id)a1;
- (void)setEnvConfigModel:(id)a0 withRestart:(BOOL)a1;
- (void)setGeckoConfigModel:(id)a0 withRestart:(BOOL)a1;
- (void)showEnvWindow;
- (void)hideEnvWindow;
- (void)switchEnvWithModel:(id)a0 OriginModel:(id)a1 isReset:(BOOL)a2 restart:(BOOL)a3;
- (Class)TiktokDebugToolClass;
- (void)registerEnvSwitch:(id)a0;
- (void)unregisterEnvSwitch:(id)a0;
- (void)setEnvConfigModel:(id)a0;
- (id)envConfigModel;
- (id)envPlatformHeaderFields;
- (void)setGeckoConfigModel:(id)a0;
- (void)setGeckoAKType:(long long)a0;
- (void)setGeckoSwimlane:(id)a0;
- (void)openEnvByAnywhere:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setup;

@end
