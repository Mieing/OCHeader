@class NSString;

@interface AWEIronManLandingPageSearchResultItemModel : AWEIronManLandingPageBaseRouterModel

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *iconURL;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) BOOL trackFlag;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)location;

@end
