@class BDGetBcmChainDataModel;

@interface BDGetBcmChainResultModel : IESLiveBridgeModel

@property (retain, nonatomic) BDGetBcmChainDataModel *data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
