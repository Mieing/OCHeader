@class AWERecordBeautyDataManager, NSMutableDictionary, AWEStudioEditBeautyFeatureConfig, AWEVideoPublishViewModel;
@protocol AEKMegaEditor;

@interface AWEEditerBeautyRenderHandler : NSObject

@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (retain, nonatomic) id<AEKMegaEditor> megaEditor;
@property (retain, nonatomic) AWERecordBeautyDataManager *dataManager;
@property (retain, nonatomic) AWEStudioEditBeautyFeatureConfig *featureConfig;
@property (retain, nonatomic) NSMutableDictionary *resourceInfo;

- (id)beautyEditorWithMegaData:(id)a0;
- (float)convertRealValue:(float)a0;
- (void)megaRemoveAllEffects;
- (void)syncRefreshAlgoAndCurrentFrame:(id)a0;
- (void)resetRender;
- (void)megaRemoveEffectWithNodeId:(id)a0;
- (long long)effectCurrentValueWithModel:(id)a0;
- (void)applyEffectWithActionModel:(id)a0 megaEditor:(id)a1;
- (void)megaRemoveNotValidEffect;
- (BOOL)hasMoreTagStatusWithActionModel:(id)a0;
- (id)resourceWithActionModel:(id)a0;
- (id)tagWithActionModel:(id)a0;
- (id)beautifyItemModelWithActionModel:(id)a0;
- (id)tagInfoWithActionModel:(id)a0;
- (float)vailedRealValue:(float)a0 realMinValue:(float)a1 realMaxValue:(float)a2;
- (id)statusModellWithActionModel:(id)a0;
- (long long)effectDefaultValueWithModel:(id)a0;
- (float)realValue:(float)a0;
- (void)prepareMegaEditorWithPublishModel:(id)a0 dataManager:(id)a1 featureConfig:(id)a2;
- (id)effectRealValueInfo;
- (void)megaCommitAndRender;
- (void)renderWithModels:(id)a0;
- (void)megaNotCommitByRemoveNotValidEffectWithMegaEditor:(id)a0;
- (void).cxx_destruct;

@end
