@class NSString;

@interface IESGCPPreloadInteractGameParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *appId;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
