@class NSString, IESECGoodsDetailSchemaMergeMergeParamsModel, NSDictionary;

@interface IESECGoodsDetailSchemaMergeParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) IESECGoodsDetailSchemaMergeMergeParamsModel *mergeParams;
@property (nonatomic) BOOL avoidOpen;
@property (copy, nonatomic) NSString *btm;
@property (copy, nonatomic) NSDictionary *bcmParams;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
