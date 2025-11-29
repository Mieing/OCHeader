@class IESLiveGCDTimer, NSHashTable, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, IESLivePrefSampleUtilsService, IESLiveNetworkQualityInfoService;

@interface IESLivePerformanceDetector : NSObject {
    int _duration;
    int _frequency;
    int _windowSize;
    BOOL _notifyOnMainThread;
    double _startTime;
    float _cpuStandards[4];
    struct IESLiveStatistic { int count; int level; double time; } _cpuInfo[4];
    float _gpuStandards[2];
    struct IESLiveStatistic { int count; int level; double time; } _gpuInfo[2];
    int _netStandards[2];
    struct IESLiveStatistic { int count; int level; double time; } _netInfo[2];
    float _memoryStandards[2];
    struct IESLiveStatistic { int count; int level; double time; } _memoryInfo[2];
}

@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL enableWindowMode;
@property (nonatomic) BOOL netCareForTime;
@property (nonatomic) BOOL memoryCareForTime;
@property (nonatomic) BOOL useMemoryV1;
@property (nonatomic) double totalMemory;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic) long long cpuLevel;
@property (nonatomic) long long gpuLevel;
@property (nonatomic) long long netLevel;
@property (nonatomic) int memoryLevel;
@property (retain, nonatomic) NSMutableArray *cpuWindow;
@property (retain, nonatomic) id<IESLivePrefSampleUtilsService> utilsService;
@property (retain, nonatomic) id<IESLiveNetworkQualityInfoService> networkService;

+ (id)shared;

- (void)enterLiveRoom;
- (void)addMemoryObserver;
- (void)exitLiveRoom;
- (void)removeMemoryObserver;
- (void)samplePeriodic;
- (void)checkPerformance:(float)a0 gpu:(float)a1 net:(float)a2 memory:(float)a3;
- (void)calculateCPU:(float)a0 check:(BOOL)a1;
- (void)calculateGPU:(float)a0 check:(BOOL)a1;
- (void)calculateNet:(float)a0 check:(BOOL)a1;
- (void)calculateMemory:(float)a0 check:(BOOL)a1;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)notify:(struct IESLiveSystemResourceLevel { long long x0; union value { long long x0; long long x1; long long x2; int x3; } x1; })a0;
- (id)init;
- (void)startTimer:(double)a0;
- (void)invalidateTimer;
- (void)removeObserver:(id)a0;
- (void)setupConfig;

@end
