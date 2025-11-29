@class NSString, APCDTOMVDataConfigExtension, NSArray;

@interface APCDTOMVDataConfig : MTLModel <AWEStudioComposerModelExtension, MTLJSONSerializing>

@property (retain, nonatomic) APCDTOMVDataConfigExtension *extension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *templateId;
@property (nonatomic) long long targetPageType;
@property (nonatomic) BOOL isPicTemplate;
@property (copy, nonatomic) NSArray *musicIdList;
@property (copy, nonatomic) NSString *dynamicTemplateTransitionPath;
@property (nonatomic) long long isDynamicTemplate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)targetPageTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (unsigned long long)apc_currentTemplateType;
- (void).cxx_destruct;

@end
