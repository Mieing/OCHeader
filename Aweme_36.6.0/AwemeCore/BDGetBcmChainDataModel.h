@class NSDictionary;

@interface BDGetBcmChainDataModel : IESLiveBridgeModel

@property (copy, nonatomic) NSDictionary *content;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
