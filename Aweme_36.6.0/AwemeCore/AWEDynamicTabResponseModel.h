@class AWESearchTabGuideResponse, NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface AWEDynamicTabResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSDictionary *intentInfoDic;
@property (retain, nonatomic) AWESearchTabGuideResponse *guide;
@property (copy, nonatomic) NSArray *tabs;
@property (nonatomic) BOOL enableAlienatedTabShow;
@property (retain, nonatomic) NSMutableDictionary *alienatedTabs;
@property (copy, nonatomic) NSString *logid;

+ (id)tabsJSONTransformer;
+ (id)guideJSONTransformer;
+ (id)alienatedTabsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
