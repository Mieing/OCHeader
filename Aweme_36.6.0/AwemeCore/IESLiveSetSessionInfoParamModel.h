@class NSString, NSDictionary;

@interface IESLiveSetSessionInfoParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSDictionary *info;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
