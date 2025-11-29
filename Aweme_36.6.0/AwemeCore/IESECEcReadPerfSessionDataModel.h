@class NSDictionary, NSArray;

@interface IESECEcReadPerfSessionDataModel : IESLiveBridgeModel

@property (copy, nonatomic) NSDictionary *common;
@property (copy, nonatomic) NSArray *stages;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
