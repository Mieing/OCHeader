@class NSString, APCDTOTextConfigExtension, NSArray;

@interface APCDTOTextConfig : MTLModel <AWEStudioComposerModelExtension, MTLJSONSerializing>

@property (retain, nonatomic) APCDTOTextConfigExtension *extension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *templateId;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL useTextForPublish;
@property (copy, nonatomic) NSString *templateCategory;
@property (copy, nonatomic) NSArray *extraList;
@property (nonatomic) long long textModeEnterMethod;
@property (copy, nonatomic) NSString *textModeUseScene;
@property (copy, nonatomic) NSArray *templateCategoryList;
@property (nonatomic) long long selectRandomTemplateNumber;
@property (nonatomic) BOOL disableDefaultCategory;
@property (nonatomic) long long landingType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)extraListJSONTransformer;
+ (id)landingTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
