@class NSString;

@interface AWEIMSecurityToastConfigParamModel : AWEBaseApiModel

@property (nonatomic) long long paramType;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *target;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
