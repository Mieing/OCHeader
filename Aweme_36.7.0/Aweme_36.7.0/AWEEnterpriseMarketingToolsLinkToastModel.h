@class NSString;

@interface AWEEnterpriseMarketingToolsLinkToastModel : AWEBaseApiModel

@property (nonatomic) long long type;
@property (nonatomic) long long position;
@property (copy, nonatomic) NSString *tagText;
@property (copy, nonatomic) NSString *linkText;
@property (copy, nonatomic) NSString *jumpUrl;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
