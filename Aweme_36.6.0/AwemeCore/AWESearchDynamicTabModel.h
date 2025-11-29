@class NSString, NSDictionary, AWESearchDynamicTabConfig, NSArray, AWESearchNetWorkConfig;

@interface AWESearchDynamicTabModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *networkRequestPath;
@property (nonatomic) long long feedType;
@property (nonatomic) long long contanerType;
@property (retain, nonatomic) AWESearchNetWorkConfig *networkConfig;
@property (copy, nonatomic) NSString *containerSpecificClass;
@property (retain, nonatomic) AWESearchDynamicTabConfig *searchContainerConfig;
@property (copy, nonatomic) NSDictionary *containerModules;
@property (copy, nonatomic) NSDictionary *containerConfigDict;
@property (copy, nonatomic) NSDictionary *containerConfig;
@property (copy, nonatomic) NSString *serviceManager;
@property (copy, nonatomic) NSArray *containerService;

+ (id)containerServiceJSONTransformer;
+ (id)searchContainerConfigJSONTransformer;
+ (id)networkConfigSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
