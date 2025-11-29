@class NSString, NSDictionary;

@interface IESLiveLiveGetConcertStatusParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *bizId;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSDictionary *extra;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
