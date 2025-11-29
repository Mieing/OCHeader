@interface AWEOneClickFilmingTracker : NSObject

+ (id)commomParamsForAessts:(id)a0;
+ (id)commonParamsForPublishModel:(id)a0;
+ (void)addTrackMessgeForEnterEditPgae:(id)a0 sourceAssetModelArray:(id)a1;
+ (void)trackForAIUploadIconShow:(id)a0 isAlbumPanel:(BOOL)a1;
+ (void)trackForClickAIUpload:(id)a0 sourceAssetModelArray:(id)a1 isAlbumPanel:(BOOL)a2 params:(id)a3;
+ (void)trackForClickAiUploadRetry:(id)a0;
+ (void)trackForAIUploadLoading:(id)a0 sourceAssetModelArray:(id)a1;
+ (void)trackForClickChooseTemplate:(id)a0;
+ (void)trackForEnterTemplatePreviewPage:(id)a0 enterMethod:(id)a1;
+ (void)trackForSelectTemplate:(id)a0;
+ (void)trackForCancelTemplate:(id)a0;
+ (void)trackForEditTemplate:(id)a0;
+ (void)trackForEditTemplateText:(id)a0;
+ (void)trackForEditTemplateRange:(id)a0;
+ (void)trackForClickUploadEntrance:(id)a0;
+ (void)trackForEditTemplateComplete:(id)a0 isEdited:(BOOL)a1;
+ (void)trackForSaveTemplate:(id)a0 isNoTemplateVideo:(BOOL)a1;
+ (void)trackForGiveUpEffect:(id)a0 isChangeTemplate:(BOOL)a1;
+ (void)trackForClickTemplatePreview:(id)a0 enterFrom:(id)a1 isPlay:(BOOL)a2;
+ (void)trackForShowTemplatePopup:(id)a0;
+ (void)trackForShowTemplate:(id)a0 templateModelId:(id)a1;
+ (void)trackForAnalyzeTime:(double)a0 publishModel:(id)a1 error:(id)a2 materialCache:(BOOL)a3;
+ (void)trackForSingleAnalyzeTime:(double)a0 asset:(id)a1 error:(id)a2;
+ (void)trackForMatchTime:(double)a0 publishModel:(id)a1 error:(id)a2;
+ (void)trackForFetchTime:(double)a0 publishModel:(id)a1 error:(id)a2;
+ (void)trackForRecommendTime:(double)a0 publishModel:(id)a1 error:(id)a2;
+ (void)trackForIntelligentLoadResultWithStatus:(unsigned long long)a0;
+ (void)trackForTemplateImportFinishWithPublishModel:(id)a0 isFirstTimeImport:(BOOL)a1 timeCost:(long long)a2 templateID:(id)a3 templateSize:(id)a4 error:(id)a5;
+ (void)trackForSmartVideoLoadingPageSuccessRate:(double)a0 publishModel:(id)a1 templateID:(id)a2 templateSize:(id)a3 error:(id)a4 errorState:(id)a5;
+ (void)trackForChangeTemplateLoadingSuccessRate:(double)a0 publishModel:(id)a1 templateID:(id)a2 templateSize:(id)a3 error:(id)a4 preload:(BOOL)a5;
+ (void)trackForHalfScreenLoadingPageCloseActionWith:(id)a0 sourceAssetModelArray:(id)a1 isAlbumPanel:(BOOL)a2;

@end
