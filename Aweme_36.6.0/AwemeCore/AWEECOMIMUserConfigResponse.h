@class NSString;

@interface AWEECOMIMUserConfigResponse : AWEECOMIMUserConfig

@property (nonatomic) int shop_id;
@property (copy, nonatomic) NSString *user_id;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
