@interface AWECodeGenPickQuotaModel : AWEBaseDataModel

@property (nonatomic) long long quota;
@property (nonatomic) long long expireTime;

+ (id)JSONKeyPathsByPropertyKey;

@end
