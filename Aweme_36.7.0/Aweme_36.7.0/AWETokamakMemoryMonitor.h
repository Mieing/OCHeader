@class AWETokamakRelaunchReason, AWETokamakMemoryMonitorConfig, NSObject;
@protocol OS_dispatch_source, OS_os_log;

@interface AWETokamakMemoryMonitor : NSObject {
    AWETokamakRelaunchReason *_reason;
    NSObject<OS_os_log> *_logger;
}

@property (class, readonly) AWETokamakMemoryMonitor *shared;

@property (nonatomic) BOOL isRunning;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) AWETokamakMemoryMonitorConfig *config;

- (id)getTempZipFileFromData:(id)a0 fileName:(id)a1;
- (void)cleanStorage;
- (void)_prepareUniversalData;
- (void)uploadInternal;
- (void)_trackEvent:(id)a0 value:(id)a1;
- (id)_aweme_ios_memory_monitor_config_v2;
- (void)onViewControllerChanged;
- (BOOL)_reportLogByInHouseChannel:(id)a0;
- (void)collectUniversalData:(id)a0;
- (void)uploadWithRelaunchReason:(id)a0;
- (void)_trackerWithType:(id)a0 value:(id)a1;
- (void)trackLogNotFound:(id)a0;
- (void)reportLog:(id)a0 launchTime:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)start;
- (id)_keys;
- (void)startInternal;

@end
