@class NSString, ACCSideslipPropPickCellCoordinatorStore, AWEVideoPublishViewModel;

@interface ACCSideslipPropPanelCellModelBuilder : NSObject <ACCSideslipPropPanelCellModelBuilderProtocol>

@property (retain, nonatomic) ACCSideslipPropPickCellCoordinatorStore *cellCoordinatorStore;
@property (retain, nonatomic) AWEVideoPublishViewModel *repository;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createPlaceHolderCellModelsWithCount:(long long)a0;
- (id)createNormalPickCellModelsWithDataModels:(id)a0 maxCount:(long long)a1 isReverse:(BOOL)a2 compactMap:(id /* block */)a3;
- (id)cellClassesForCellModels:(id)a0;
- (id)createNormalPickCellModelWithDataModel:(id)a0;
- (id)createDiscoverCellModel;
- (id)createCancelCellModel;
- (id)createRearLoadCellModel;
- (id)createAddAIGCCellModel;
- (id)createAIGCEffectCellModel;
- (id)initWithRepository:(id)a0;
- (void).cxx_destruct;

@end
