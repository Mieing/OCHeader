@class NSDictionary;

@interface IESGCPGetXplayRunningParamDataModel : IESLiveBridgeModel

@property (copy, nonatomic) NSDictionary *runningParams;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
