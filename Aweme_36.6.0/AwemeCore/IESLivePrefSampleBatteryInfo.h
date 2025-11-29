@class NSNumber;

@interface IESLivePrefSampleBatteryInfo : NSObject

@property (retain, nonatomic) NSNumber *low_power_mode;
@property (retain, nonatomic) NSNumber *state;
@property (retain, nonatomic) NSNumber *level;
@property (copy, nonatomic) NSNumber *generateTime;
@property (retain, nonatomic) NSNumber *speed;

- (void).cxx_destruct;

@end
