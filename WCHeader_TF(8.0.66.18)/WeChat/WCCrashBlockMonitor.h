@class WCBlockMonitorMgr, NSString, WCBlockMonitorConfiguration;
@protocol WCCrashBlockMonitorDelegate;

@interface WCCrashBlockMonitor : NSObject <WCBlockMonitorDelegate>

@property (nonatomic) BOOL bInstallSuccess;
@property (retain, nonatomic) WCBlockMonitorMgr *blockMonitor;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *appShortVersion;
@property (nonatomic) void /* function */ *onHandleSignalCallBack;
@property (nonatomic) void /* function */ *onAppendAdditionalInfoCallBack;
@property (weak, nonatomic) id<WCCrashBlockMonitorDelegate> delegate;
@property (retain, nonatomic) WCBlockMonitorConfiguration *bmConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)p_isDumpTypeRelatedToFOOM:(unsigned long long)a0;

- (id)init;
- (BOOL)installKSCrash:(BOOL)a0;
- (void)enableBlockMonitor;
- (void)startBlockMonitor;
- (void)stopBlockMonitor;
- (void)resetAppFullVersion:(id)a0 shortVersion:(id)a1;
- (void)handleBackgroundLaunch;
- (void)handleSuspend;
- (void)startTrackCPU;
- (void)stopTrackCPU;
- (BOOL)isBackgroundCPUTooSmall;
- (BOOL)lowerCPUUsage;
- (BOOL)recoverCPUUsage;
- (BOOL)setRunloopThreshold:(unsigned int)a0;
- (BOOL)lowerRunloopThreshold;
- (BOOL)recoverRunloopThreshold;
- (void)setShouldSuspendAllThreads:(BOOL)a0;
- (void)setUserID:(unsigned long long)a0;
- (id)generateLiveReportWithDumpType:(unsigned long long)a0 withReason:(id)a1 selfDefinedPath:(BOOL)a2;
- (BOOL)shouldReportCoreDumpAfterCrash;
- (unsigned int)lastJSCType;
- (void)onBlockMonitor:(id)a0 beginDump:(unsigned long long)a1 blockTime:(unsigned long long)a2 runloopThreshold:(unsigned int)a3;
- (void)onBlockMonitor:(id)a0 enterNextCheckWithDumpType:(unsigned long long)a1;
- (void)onBlockMonitor:(id)a0 getDumpFile:(id)a1 withDumpType:(unsigned long long)a2;
- (void)onBlockMonitor:(id)a0 dumpType:(unsigned long long)a1 filter:(unsigned long long)a2;
- (id)onBlockMonitor:(id)a0 getCustomUserInfoForDumpType:(unsigned long long)a1;
- (void)onBlockMonitorCurrentCPUTooHigh:(id)a0;
- (void)onBlockMonitorIntervalCPUTooHigh:(id)a0;
- (void)onBlockMonitorThermalStateChanged:(id)a0 thermalState:(long long)a1;
- (void)onBlockMonitorMainThreadBlock:(id)a0;
- (void)onBlockMonitorMemoryExcessive:(id)a0 exceeded:(BOOL)a1 footprint:(unsigned long long)a2 available:(unsigned long long)a3;
- (void)onBlockMonitor:(id)a0 runloopHangDetected:(unsigned long long)a1;
- (void).cxx_destruct;

@end
