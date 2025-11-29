@class NSString;

@interface AWEBindSettingModel : AWEBaseApiModel

@property (nonatomic) unsigned long long platform;
@property (copy, nonatomic) NSString *errorMsg;
@property (nonatomic) BOOL forbidBind;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)platformJSONTransformer;

- (void).cxx_destruct;

@end
