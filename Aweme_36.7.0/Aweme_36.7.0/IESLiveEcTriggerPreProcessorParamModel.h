@class NSNumber, NSDictionary;

@interface IESLiveEcTriggerPreProcessorParamModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *optimization;
@property (copy, nonatomic) NSDictionary *data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
