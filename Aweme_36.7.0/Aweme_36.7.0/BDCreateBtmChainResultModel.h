@class BDCreateBtmChainDataModel;

@interface BDCreateBtmChainResultModel : IESLiveBridgeModel

@property (retain, nonatomic) BDCreateBtmChainDataModel *data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
