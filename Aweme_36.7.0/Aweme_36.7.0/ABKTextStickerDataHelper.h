@interface ABKTextStickerDataHelper : NSObject

+ (id)buildTextClips:(id)a0 effect:(id)a1 templateModel:(id)a2 templateType:(unsigned long long)a3;
+ (id)convertTemplateMiniDraftConfigModelToTextStickerConfig:(id)a0;
+ (void)setupBasicProperties:(id)a0 withMiniDraftConfig:(id)a1;
+ (void)setupTextStyle:(id)a0 withMiniDraftConfig:(id)a1;
+ (void)setupDependResources:(id)a0 withMiniDraftConfig:(id)a1;
+ (id)createResourceWithId:(id)a0;
+ (id)localTemplateResource;
+ (void)setupTemplateBasicProperties:(id)a0 withTemplateConfig:(id)a1;
+ (void)setupTemplateTextStyle:(id)a0 withTemplateConfig:(id)a1;
+ (void)setupTemplateDependResources:(id)a0 withTemplateConfig:(id)a1;
+ (id)convertMiniDraftConfigModelToTextStickerConfig:(id)a0;
+ (void)findDependentResources:(id)a0 intoArray:(id)a1;
+ (id)extractDependentModelsFromJSON:(id)a0;
+ (id)convertStickerDataToCaptionModel:(id)a0;

@end
