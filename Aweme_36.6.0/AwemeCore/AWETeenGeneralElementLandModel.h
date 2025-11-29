@class NSString;

@interface AWETeenGeneralElementLandModel : AWEBaseApiModel

@property (nonatomic) long long landType;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *schema;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
