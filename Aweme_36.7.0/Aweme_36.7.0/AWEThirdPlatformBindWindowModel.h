@class NSString, NSNumber;

@interface AWEThirdPlatformBindWindowModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) long long times;
@property (nonatomic) long long interval;
@property (retain, nonatomic) NSNumber *openState;
@property (nonatomic) unsigned long long loginPlatform;

+ (id)loginPlatformJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
