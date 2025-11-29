@class NSString, NSDictionary, AWEECShoppingAIGuideHomePageThemeRawConfigModel, AWEECShoppingAIGuideTracker;

@interface AWEECShoppingAIGuideContext : NSObject

@property (nonatomic) unsigned long long agentType;
@property (copy, nonatomic) NSString *agentName;
@property (retain, nonatomic) AWEECShoppingAIGuideTracker *tracker;
@property (copy, nonatomic) NSString *pageRawQuery;
@property (retain, nonatomic) NSDictionary *funcField;
@property (retain, nonatomic) AWEECShoppingAIGuideHomePageThemeRawConfigModel *themeRawConfig;
@property (retain, nonatomic) AWEECShoppingAIGuideHomePageThemeRawConfigModel *chatRawConfig;
@property (readonly, nonatomic) BOOL shouldHideAgree;
@property (copy, nonatomic) NSDictionary *paramsExtra;
@property (copy, nonatomic) NSString *incomeOpType;
@property (nonatomic) BOOL useMarkdownRender;
@property (nonatomic) BOOL requestBizDynamicData;
@property (nonatomic) BOOL disableLoadHistoryData;

+ (unsigned long long)convertAgentTypeWithName:(id)a0;

- (void)setupPageTheme:(id)a0;
- (void)welcomeAgreeDidShow;
- (id)getDefaultHeaderEntryInfo;
- (void).cxx_destruct;
- (id)initWithParams:(id)a0;

@end
