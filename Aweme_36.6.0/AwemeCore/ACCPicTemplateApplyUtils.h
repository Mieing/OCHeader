@interface ACCPicTemplateApplyUtils : NSObject

+ (BOOL)enableAIMattingAbility;
+ (BOOL)enableAIGCAbility;
+ (BOOL)maxWaitAIGCCount;
+ (void)switchMultiSlotPicTemplateRenderCache:(BOOL)a0 project:(id)a1;
+ (void)switchSingleSlotPicTemplateRenderCache:(BOOL)a0 project:(id)a1;
+ (id)aigcResourceModelsInNLEModel:(id)a0;
+ (void)updateProjectCanvasSourceGeneratedWith:(id)a0;
+ (struct CGSize { double x0; double x1; })getCanvasSizeWithOriginalModel:(id)a0;
+ (id)generateAssetsForAIGCWithTemplate:(id)a0 publishViewModel:(id)a1 presetService:(id)a2;
+ (BOOL)isValidDetectFaceWithTemplate:(id)a0 assets:(id)a1;
+ (void)multiSlotPicTemplateApplyOpt:(BOOL)a0 publishViewModel:(id)a1;
+ (void)simplifiedNleModel:(id)a0 publishViewModel:(id)a1;
+ (void)updateEditCanvasStateWithProject:(id)a0;
+ (void)restoreBizInfoWithTrackChangeInfo:(id)a0 publishViewModel:(id)a1 nleModel:(id)a2;
+ (void)setImageResizeWithMultiSlotTemplate:(BOOL)a0 project:(id)a1;
+ (void)cacheImageInfoWithPublishViewModel:(id)a0;
+ (BOOL)hasRotationInfoInCropWith:(id)a0;

@end
