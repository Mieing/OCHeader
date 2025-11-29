@class NSArray, NSNumber;

@interface MMLiveEnergyRuleConditions : NSObject

@property (copy, nonatomic) NSArray *thermalStates;
@property (copy, nonatomic) NSArray *overheatingTorchStatuses;
@property (copy, nonatomic) NSArray *batteryStates;
@property (retain, nonatomic) NSNumber *minimumBatteryLevel;
@property (retain, nonatomic) NSNumber *maximumBatteryLevel;
@property (copy, nonatomic) NSArray *networkTypes;

- (void).cxx_destruct;

@end
