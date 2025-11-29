@class NSNumber, NSString, AWEECShoppingAIGuideHomePageThemeModel;

@interface AWEECShoppingAIGuidePageThemeModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (retain, nonatomic) AWEECShoppingAIGuideHomePageThemeModel *homePageTheme;
@property (retain, nonatomic) AWEECShoppingAIGuideHomePageThemeModel *chatPageTheme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)homePageThemeJSONTransformer;
+ (id)chatPageThemeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
