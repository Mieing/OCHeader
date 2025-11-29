@class NSString, NSNumber;

@interface IESLivePrefSampleThermalInfo : NSObject

@property (copy, nonatomic) NSString *state;
@property (nonatomic) long long thermalState;
@property (copy, nonatomic) NSNumber *generateTime;

- (void).cxx_destruct;

@end
