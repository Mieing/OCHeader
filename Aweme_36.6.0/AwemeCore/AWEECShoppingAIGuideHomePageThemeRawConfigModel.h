@class NSString, NSArray, NSDictionary, AWEECShoppingAIGuidePageHeaderEntryModel, AWEECShoppingAIGuidePageHeaderEntryItemModel, AWEECShoppingGuideUIExtraParamsModel;

@interface AWEECShoppingAIGuideHomePageThemeRawConfigModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *bgImg;
@property (copy, nonatomic) NSString *brandIcon;
@property (copy, nonatomic) NSString *brandName;
@property (copy, nonatomic) NSString *brandNameHeight;
@property (copy, nonatomic) NSString *activityTag;
@property (copy, nonatomic) NSString *sendIconUnableNew;
@property (copy, nonatomic) NSString *sendIconEnableNew;
@property (copy, nonatomic) NSString *hoverText;
@property (copy, nonatomic) NSArray *loadingTexts;
@property (copy, nonatomic) NSDictionary *senderConfig;
@property (nonatomic) long long quickEntryCardType;
@property (retain, nonatomic) AWEECShoppingAIGuidePageHeaderEntryModel *headerEntry;
@property (copy, nonatomic) NSString *parseIcon;
@property (retain, nonatomic) AWEECShoppingAIGuidePageHeaderEntryItemModel *cartEntry;
@property (retain, nonatomic) AWEECShoppingGuideUIExtraParamsModel *uiExtraParamsModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)headerEntryJSONTransformer;
+ (id)cartEntryJSONTransformer;
+ (id)uiExtraParamsModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
