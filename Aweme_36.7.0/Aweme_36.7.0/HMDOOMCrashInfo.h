@class NSString, NSDictionary, NSMutableDictionary;

@interface HMDOOMCrashInfo : NSObject <HMDAttributes>

@property (nonatomic) unsigned long long memoryPressure;
@property (nonatomic) double memoryPressureTimestamp;
@property (nonatomic) double enterForegoundTime;
@property (nonatomic) double enterBackgoundTime;
@property (nonatomic) double latestTime;
@property (copy, nonatomic) NSString *internalSessionID;
@property (nonatomic) double appStartTime;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *buildVersion;
@property (copy, nonatomic) NSString *sysVersion;
@property (nonatomic) struct { double updateTime; unsigned long long appMemory; unsigned long long usedMemory; unsigned long long totalMemory; unsigned long long availableMemory; unsigned long long appMemoryPeak; unsigned long long totalVirtualMemory; unsigned long long usedVirtualMemory; } memoryInfo;
@property (nonatomic) struct { unsigned long long appUsedGPUMemory; long long globalAllocGPUMemory; long long globalInuseGPUMemory; } gpuMemoryInfo;
@property (nonatomic) double updateTime;
@property (copy, nonatomic) NSString *lastScene;
@property (copy, nonatomic) NSDictionary *operationTrace;
@property (copy, nonatomic) NSString *multiScenes;
@property (nonatomic) double freeDisk;
@property (nonatomic) long long freeDiskBlockSize;
@property (copy, nonatomic) NSString *sessionID;
@property (nonatomic) unsigned long long exception_main_address;
@property (copy, nonatomic) NSString *loginfo;
@property (nonatomic) BOOL isMemoryDumpInterrupt;
@property (copy, nonatomic) NSString *detailInfo;
@property (nonatomic) int appContinuousQuitTimes;
@property (copy, nonatomic) NSString *thermalState;
@property (nonatomic) BOOL isCPUException;
@property (nonatomic) double inAppTime;
@property (nonatomic) double inLastSceneTime;
@property (nonatomic) double restartInterval;
@property (copy, nonatomic) NSString *binaryInfo;
@property (nonatomic) BOOL isAppEnterBackground;
@property (nonatomic) unsigned int appUsedMachPortCount;
@property (nonatomic) unsigned int appUsedFileCount;
@property (copy, nonatomic) NSString *hmd_oom_subtype;
@property (nonatomic) double appUsedMemoryPercent;
@property (nonatomic) double freeMemoryPercent;
@property (retain, nonatomic) NSMutableDictionary *sceneInfo;
@property (copy, nonatomic) NSString *sceneIssue;
@property (copy, nonatomic) NSDictionary *filters;
@property (copy, nonatomic) NSDictionary *params;
@property (nonatomic) int relaunchReason;
@property (copy, nonatomic) NSString *relaunchReasonStr;
@property (copy, nonatomic) NSString *extensionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)hmd_attributeMapDictionary;
+ (id)oomcrashInfoWithDict:(id)a0;

@end
