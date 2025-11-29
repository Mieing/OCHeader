@class NSString;

@interface MMBatteryPowerMonitorReporterStruct : NSObject

@property (nonatomic) unsigned int powerMonitorMetricsType;
@property (nonatomic) float metricsTypePowereI;
@property (nonatomic) float metricsTypePowereU;
@property (nonatomic) float metricsTypePowereP;
@property (nonatomic) double metricsTypePowereT;
@property (nonatomic) float metricsTypePowereBatteryLevel;
@property (nonatomic) unsigned int metricsTypeThermalStateChangedType;
@property (nonatomic) float metricsTypeThermalStateDuration;
@property (nonatomic) unsigned int metricsTypeBaseBatteryState;
@property (nonatomic) float metricsTypeBaseBatteryLevel;
@property (nonatomic) float metricsTypeBaseCpuUsage;
@property (nonatomic) float metricsTypeBaseGpuDeviceUtilization;
@property (nonatomic) float metricsTypeBaseGpuRendererUtilization;
@property (nonatomic) float metricsTypeBaseGpuTilerUtilization;
@property (nonatomic) unsigned int metricsTypeBaseisLowPowerMode;
@property (nonatomic) unsigned int metricsTypeBaseNetworkType;
@property (nonatomic) float metricsTypeBaseBrightness;
@property (nonatomic) unsigned int metricsTypeBaseBlueToothState;
@property (nonatomic) unsigned long long metricsTypeBaseScene;
@property (nonatomic) long long metricsTypeBaseThermalState;
@property (nonatomic) int metricsTypeLiveEnergyMode;
@property (retain, nonatomic) NSString *metricsTypeLiveRuleID;
@property (nonatomic) unsigned long long metricsTypeBaseRejectCPUTaskScene;
@property (nonatomic) unsigned long long metricsTypeLiveRenderViewType;
@property (nonatomic) unsigned long long metricsTypeLiveRenderFrameTime;

- (id)init;
- (id)initWithInfo:(id)a0;
- (id)toReport;
- (id)toFinderReport;
- (void).cxx_destruct;

@end
