@class NSString, APCDTOEditorFeature;

@interface APCDTOComposerFeature : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) APCDTOEditorFeature *editorFeature;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)editorFeatureJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)syncToPublishViewModel:(id)a0;
- (void).cxx_destruct;

@end
