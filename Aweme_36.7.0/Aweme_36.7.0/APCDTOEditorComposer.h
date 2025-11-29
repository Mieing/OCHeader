@class NSString, NSArray, APCDTOEditorEffect, APCDTOEditorComposerExtension, APCDTOMusic, APCDTOEditorBottomConfig, APCDTOGlobalStickersConfig, APCDTOEditorAIGCEffect, APCDTOEditorSubtitleTemplate;

@interface APCDTOEditorComposer : MTLModel <AWEStudioComposerModelExtension, MTLJSONSerializing>

@property (retain, nonatomic) APCDTOEditorComposerExtension *extension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *instances;
@property (retain, nonatomic) APCDTOMusic *music;
@property (retain, nonatomic) APCDTOEditorEffect *effect;
@property (retain, nonatomic) APCDTOGlobalStickersConfig *globalStickers;
@property (retain, nonatomic) APCDTOEditorAIGCEffect *aigcEffect;
@property (nonatomic) long long showType;
@property (retain, nonatomic) APCDTOEditorBottomConfig *bottomConfig;
@property (retain, nonatomic) APCDTOEditorSubtitleTemplate *subtitleTemplate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)musicJSONTransformer;
+ (id)effectJSONTransformer;
+ (id)showTypeJSONTransformer;
+ (id)instancesJSONTransformer;
+ (id)globalStickersJSONTransformer;
+ (id)aigcEffectJSONTransformer;
+ (id)bottomConfigJSONTransformer;
+ (id)subtitleTemplateJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)syncToPublishViewModel:(id)a0;
- (void).cxx_destruct;

@end
