@class NSString, NSDictionary;

@interface IESLiveOpenLiveMiniPlayParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSDictionary *startParams;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
