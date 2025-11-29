@class NSString, NSDictionary;

@interface AWEIMCodeGenConversationBannerConfigurationModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *bannerKey;
@property (copy, nonatomic) NSDictionary *texts;
@property (copy, nonatomic) NSDictionary *icons;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
