@class NSString, NSDictionary;

@interface IESGCPOpenInteractGameParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSDictionary *params;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
