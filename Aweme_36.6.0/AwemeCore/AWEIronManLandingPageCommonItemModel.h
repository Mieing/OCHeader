@class NSString, NSArray;

@interface AWEIronManLandingPageCommonItemModel : AWEIronManLandingPageBaseRouterModel

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *iconURL;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSArray *tagList;
@property (nonatomic) unsigned long long collectingStatus;
@property (nonatomic) BOOL trackFlag;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
