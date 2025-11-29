@class NSArray;

@interface ParametersModel : NSObject

@property (nonatomic) long long Frequency;
@property (nonatomic) long long Intensity;
@property (copy, nonatomic) NSArray *Curve;

+ (id)modelContainerPropertyMappingForConfigTag:(id)a0;

- (void).cxx_destruct;

@end
