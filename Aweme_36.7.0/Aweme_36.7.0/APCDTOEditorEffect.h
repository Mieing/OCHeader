@class NSString, NSArray;

@interface APCDTOEditorEffect : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *effectId;
@property (nonatomic) long long genericTemplateType;
@property (nonatomic) BOOL autoOpenPanel;
@property (nonatomic) BOOL autoApply;
@property (copy, nonatomic) NSArray *templateIds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)genericTemplateTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)syncToPublishViewModel:(id)a0;
- (void).cxx_destruct;

@end
