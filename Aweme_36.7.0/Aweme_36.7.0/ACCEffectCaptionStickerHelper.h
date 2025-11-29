@interface ACCEffectCaptionStickerHelper : NSObject

+ (void)fetchStyleConfigsWithRepoCaption:(id)a0 completion:(id /* block */)a1;
+ (BOOL)isTimeOverlappingWithACaption:(id)a0 bCaption:(id)a1;
+ (void)downloadTextTemplateEffectList:(id)a0 selectEffectId:(id)a1 isServerEffect:(BOOL)a2 completion:(id /* block */)a3;
+ (void)fetchDependenceResources:(id)a0 completion:(id /* block */)a1;
+ (void)downloadFontEffect:(id)a0 completion:(id /* block */)a1;
+ (void)buildStyleConfigsWithRepoCaption:(id)a0 completion:(id /* block */)a1;
+ (id)editorWithEffectModel:(id)a0 canvasSize:(struct CGSize { double x0; double x1; })a1 draftFolder:(id)a2;
+ (void)fetchTemplateListAndSelectEffect:(id)a0 isServerEffect:(BOOL)a1 completion:(id /* block */)a2;
+ (id)filterOverlappingCaption:(id)a0;

@end
