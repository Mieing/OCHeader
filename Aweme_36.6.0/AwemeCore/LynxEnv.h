@class NSString, NSMutableDictionary, LynxConfig, LynxLifecycleDispatcher;

@interface LynxEnv : NSObject {
    struct unique_ptr<lynx::fml::SharedMutex, std::default_delete<lynx::fml::SharedMutex>> { struct SharedMutex *__ptr_; } external_env_mutex_;
}

@property (retain, nonatomic) NSMutableDictionary *externalEnvCache;
@property (readonly, nonatomic) LynxConfig *config;
@property (retain, nonatomic) NSString *locale;
@property (readonly, nonatomic) LynxLifecycleDispatcher *lifecycleDispatcher;
@property (readonly, nonatomic) NSMutableDictionary *resoureProviders;
@property (nonatomic) BOOL lynxDebugEnabled;
@property (readonly, nonatomic) BOOL devtoolComponentAttach;
@property (nonatomic) BOOL devtoolEnabled;
@property (nonatomic) BOOL devtoolEnabledForDebuggableView;
@property (nonatomic) BOOL redBoxEnabled;
@property (nonatomic) BOOL logBoxEnabled;
@property (nonatomic) BOOL highlightTouchEnabled;
@property (nonatomic) BOOL automationEnabled;
@property (nonatomic) BOOL layoutOnlyEnabled;
@property (nonatomic) BOOL autoResumeAnimation;
@property (nonatomic) BOOL enableNewTransformOrigin;
@property (nonatomic) BOOL recordEnable;
@property (nonatomic) BOOL launchRecordEnabled;
@property (nonatomic) void *cronetEngine;
@property (nonatomic) void *cronetServerConfig;
@property (nonatomic) BOOL enableDevMenu;
@property (nonatomic) BOOL enableJSDebug;
@property (nonatomic) BOOL enableDevtoolDebug;
@property (nonatomic) BOOL enableLogBox;
@property (readonly, nonatomic) BOOL switchRunloopThread;

+ (id)getSSRApiVersion;
+ (void)_aweLazyRegisterStaticLoad_energy_optimize;
+ (BOOL)stringValueToBool:(id)a0 defaultValue:(BOOL)a1;
+ (id)_keyStringFromType:(unsigned long long)a0;
+ (void)clearBytecode:(id)a0;
+ (id)sharedInstance;

- (void)setPiperMonitorState:(BOOL)a0;
- (void)setEnableRadonCompatible:(BOOL)a0;
- (BOOL)enableGenericResourceFetcher;
- (void)initLayoutConfig:(struct CGSize { double x0; double x1; })a0;
- (BOOL)enableMemoryMonitor;
- (BOOL)enableAnimationSyncTimeOpt;
- (BOOL)awe_energy_optimize_enableAnimationSyncTimeOpt;
- (void)prepareConfig:(id)a0;
- (id)_stringFromExternalEnv:(id)a0;
- (BOOL)boolFromExternalEnv:(unsigned long long)a0 defaultValue:(BOOL)a1;
- (void)onPiperInvoked:(id)a0 method:(id)a1 paramStr:(id)a2 url:(id)a3 sessionID:(id)a4;
- (void)onPiperResponsed:(id)a0 method:(id)a1 url:(id)a2 response:(id)a3 sessionID:(id)a4;
- (void)initDevTool;
- (void)reportModuleCustomError:(id)a0;
- (void)setDevtoolEnv:(BOOL)a0 forKey:(id)a1;
- (BOOL)getDevtoolEnv:(id)a0 withDefaultValue:(BOOL)a1;
- (void)setDevtoolEnv:(id)a0 forGroup:(id)a1;
- (id)getDevtoolEnvWithGroupName:(id)a0;
- (void)initLynxTrace;
- (void)initDevToolComponentAttachSwitch;
- (void)initDevToolEnv;
- (id)stringFromExternalEnv:(unsigned long long)a0;
- (void)setKeyWindowAndStatusBar;
- (void)setEnableLayoutOnly:(BOOL)a0;
- (void)setLocalEnv:(id)a0 forKey:(id)a1;
- (BOOL)getEnableRadonCompatible;
- (BOOL)getEnableLayoutOnly;
- (BOOL)getAutoResumeAnimation;
- (BOOL)getEnableNewTransformOrigin;
- (void)addResoureProvider:(id)a0 provider:(id)a1;
- (void)setEnableMemoryMonitor:(BOOL)a0;
- (void)enableFluencyTracer:(BOOL)a0;
- (BOOL)enableComponentStatisticReport;
- (BOOL)enableCreateUIAsync;
- (BOOL)enableImageEventReport;
- (BOOL)enableImageAsyncLayout;
- (BOOL)enableImageCancelRequest;
- (BOOL)enableTextContainerOpt;
- (BOOL)enableTextStorageDeallocFix;
- (int)memoryAcquisitionDelaySec;
- (int)memoryReportIntervalSec;
- (id)cppEnvDebugDescription;
- (id)platformEnvDebugDescription;
- (void)updateExternalEnvCacheForKey:(id)a0 withValue:(id)a1;
- (void).cxx_destruct;
- (void)updateSettings:(id)a0;
- (id)init;
- (id).cxx_construct;

@end
