@class NSString;

@interface WCCrashBlockHandler : NSObject <WCCrashBlockMonitorDelegate>

@property (nonatomic) unsigned long long readSize;
@property (nonatomic) unsigned long long writeSize;
@property (nonatomic) unsigned int reportCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)getCrashBlockPluginConfiguration;
- (void)refreshKSCrashReportAppVersion;
- (void)onClientVersionChange;
- (void)tryGetInfomationOfFileDescriptorOfDumpType:(unsigned long long)a0;
- (void)onCrashBlockMonitorBeginDump:(unsigned long long)a0 blockTime:(unsigned long long)a1 runloopThreshold:(unsigned int)a2;
- (void)onCrashBlockMonitorGetDumpFile:(id)a0 withDumpType:(unsigned long long)a1;
- (void)onCrashBlockMonitorDumpType:(unsigned long long)a0 filter:(unsigned long long)a1;
- (id)onCrashBlockMonitorGetCustomUserInfoForDumpType:(unsigned long long)a0;
- (void)onCrashBlockMonitorCurrentCPUTooHigh;
- (void)onCrashBlockMonitorIntervalCPUTooHigh;
- (void)onCrashBlockMonitorDiskIOReportReadDump:(BOOL)a0 writeDump:(BOOL)a1;
- (void)onCrashBlockMonitorDiskIOReportRepeat;
- (void)onCrashBlockMonitorThermalStateChanged:(long long)a0;
- (void)onCrashBlockMonitorMainThreadBlock;
- (void)onCrashBlockMonitorMemoryExcessive:(BOOL)a0 footprint:(unsigned long long)a1 available:(unsigned long long)a2;
- (void)onCrashBlockMonitorRunloopHangDetected:(unsigned long long)a0;
- (void)p_reportWithID:(int)a0 key:(int)a1 value:(int)a2 dumpType:(unsigned long long)a3;
- (void)onMMCrashGetFile:(id)a0;

@end
