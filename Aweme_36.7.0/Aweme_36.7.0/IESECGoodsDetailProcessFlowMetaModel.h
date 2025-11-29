@class NSDictionary, IESECGoodsDetailProcessFlowBizMeta;

@interface IESECGoodsDetailProcessFlowMetaModel : IESECBaseApiModel

@property (copy, nonatomic) NSDictionary *trackMeta;
@property (copy, nonatomic) IESECGoodsDetailProcessFlowBizMeta *businessMeta;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
