@class NSString;

@interface AWEEnterpriseTagInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long type;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
