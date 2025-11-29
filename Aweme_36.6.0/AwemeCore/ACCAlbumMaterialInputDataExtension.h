@interface ACCAlbumMaterialInputDataExtension : NSObject

+ (BOOL)isAllowAlbumAnalyzeAlbumSwitchOnStatus;
+ (BOOL)isEnableMaterialFollowUpAlbumAbilityUnifiedStatus;
+ (BOOL)isEnableAIEffectSupportMultiSelectFixStatus;
+ (BOOL)singleChooseAlbumRemovePreviewAutoSelection;
+ (BOOL)isEnableAIEffectPixelResizeStatus;
+ (long long)aiEffectResizePixel;
+ (BOOL)isEnableMaterialFollowUpAlbumAbilityUnifiedUnSupportPhotoTemplateStatus;
+ (id)videoTemplateInputDataExtension:(id)a0 slotConfigs:(id)a1;
+ (BOOL)pixaloopHasFaceStatusWithPixaloopExtraInfo:(id)a0;
+ (BOOL)pixaloopHasSingleSelectStatusWithPixaloopExtra:(id)a0;
+ (BOOL)pixaloopHasFaceStatusWithPixaloopExtra:(id)a0;
+ (BOOL)p_isSystemAlbumAnalyzeAlbumSwitchOn;
+ (BOOL)isEnableEnterMainAlbumWhenSelectEffectStatus;
+ (id)aiCreateEffectInputDataExtension:(id)a0 extraInfo:(id)a1;
+ (id)aiCreateEffectPreviewUIInputDataExtension:(id)a0 extraInfo:(id)a1;
+ (struct CGSize { double x0; double x1; })aiEffectPixelResizeWithAssetModel:(id)a0;
+ (id)templateInputDataExtension:(id)a0 slotConfigs:(id)a1;
+ (id)templateCustomBottomViewForPreviewPageInputDataExtension:(id)a0;
+ (id)stickerAIEffectInputDataExtension:(id)a0 pixaloopExtra:(id)a1;
+ (id)stickerCustomInputDataExtension:(id)a0 pixaloopExtra:(id)a1 isSingleSelectStatus:(BOOL)a2;
+ (id)trackerAlbumPropOrMVParamsWithPublishViewModel:(id)a0;

@end
