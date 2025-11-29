@class NSString, NSArray;

@interface ParameterCurveModel : NSObject

@property (nonatomic) double Time;
@property (copy, nonatomic) NSString *ParameterID;
@property (copy, nonatomic) NSArray *ParameterCurveControlPoints;

+ (id)modelContainerPropertyMappingForConfigTag:(id)a0;

- (void).cxx_destruct;

@end
