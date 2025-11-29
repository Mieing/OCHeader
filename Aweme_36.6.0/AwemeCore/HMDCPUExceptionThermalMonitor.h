@protocol HMDCPUExceptionThermalMonitorDelegate;

@interface HMDCPUExceptionThermalMonitor : NSObject

@property BOOL running;
@property (nonatomic) BOOL isThermalAbnormal;
@property (nonatomic) unsigned long long currentThermalState;
@property (nonatomic) unsigned long long abnormalThermalState;
@property (weak, nonatomic) id<HMDCPUExceptionThermalMonitorDelegate> delegate;

- (void)unRegistThermalNotification;
- (void)registThermalNotification;
- (void)hmdDeviceTheramlStateDidChange:(id)a0;
- (void)enterThermalMonitorLevel:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)start;
- (void)dealloc;

@end
