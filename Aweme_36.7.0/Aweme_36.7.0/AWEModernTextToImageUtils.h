@interface AWEModernTextToImageUtils : NSObject

+ (double)inputAutoSaveDuration;
+ (void)downloadTextImageWithImageInfoModel:(id)a0 targetPath:(id)a1 scene:(id)a2 completion:(id /* block */)a3;
+ (void)requestTemplateListWithCategory:(id)a0 categoryList:(id)a1 disableDefaultCategory:(BOOL)a2 completion:(id /* block */)a3;
+ (void)requestImageFromText:(id)a0 skipSteps:(long long)a1 splitTime:(long long)a2 templateList:(id)a3 extraInfo:(id)a4 completion:(id /* block */)a5;
+ (id)lastPathComponentForTemplateId:(id)a0 styleId:(id)a1 color:(id)a2;
+ (BOOL)enableTextToMusicRecommend;
+ (id)recommendInfos:(id)a0;
+ (id)imageReckCacheKeyForTemplateId:(id)a0 styleId:(id)a1 textMd5:(id)a2;
+ (void)requestRotatedImageFromText:(id)a0 withTemplateConfigList:(id)a1 moodSwing:(id)a2 wordSegments:(id)a3 completion:(id /* block */)a4;
+ (void)p_requestImageFromText:(id)a0 skipSteps:(long long)a1 splitTime:(long long)a2 templateList:(id)a3 extraInfo:(id)a4 completion:(id /* block */)a5;
+ (void)p_requestRotatedImageFromText:(id)a0 withTemplateConfigList:(id)a1 moodSwing:(id)a2 wordSegments:(id)a3 completion:(id /* block */)a4;
+ (id)filterEmoji:(id)a0;
+ (void)generateBackImage:(id)a0 toTargetPath:(id)a1 completion:(id /* block */)a2;
+ (id)generateImage:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1 color:(id)a2;
+ (BOOL)enableTextToHashTagRecommend;
+ (BOOL)enableInputSaveDraft;
+ (BOOL)enableDraftBoxTextModeIcon;
+ (BOOL)enableDraftBoxWriteAgain;

@end
