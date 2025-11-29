@class NSString;

@interface HMDOOMAppState : NSObject

@property (nonatomic) BOOL isNewData;
@property (nonatomic) BOOL isAppEnterBackground;
@property (nonatomic) BOOL isAppQuitByExit;
@property (nonatomic) BOOL isAppQuitByUser;
@property (nonatomic) BOOL isMonitorStopped;
@property (nonatomic) unsigned long long memoryPressure;
@property (nonatomic) double memoryPressureTimestamp;
@property (nonatomic) BOOL isCrash;
@property (nonatomic) BOOL isWatchDog;
@property (nonatomic) double enterForegoundTime;
@property (nonatomic) double enterBackgoundTime;
@property (nonatomic) double latestTime;
@property (copy, nonatomic) NSString *internalSessionID;
@property (nonatomic) double appStartTime;
@property (nonatomic) BOOL isDebug;
@property (nonatomic) BOOL isXCTest;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *buildVersion;
@property (copy, nonatomic) NSString *sysVersion;
@property (copy, nonatomic) NSString *libraryPath;
@property (nonatomic) unsigned long long exception_main_address;
@property (nonatomic) struct { double x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; } memoryInfo;
@property (nonatomic) struct { unsigned long long x0; long long x1; long long x2; } gpuMemoryInfo;
@property (nonatomic) int appContinuousQuitTimes;
@property (copy, nonatomic) NSString *thermalState;
@property (nonatomic) BOOL isWeakWatchDog;
@property (nonatomic) BOOL isCPUException;
@property (nonatomic) double lastSenceChangedTime;
@property (nonatomic) unsigned int appUsedMachPortCount;
@property (nonatomic) unsigned int appUsedFileCount;
@property (copy, nonatomic) NSString *extensionType;

+ (id)infoPath;
+ (id)sharedInstance;

- (void)update:(id /* block */)a0 msync:(BOOL)a1;
- (double)enterForgoundTime;
- (void)setEnterForegroundTime:(double)a0;
- (void)update:(id /* block */)a0;

@end
