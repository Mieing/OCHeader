@class AWEStudioEditAIEraserFeatureConfig, AWEStudioEditLivePhotoFeatureConfig, AWEStudioPublishFlowFeatureConfig, AWEStudioEditBeautyFeatureConfig, AWEStudioEditRedPacketFeatureConfig, AWEStudioEditEffectFeatureConfig, AWEStudioEditMusicFeatureConfig, AWEStudioEditOneClickFilmFeatureConfig, AWEStudioEditPreUploadFeatureConfig, AWEStudioEditHashtagFeatureConfig, AWEStudioEditStickerFeatureConfig, AWEStudioEditBottomPreviewFeatureConfig, AWEStudioEditFlowControlFeatureConfig, AWEStudioEditBasicFeatureConfig, AWEStudioEditPageMiniFlowConfig, AWEStudioEditPaymentFeatureConfig, AWEStudioEditBrushFeatureConfig, AWEStudioEditFilterFeatureConfig, AWEStudioEditToolBarFeatureConfig, AWEStudioEditPlayControlFeatureConfig, AWEStudioEditCropFeatureConfig, AWEStudioEditQuickSaveFeatureConfig;

@interface AWEStudioComposerEditPageConfig : AWEStudioComposerBasePageConfig

@property (retain, nonatomic) AWEStudioEditBasicFeatureConfig *basicConfig;
@property (retain, nonatomic) AWEStudioEditToolBarFeatureConfig *toolBarFeatureConfig;
@property (retain, nonatomic) AWEStudioEditFlowControlFeatureConfig *editFlowControlFeatureConfig;
@property (retain, nonatomic) AWEStudioEditStickerFeatureConfig *stickerFeatureConfig;
@property (retain, nonatomic) AWEStudioEditMusicFeatureConfig *musicFeatureConfig;
@property (retain, nonatomic) AWEStudioEditOneClickFilmFeatureConfig *oneClickFilmFeatureConfig;
@property (retain, nonatomic) AWEStudioEditPlayControlFeatureConfig *playControlFeatureConfig;
@property (retain, nonatomic) AWEStudioEditBrushFeatureConfig *brushFeatureConfig;
@property (retain, nonatomic) AWEStudioEditLivePhotoFeatureConfig *livePhotoConfig;
@property (retain, nonatomic) AWEStudioEditCropFeatureConfig *cropConfig;
@property (retain, nonatomic) AWEStudioEditAIEraserFeatureConfig *eraserConfig;
@property (retain, nonatomic) AWEStudioEditFilterFeatureConfig *filterConfig;
@property (retain, nonatomic) AWEStudioEditBeautyFeatureConfig *beautyConfig;
@property (retain, nonatomic) AWEStudioEditPreUploadFeatureConfig *preUploadFeatureConfig;
@property (retain, nonatomic) AWEStudioEditPaymentFeatureConfig *paymentFeatureConfig;
@property (retain, nonatomic) AWEStudioEditRedPacketFeatureConfig *redPacketFeatureConfig;
@property (retain, nonatomic) AWEStudioEditEffectFeatureConfig *effectConfig;
@property (retain, nonatomic) AWEStudioEditQuickSaveFeatureConfig *quickSaveConfig;
@property (retain, nonatomic) AWEStudioEditHashtagFeatureConfig *hashtagConfig;
@property (retain, nonatomic) AWEStudioEditBottomPreviewFeatureConfig *previewConfig;
@property (retain, nonatomic) AWEStudioEditPageMiniFlowConfig *miniFlowConfig;
@property (retain, nonatomic) AWEStudioPublishFlowFeatureConfig *publishControlFlowFeatureConfig;

- (id)initWithMode:(unsigned long long)a0;
- (void).cxx_destruct;

@end
