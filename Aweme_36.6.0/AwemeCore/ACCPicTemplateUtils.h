@interface ACCPicTemplateUtils : NSObject

+ (id)appliedPicTemplateIdWith:(id)a0;
+ (BOOL)isAppliedMultiSlotsTemplateWith:(id)a0;
+ (BOOL)isAppliedAICGTemplateWith:(id)a0;
+ (BOOL)hasApplyPicTemplateWithPublishViewModel:(id)a0;
+ (id)appliedXiangSuPicTemplateIdWith:(id)a0;
+ (BOOL)enableNoteStyleCover:(id)a0;
+ (BOOL)p_isAlbumVideo:(id)a0;
+ (id)appliedPicTemplateIdsWith:(id)a0;
+ (BOOL)hasApplyPicTemplateFromPresetWithPublishViewModel:(id)a0;
+ (id)appliedPicTemplateCategoryIdWith:(id)a0;
+ (BOOL)hasAppliedMultiSlotsTemplateWith:(id)a0;
+ (BOOL)usedNoteStyleCover:(id)a0;
+ (BOOL)singleImageUsedNoteStyleCover:(id)a0;
+ (BOOL)clipNeedFrameCheckWithWorkspace:(id)a0 project:(id)a1;
+ (id)appliedPicTemplateModelsForAnchorWithPublishModel:(id)a0;
+ (id)appliedPicTemplateModelsForUploadWithPublishModel:(id)a0;
+ (id)dataContextWith:(id)a0;
+ (id)noteStyleCoverImageWithPublishModel:(id)a0;
+ (void)getCoverImageWithTargetProject:(id)a0 completion:(id /* block */)a1;
+ (BOOL)needForbidPicTemplateInsert:(id)a0;

@end
