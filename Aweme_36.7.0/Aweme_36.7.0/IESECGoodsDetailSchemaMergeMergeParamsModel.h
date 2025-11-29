@class NSDictionary, NSString;

@interface IESECGoodsDetailSchemaMergeMergeParamsModel : IESLiveBridgeModel

@property (copy, nonatomic) NSDictionary *entranceInfo;
@property (copy, nonatomic) NSDictionary *eventAddition;
@property (copy, nonatomic) NSString *followStatus;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
