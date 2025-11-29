@class BDGetBcmChainV2DataModel;

@interface BDGetBcmChainV2ResultModel : IESLiveBridgeModel

@property (retain, nonatomic) BDGetBcmChainV2DataModel *data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
