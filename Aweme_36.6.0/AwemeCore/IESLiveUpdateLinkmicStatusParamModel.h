@class NSString, NSDictionary;

@interface IESLiveUpdateLinkmicStatusParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSString *bizId;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
