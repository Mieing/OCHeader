@class NSString, NSArray;

@interface AWEEnterpriseMarketingToolsCheckResponseModel : AWEBaseApiModel

@property (nonatomic) BOOL eMarketingTools;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSArray *marketingTools;
@property (copy, nonatomic) NSString *linkToasts;

+ (id)marketingToolsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
