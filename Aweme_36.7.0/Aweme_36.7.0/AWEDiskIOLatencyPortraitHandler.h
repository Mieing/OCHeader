@class NSString, NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface AWEDiskIOLatencyPortraitHandler : AWECommonPortraitHandler

@property (retain, nonatomic) NSObject<OS_dispatch_source> *startupTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *mainTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *stuckDetectTimer;
@property (nonatomic) BOOL isIOTimeout;
@property (nonatomic) BOOL isOperatingIO;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSString *filePath;
@property (nonatomic) void *startupAlignedBuffer;
@property (nonatomic) void *alignedBuffer;
@property (nonatomic) unsigned long long blockSize;
@property (nonatomic) unsigned long long bufferSize;
@property (nonatomic) unsigned long long startupDetectionEndTime;
@property (nonatomic) double startupDetectionMaxLatency;
@property (nonatomic) double startupDetectionSumLatency;
@property (nonatomic) long long startupDetectionCount;
@property (nonatomic) double latency;
@property (nonatomic) double filteredLatency;
@property (retain, nonatomic) NSString *latencyLevelStatus;
@property (nonatomic) double monitorTrackerInterval;
@property (nonatomic) double startupDelay;
@property (retain, nonatomic) NSString *startupStatus;
@property (nonatomic) BOOL monitorTrackDefaultStatus;
@property (nonatomic) BOOL startupDetectionEnable;
@property (nonatomic) double startupDetectionDuration;
@property (nonatomic) double startupDetectionInterval;
@property (nonatomic) double startupDetectionRate;
@property (nonatomic) double paramsAlpha;
@property (nonatomic) double paramsTLower;
@property (nonatomic) double paramsTUpper;
@property (nonatomic) double paramsK;
@property (retain, nonatomic) NSString *defaultIOStatus;
@property (retain, nonatomic) NSMutableArray *highIOStatusList;
@property (nonatomic) double extremeLatency;
@property (retain, nonatomic) NSString *extremeStatus;
@property (nonatomic) double ioTimeSum;
@property (nonatomic) double ioTimeSumSmooth;
@property (nonatomic) long long ioTimeTotalCount;
@property (retain, nonatomic) NSMutableDictionary *ioTimeHighLevelHitMap;
@property (nonatomic) double ioTimeTrackerLastUploadTime;

+ (void)cleanupStorageFiles;
+ (id)ioStatusMMKV;

- (void)setupTracker;
- (void)setupObserver;
- (id)getPortrait;
- (void)setupStartupTimer;
- (void)trackIfNeeded;
- (void)handleStartupTimerEvent;
- (void)handleMainTimerEvent;
- (void)handleStuckDetectTimerEvent;
- (void)storageTracker;
- (double)checkDiskIoLatencyWithPath:(id)a0 startup:(BOOL)a1;
- (void)updateStuckDetectEndTime:(unsigned long long)a0;
- (void)updateLatencyLevelIfNeeded;
- (void)hitStatus:(id)a0 scene:(id)a1;
- (void)applicationWillResignActive:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setupTimer;
- (void)setupConfig;
- (void)preSetup;

@end
