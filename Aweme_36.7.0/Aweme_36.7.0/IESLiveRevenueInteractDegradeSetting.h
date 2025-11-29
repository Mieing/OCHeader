@class IESLiveRevenueInteractResidentMonitorSetting, IESLiveRevenueInteractPreMonitorSetting;

@interface IESLiveRevenueInteractDegradeSetting : NSObject

@property (nonatomic) BOOL enableFeature;
@property (nonatomic) BOOL enableDegrade;
@property (nonatomic) BOOL enableBaseDegrade;
@property (nonatomic) double monitorDelay;
@property (nonatomic) unsigned long long fpsThreshold;
@property (retain, nonatomic) IESLiveRevenueInteractPreMonitorSetting *preMonitorSetting;
@property (retain, nonatomic) IESLiveRevenueInteractResidentMonitorSetting *residentMonitorSetting;

- (id)initWithDIContext:(id)a0;
- (void).cxx_destruct;

@end
