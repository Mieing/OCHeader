@class NSString, NSDictionary;

@interface AnnieEcMallBackParamsModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSDictionary *extraParams;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
