@class NSString, NSTimer, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AWENearbyFeedCardMonitor : NSObject

@property (copy, nonatomic) id /* block */ fpsCallback;
@property (retain, nonatomic) NSMutableArray *fpsRecords;
@property (copy, nonatomic) id /* block */ frameDropCallback;
@property (retain, nonatomic) NSMutableArray *frameDropRecords;
@property (retain, nonatomic) NSMutableArray *cpuRecords;
@property (retain, nonatomic) NSMutableArray *memoryRecords;
@property (nonatomic) BOOL fpsMonitorRunning;
@property (nonatomic) BOOL dropMonitorRunning;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sampleQueue;
@property (retain, nonatomic) NSTimer *monitorTimer;
@property (nonatomic) long long firstMemory;
@property (nonatomic) double beginTime;
@property (copy, nonatomic) NSString *scene;

- (void)startFPSMonitor;
- (void)clearMonitorData;
- (void)startFrameDropMonitor;
- (void)startUtilsMonitor;
- (id)getNearbyCardFPSMonitorData;
- (id)getNearbyCardUtilsMonitorData;
- (void)monitorCPUAndMemory;
- (void)stopTimer;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)start;
- (void)dealloc;

@end
