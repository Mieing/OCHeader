@class NSArray, NSString;

@interface IESAccountPanelThemeResponseModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *themeLists;
@property (nonatomic) long long guideMaxCountLimit;
@property (nonatomic) long long guideLimitResetPeriod;
@property (nonatomic) long long themeResetPeriod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)themeListsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
