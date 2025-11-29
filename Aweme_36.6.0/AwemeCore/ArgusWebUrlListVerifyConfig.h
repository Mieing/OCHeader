@class NSArray, NSString;

@interface ArgusWebUrlListVerifyConfig : ArgusStrategyBaseConfig

@property (retain, nonatomic) NSArray *blackUrlRegList;
@property (retain, nonatomic) NSArray *blackProtocolList;
@property (retain, nonatomic) NSArray *whiteParentDomainList;
@property (retain, nonatomic) NSArray *whiteWholeDomainList;
@property (copy, nonatomic) NSString *riskInfoPageUrl;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
