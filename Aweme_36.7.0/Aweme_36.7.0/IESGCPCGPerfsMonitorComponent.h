@class NSLock, NSString, IESGCPCGDetectGesture, NSDictionary, IESGCPCGBlackFrameMonitorService, NSMutableArray, IESGCPCGBitrateMonitorService, IESGCPCGBlockMonitorService;

@interface IESGCPCGPerfsMonitorComponent : IESGCPCGInstanceBaseComponent <IESGCPCGInstanceActions, IESGCPCGPerfsMonitorRouter>

@property (retain, nonatomic) IESGCPCGBlackFrameMonitorService *blackFrameMonitor;
@property (retain, nonatomic) IESGCPCGBitrateMonitorService *bitrateMonitor;
@property (retain, nonatomic) IESGCPCGBlockMonitorService *blockDurationMonitor;
@property (retain, nonatomic) IESGCPCGDetectGesture *detectGesture;
@property (retain, nonatomic) NSDictionary *bigStallConfig;
@property (retain, nonatomic) NSDictionary *autoDetectConfig;
@property (nonatomic) double becomeForegroundTime;
@property (retain, nonatomic) NSMutableArray *feedbackStats;
@property (retain, nonatomic) NSLock *feedbackLock;
@property (nonatomic, getter=isBackground) BOOL background;
@property (nonatomic) double lastBackgroundTime;
@property (nonatomic) long long rxCellularKBitrate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetGameCPDIContext;
- (void)playInstance:(id)a0 playStatusDidUpdated:(long long)a1 info:(id)a2;
- (void)playInstance:(id)a0 didReceivePlayStats:(id)a1;
- (void)componentDidAttached;
- (BOOL)hasRunningForegroundMoreThanSeconds:(double)a0;
- (BOOL)hasRunningForegroundNormally;
- (id)feedbackMonitorParams;
- (BOOL)isRunningNormally;
- (BOOL)isDetectedBlackFrame;
- (unsigned long long)zeroFPSCount;
- (BOOL)_monitorEnabled;
- (void)_didBecomeActivate;
- (void)_setupDetectGesture;
- (unsigned long long)autoDetectedPeriod;
- (id)convertPerformanceDataToJson;
- (id)flatPerformanceData;
- (id)feedbackPerformanceData;
- (void)recordPerformanceDataForFeedback:(id)a0;
- (id)paramsReported:(id)a0;
- (unsigned long long)feedbackDataCapacityByConfig;
- (void)updateBackgroundFiledInStatsModel:(id)a0;
- (BOOL)isCellularConnected;
- (id)batteryCapacity;
- (void)_didEnterBackground;
- (void).cxx_destruct;
- (id)batteryTemperature;
- (id)init;
- (void)addObserver;
- (void)dealloc;
- (id)playTime;

@end
