@class NSString, NSDictionary;

@interface IESLiveGetLinkmicStatusParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *bizId;
@property (copy, nonatomic) NSDictionary *extra;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
