@class ACCEditBeautyEffectDataManager, ACCEditBeautyEffectContentViewController, NSMapTable, NSHashTable, ACCEditBeautyEffectViewController, NSString, NSArray;
@protocol ACCEditBeautyEffectVCContextDelegation;

@interface ACCEditBeautyEffectVCContext : NSObject <ACCEditBeautyEffectDataManagerSubscriberProtocol>

@property (retain, nonatomic) NSMapTable *contentVCs;
@property (retain, nonatomic) NSHashTable *subscribers;
@property (weak, nonatomic) ACCEditBeautyEffectContentViewController *currentContentVC;
@property (weak, nonatomic) ACCEditBeautyEffectViewController *rootVC;
@property (nonatomic) BOOL isMultipersonStatus;
@property (weak, nonatomic) id<ACCEditBeautyEffectVCContextDelegation> delegate;
@property (weak, nonatomic) ACCEditBeautyEffectDataManager *dataManager;
@property (nonatomic) BOOL enableBlurViewOpt;
@property (nonatomic) BOOL isAppendStyleNodeBySplitelineNodeStatus;
@property (nonatomic) BOOL isSubPanelViewStatus;
@property (copy, nonatomic) NSString *currentSelectStyleItemNodeId;
@property (retain, nonatomic) NSArray *exposeChildItemNodeIds;
@property (copy, nonatomic) NSString *selectOffNodeId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didUpdateAllStatus;
- (void)didUpdateDefaultStateStatus:(BOOL)a0;
- (void)turnOnBeauty;
- (void)turnOffBeauty;
- (void)showAlertWithTitle:(id)a0 content:(id)a1 actionButtonTitle:(id)a2 cancelButtonTitle:(id)a3 actionBlock:(id /* block */)a4 cancelBlock:(id /* block */)a5;
- (id)styleExtraCellModelsNodeIdInfoWithItemModels:(id)a0;
- (void)updateDetectFaceStatusWithMultipersonStatus:(BOOL)a0;
- (void)updateCurrentVC;
- (void)handleSlider:(id)a0 finishSlidingWithValue:(long long)a1 realValue:(long long)a2;
- (void)updateContentVC:(id)a0;
- (BOOL)isTurnOffBeauty;
- (void)collectionView:(id)a0 selectLeafItem:(id)a1;
- (void)collectionView:(id)a0 selectCollection:(id)a1;
- (void)bindCurrentContentVC:(id)a0;
- (void)addContentVC:(id)a0 withNodeId:(id)a1;
- (void)removeContentVCWithNodeId:(id)a0;
- (void)p_updateItemVC:(id)a0;
- (id)cellModelsWithNodeId:(id)a0;
- (void)p_changeResetButtonStateInVC:(id)a0 isAllInDefaultState:(BOOL)a1;
- (void)p_updateSliderIfUpdatingCurrentContentVCWithConentVCNodeId:(id)a0;
- (id)removeStyleNodeIfNeededWithStatusModes:(id)a0;
- (id)p_generateCellModelWithItemStatusModel:(id)a0;
- (id)offNodeWithItemStatusModel:(id)a0 cellModel:(id)a1;
- (id)styleMoreNodeWithItemStatusModel:(id)a0 cellModel:(id)a1;
- (id)styleChildExtraNodesWithItemStatusModel:(id)a0 cellModel:(id)a1;
- (void)cellModelsAppendCellModel:(id)a0 itemStatusModel:(id)a1 cellModels:(id)a2;
- (id)styleOffNodeDefaultSelectIfNeededWithStatusModes:(id)a0;
- (long long)cellModelsAppendStyleCellModelWithStatusModes:(id)a0 styleNodeIndex:(long long)a1 cellModels:(id)a2;
- (void)cellModelsAppendSplitelineWithIndex:(long long)a0 cellModels:(id)a1;
- (id)cellModelsFindStyleMoreNodeWithStatusModes:(id)a0;
- (id)styleExtraNodesWithStyleMoreNode:(id)a0;
- (id)firstAndSecondChildExtraNodeIndexsWithChildExtraNodes:(id)a0;
- (id)firstAndSecondChildNodeStatusModelWithChildExtraNodes:(id)a0 firstAndSecondChildExtraNodeIndexs:(id)a1;
- (BOOL)cellModelsAppendFirstAndSecondChildNodeCellModelWithStatusModels:(id)a0 cellModels:(id)a1;
- (id)splitlineCellModel;
- (long long)cellStatusWithItemStatusModel:(id)a0;
- (void)assignRootVC:(id)a0;
- (void)handleTapResetButton:(id)a0 resetTitle:(id)a1;
- (void)resetStatusWithNodeIds:(id)a0;
- (void)showToast:(id)a0;
- (void).cxx_destruct;
- (id)initWithDataManager:(id)a0;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;

@end
