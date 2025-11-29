@interface ACCAEStickerUtils : ACCAEStickerBaseUtils

+ (id)readModelWithJsonString:(id)a0;
+ (void)updateDefaultStyleOnceOverwriteInstallation:(id)a0 lastTextModel:(id)a1;
+ (id)textModelWithTextTemplateSticker:(id)a0 clip:(id)a1;
+ (id)textModelWithTextSticker:(id)a0 clip:(id)a1;
+ (void)verifyFontModelWithTextModel:(id)a0;
+ (id)defaultTextModel:(BOOL)a0;
+ (void)updateCommonInfoWithSticker:(id)a0 clip:(id)a1 textModel:(id)a2;
+ (id)fontModelWithClip:(id)a0;
+ (id)textModelWithUserInfo:(id)a0;
+ (id)colorModelWithClip:(id)a0;
+ (id)extraInfosWithJsonString:(id)a0;
+ (id)textStickerConfigWithLocationModel:(id)a0;
+ (id)defaultTTSModelWithStickerViewId:(id)a0 text:(id)a1;
+ (id)textModelWithSticker:(id)a0 atIndex:(unsigned long long)a1;
+ (id)textModelMapWithTextTemplateData:(id)a0;
+ (id)dataWithTextModel:(id)a0;
+ (id)textModelWithJsonString:(id)a0;
+ (id)jsonStringWithExtraInfos:(id)a0;
+ (id)locationModelWithUserInfo:(id)a0;

@end
