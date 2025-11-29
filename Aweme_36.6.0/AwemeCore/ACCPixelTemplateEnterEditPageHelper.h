@class NSString;

@interface ACCPixelTemplateEnterEditPageHelper : NSObject <ACCPixelTemplateEnterEditPageHelperProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableOCMusicBeatsDynamicTemplateFollow;
+ (BOOL)isMusicBeatsDynamicTemplate:(id)a0;
+ (id)musicIdForMusicBeatsDynamicTemplate:(id)a0;
+ (BOOL)isSlotsContainingPreprocessType:(unsigned long long)a0 slot:(id)a1;
+ (void)fetchTemplateModelWithTemplateId:(id)a0 templateType:(unsigned long long)a1 completion:(id /* block */)a2;
+ (BOOL)enableOCMusicBeatsDynamicTemplateFollowMusicDetail;
+ (void)fetchTemplateModelWithMusicId:(id)a0 templateType:(unsigned long long)a1 completion:(id /* block */)a2;
+ (BOOL)enableOCDynamicTemplateAutoUseMusicForMusicDetailOCF;
+ (id)aigcResultFolderWithBaseFolder:(id)a0;
+ (void)updatePublishModelForAIMemoriesWithTemplateModel:(id)a0 publishModel:(id)a1;
+ (void)applyTemplateModel:(id)a0 service:(id)a1 publishModel:(id)a2 aigcDelegate:(id)a3 customInfoDelegate:(id)a4 ttsDelegate:(id)a5 textParamDelegate:(id)a6 dynamicDelegate:(id)a7 needRender:(BOOL)a8 skipCommit:(BOOL)a9 progress:(id /* block */)a10 preprocessCompletion:(id /* block */)a11 completion:(id /* block */)a12;
+ (void)downloadTemplateIfNeeded:(id)a0 service:(id)a1 progress:(id /* block */)a2 completion:(id /* block */)a3 needCreateMediaResource:(BOOL)a4;
+ (BOOL)makeSureFolderIsCreated:(id)a0;
+ (void)setupCoverImageWithAssetModel:(id)a0 publishModel:(id)a1;
+ (BOOL)hasAIGCWithTemplate:(id)a0;
+ (double)aigcTemplateGeneratingDuration;
+ (id)assetModelWithFileURL:(id)a0;
+ (void)clearAIGCResourcesWithPublishModel:(id)a0;
+ (void)fillAVAssetWithAsset:(id)a0 publishModel:(id)a1 completion:(id /* block */)a2;
+ (id)moveAssetsToDraft:(id)a0 draftFolder:(id)a1 publishModel:(id)a2 needDeduplicated:(BOOL)a3 originalAssetIdentifierDict:(id)a4;
+ (void)fillPublishModelWithAssets:(id)a0 templateModel:(id)a1 publishModel:(id)a2 service:(id)a3;
+ (void)applyTemplateModel:(id)a0 service:(id)a1 publishModel:(id)a2 aigcDelegate:(id)a3 customInfoDelegate:(id)a4 ttsDelegate:(id)a5 textParamDelegate:(id)a6 dynamicDelegate:(id)a7 skipCommit:(BOOL)a8 progress:(id /* block */)a9 preprocessCompletion:(id /* block */)a10 completion:(id /* block */)a11;
+ (void)goToEditWithPublishModel:(id)a0 completion:(id /* block */)a1;
+ (id)mvAbilityWithTemplate:(id)a0;
+ (void)fillAVAssetWithAsset:(id)a0 completion:(id /* block */)a1;
+ (void)fillPublishModelWithAssets:(id)a0 publishModel:(id)a1;
+ (BOOL)shouldDetectFaceWithTemplate:(id)a0 atIndex:(long long)a1;
+ (id)copyFileToDraftFolder:(id)a0 filePath:(id)a1 withRandomPrefix:(BOOL)a2;
+ (void)clearResourcesUnderBaseFolder:(id)a0;
+ (BOOL)requestAIGCResultWithBizResourceModels:(id)a0 templateId:(id)a1 scene:(long long)a2 targetFolder:(id)a3 taskBlock:(id /* block */)a4 progress:(id /* block */)a5 completion:(id /* block */)a6;
+ (id)picTemplateAIGCResultFolderWithBaseFolder:(id)a0;
+ (void)fetchTemplateModelWithTemplateIdList:(id)a0 templateType:(unsigned long long)a1 requestHost:(id)a2 requestPath:(id)a3 completion:(id /* block */)a4;
+ (void)fillAVAssetWithAsset:(id)a0 publishModel:(id)a1 imageSize:(struct CGSize { double x0; double x1; })a2 completion:(id /* block */)a3;
+ (id)convertToVideoDataWithAlbumAssets:(id)a0 filePath:(id)a1;
+ (void)fillMaterialIdInNLE:(id)a0 publishModel:(id)a1;
+ (id)precheckTemplateModel:(id)a0 service:(id)a1 publishModel:(id)a2;
+ (void)turnOnUseTemplateCanvasRatioIfNeeded:(id)a0 targetModel:(id)a1;
+ (id)shootSameAssetsFolderWithBaseFolder:(id)a0;
+ (id)filterAssetRepeatedWith:(id)a0;
+ (void)mountNleModelWithAIGCResults:(id)a0 templateModel:(id)a1 publishModel:(id)a2;
+ (id)generateAssetsFromPublishModel:(id)a0;
+ (BOOL)couldPreprocessWithTemplate:(id)a0;
+ (BOOL)couldPreprocessWithTemplate:(id)a0 service:(id)a1 publishModel:(id)a2;
+ (BOOL)hasFrozenWithTemplate:(id)a0;
+ (void)mountNleModelWithAIGCResults:(id)a0 templateModel:(id)a1 nleModel:(id)a2;
+ (id)generateResourceModelsFromAssets:(id)a0 service:(id)a1 templateModel:(id)a2 taskManager:(id)a3;
+ (double)commonTemplateGeneratingDuration;
+ (double)mattingTemplateGeneratingDuration;
+ (BOOL)isNewDynamicTemplate:(id)a0;


@end
