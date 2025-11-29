@class NSDictionary, NSString;

@interface AnnieGetPerfTimingDataModel : IESLiveBridgeModel

@property (copy, nonatomic) NSDictionary *containerInfo;
@property (copy, nonatomic) NSDictionary *containerMetric;
@property (copy, nonatomic) NSDictionary *containerTiming;
@property (copy, nonatomic) NSString *url;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
