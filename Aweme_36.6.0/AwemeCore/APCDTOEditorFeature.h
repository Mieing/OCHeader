@class NSString, APCDTOEditorFeatureExtension;

@interface APCDTOEditorFeature : MTLModel <AWEStudioComposerModelExtension, MTLJSONSerializing>

@property (retain, nonatomic) APCDTOEditorFeatureExtension *extension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL autoDisplayEditorPreview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)syncToPublishViewModel:(id)a0;

@end
