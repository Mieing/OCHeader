@class NSArray, NSString, LVTemplateDataManager, AWEVideoPublishViewModel, AWESelectTemplateDataProvider;
@protocol ACCMVTemplateModelProtocol;

@interface AWECutSameToEditManager : NSObject <ACCCutSameToEditManagerProtocol>

@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) LVTemplateDataManager *dataManager;
@property (retain, nonatomic) id<ACCMVTemplateModelProtocol> currentTemplateModel;
@property (retain, nonatomic) NSArray *templatesArray;
@property (retain, nonatomic) AWESelectTemplateDataProvider *selectTemplateDataProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)addCutSameNLEModel:(id)a0 publishModel:(id)a1 templateModel:(id)a2;
+ (double)calculateMaterialDurationUseWithMaterialArray:(id)a0 templateModel:(id)a1;
+ (void)addCutSameNLETemplateModel:(id)a0 publishModel:(id)a1 templateModel:(id)a2;
+ (void)addCutSame:(id)a0 publishModel:(id)a1 toNLE:(id)a2 templateModel:(id)a3;
+ (void)copyResourcesFromLemonDraft:(id)a0 publishModel:(id)a1;
+ (void)trimCutsameModel:(id)a0 newModel:(id)a1;
+ (void)recursionForMergeFolder:(id)a0 desPath:(id)a1;
+ (void)addCutSameNLETemplateModel:(id)a0 publishModel:(id)a1 templateModel:(id)a2 toNLE:(id)a3;

- (void)startCutSameDataProcessWithPublishModel:(id)a0 materialAssets:(id)a1 templateModel:(id)a2 progressHandle:(id /* block */)a3 completion:(id /* block */)a4;
- (id)transformMVTemplateModelFromJSON:(id)a0 extraJSON:(id)a1;
- (void)dynamicSlotPipelineWithAssets:(id)a0 templateModel:(id)a1 pipelineError:(id *)a2;
- (void)p_addChallengeInfosForCutSame;
- (id)p_getAssetModels:(id)a0;
- (id)p_generateDisplayFragments;
- (void).cxx_destruct;

@end
