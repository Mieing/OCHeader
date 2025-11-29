@class NSString;

@interface AWEPerfEvaluatePowerCollector : NSObject <AWEPerfEvaluateCollector>

@property (readonly, nonatomic) BOOL needBatteryLevel;
@property (readonly, nonatomic) BOOL needIsLowPowerMode;
@property (readonly, nonatomic) BOOL needIsCharge;
@property (readonly, nonatomic) BOOL needThermalStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
