@class MMKV, AWETokamakMemoryMonitorManagerState, NSDictionary, NSObject;
@protocol OS_os_log, OS_dispatch_source;

@interface AWETokamakMemoryMonitorManager : NSObject {
    MMKV *_configStorage;
    unsigned int _randomValue;
    AWETokamakMemoryMonitorManagerState *_freezedState;
    AWETokamakMemoryMonitorManagerState *_activedState;
    NSDictionary *_remoteConfig;
    NSObject<OS_os_log> *_logger;
    NSObject<OS_dispatch_source> *_memoryWarningSource;
}

@property (class, readonly) AWETokamakMemoryMonitorManager *shared;

@property (nonatomic) BOOL isActived;
@property (readonly, nonatomic) BOOL isEnabled;

+ (id)shared;

- (BOOL)_isUserPathEnabled;
- (void)prepareHeimdallrConfig;
- (id)_aweme_ios_memory_monitor_config_v2;
- (void)_trackerWithType:(id)a0 value:(id)a1;
- (void)_initializeState;
- (void)_initializeOnlineModeConfig;
- (BOOL)_isEnabledByInhouseConfig;
- (BOOL)willActiveMonitorThisSession;
- (BOOL)_isUploadByUserEnabled;
- (BOOL)canUploadWithRelaunchReason:(id)a0;
- (BOOL)_canActiveByInhouseConfig;
- (BOOL)_canActiveByOnlineConfig;
- (BOOL)_canUploadByInhouseConfig;
- (BOOL)_canUploadByOnlineConfigWithRelaunchReason:(id)a0;
- (BOOL)_isOneByOneEnabled;
- (int)_activeLimitCount;
- (void)_updateState:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)startWithCallback:(id /* block */)a0;
- (BOOL)isEnabled;

@end
