@class NSString, NSDictionary;

@interface IESECLiveGotoECLiveParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *baseSchema;
@property (copy, nonatomic) NSDictionary *query;
@property (copy, nonatomic) NSDictionary *ecomLiveParams;
@property (nonatomic) BOOL open;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
