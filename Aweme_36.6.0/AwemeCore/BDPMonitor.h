@class BDPBatteryMonitorData, NSArray, BDPMonitorTask, BDPFPSMonitor, NSMutableArray, BDPUniqueID;
@protocol BDPBusinessMonitorProtocol;

@interface BDPMonitor : NSObject

@property (copy, nonatomic) NSArray *collectFrequency;
@property (retain, nonatomic) NSMutableArray *appCPUDatas;
@property (retain, nonatomic) NSMutableArray *jscCPUDatas;
@property (retain, nonatomic) NSMutableArray *memoryDatas;
@property (retain, nonatomic) NSMutableArray *memorySizeDatas;
@property (retain, nonatomic) NSMutableArray *gpuDatas;
@property (retain, nonatomic) NSMutableArray *alertDatas;
@property (nonatomic) BOOL lowPowerModeEnabled;
@property (nonatomic) long long batteryStatus;
@property (nonatomic) long long thermalState;
@property (nonatomic) long long batteryDatasCount;
@property (retain, nonatomic) BDPBatteryMonitorData *firstBatteryData;
@property (retain, nonatomic) BDPBatteryMonitorData *lastBatteryData;
@property (retain, nonatomic) BDPMonitorTask *cpuMonitorTask;
@property (retain, nonatomic) BDPMonitorTask *gpuMonitorTask;
@property (retain, nonatomic) BDPMonitorTask *memoryMonitorTask;
@property (retain, nonatomic) BDPMonitorTask *batteryMonitorTask;
@property (copy, nonatomic) id /* block */ cpuDataCallback;
@property (copy, nonatomic) id /* block */ gpuDataCallback;
@property (copy, nonatomic) id /* block */ memoryDataCallback;
@property (copy, nonatomic) id /* block */ batteryDataCallback;
@property (nonatomic) double lastAlertTime;
@property (nonatomic) BOOL enableRepeatFpsMonitor;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) BOOL isActive;
@property (retain, nonatomic) BDPFPSMonitor *FPSMonitor;
@property (readonly, nonatomic) long long currentAlertTimes;
@property (retain, nonatomic) id<BDPBusinessMonitorProtocol> businessMonitor;

- (void)flushMonitor;
- (void)callbackCpuDatasIfNeeded;
- (void)callbackGpuDatasIfNeeded;
- (void)callbackMemoryDatasIfNeeded;
- (id)monitorBattery;
- (void)stopBatteryMonitor;
- (void)stopBusinessMonitor;
- (void)callbackBatteryDatasIfNeeded;
- (void)flushBusinessDatasIfNeeded;
- (void)pr_fpsMonitorCallback:(id /* block */)a0;
- (void)startMonitorCPUWithCallback:(id /* block */)a0;
- (void)startMonitorGPUWithCallback:(id /* block */)a0;
- (void)startMonitorMemoryWithCallback:(id /* block */)a0;
- (void)startMonitorBatteryWithCallback:(id /* block */)a0;
- (void)startRepeatMonitorFPSTaskWithCallback:(id /* block */)a0;
- (void)registerAndStartBusinessMonitor:(id)a0;
- (void)monitorAlertWithType:(id)a0;
- (id)maxContinuousAlerts;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithUniqueID:(id)a0;
- (void)stopMonitor;

@end
