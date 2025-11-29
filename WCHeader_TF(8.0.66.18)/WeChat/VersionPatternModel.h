@class NSArray;

@interface VersionPatternModel : NSObject

@property (nonatomic) long long version;
@property (nonatomic) long long AbsoluteTime;
@property (copy, nonatomic) NSArray *PatternAry;
@property (copy, nonatomic) NSArray *SystemVibrationAry;

+ (id)modelContainerPropertyMappingForConfigTag:(id)a0;

- (void).cxx_destruct;

@end
