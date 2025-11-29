@class AWECutSameFragmentModel, NSString, NLEModel_OC, AWEVideoPublishViewModel, LVCutSameVideoMaterial, ACCWorksCropEditView, ACCWorksPreviewVideoEditView, NLETrackSlot_OC, LVTemplateDataManager, ACCFragmentBridgeFragment;

@interface ACCNLEWorksCropEditManager : NSObject <ACCCutSameStyleCropEditManagerProtocol>

@property (retain, nonatomic) LVCutSameVideoMaterial *fragment;
@property (retain, nonatomic) NLETrackSlot_OC *slot;
@property (retain, nonatomic) LVTemplateDataManager *dataManager;
@property (retain, nonatomic) AWECutSameFragmentModel *fragmentModel;
@property (copy, nonatomic) id /* block */ internalChangeMaterialBlock;
@property (nonatomic) BOOL didModifiedRange;
@property (nonatomic) long long curIdx;
@property (copy, nonatomic) NSString *nleFolder;
@property (weak, nonatomic) NLEModel_OC *nleModel;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) ACCFragmentBridgeFragment *bridgeFragment;
@property (retain, nonatomic) ACCWorksCropEditView *editView;
@property (retain, nonatomic) ACCWorksPreviewVideoEditView *bottomView;
@property (copy, nonatomic) id /* block */ changeMaterialAction;
@property (copy, nonatomic) id /* block */ saveAction;
@property (copy, nonatomic) id /* block */ closeAction;
@property (nonatomic) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)createBottomView;
- (BOOL)videoRangeIgnoreGesture;
- (void)videoRangeDidBeginByType:(unsigned long long)a0;
- (void)videoRangeDidEndByType:(unsigned long long)a0;
- (void)videoRangeDidChangByPosition:(double)a0 movedType:(unsigned long long)a1;
- (id)commonParamsForPublishModel:(id)a0;
- (void)trackForChangeVideoAssetTimeRange:(id)a0;
- (void)trackForCancelSingleAssetEdit:(id)a0;
- (void)trackForClickSaveSingleAssetEdit:(id)a0;
- (id)contentTypeFromModel:(id)a0;
- (id)initWithDataManager:(id)a0 fragment:(id)a1 slot:(id)a2 fragmentModel:(id)a3 curIdx:(long long)a4 aligMode:(id)a5 nleFolder:(id)a6 toNLE:(id)a7;
- (id)p_smartMVTrackerInfo;
- (void).cxx_destruct;

@end
