@interface IESIMGroupRecommendImpl.GroupRecommendUIService : NSObject <IESIMGroupRecommendUIService>

- (id)convertToRecommendGroupCellModels:(id)a0;
- (id)convertToHotspotViewModels:(id)a0;
- (id)registerRecommendCellWithCollectionView:(id)a0;
- (void)configureCellWithModel:(id)a0 cell:(id)a1;
- (id)defaultGroupListUIConfiguration;
- (id)groupListViewControllerWithDataProvider:(id)a0 uiConfiguration:(id)a1;
- (id)recommendGroupListViewControllerWithInitialData:(id)a0 uiConfiguration:(id)a1 source:(id)a2 categoryID:(id)a3 enterFrom:(id)a4 enterMethod:(id)a5 checkPersonalRecommendLimit:(BOOL)a6 bizExt:(id)a7;
- (void)reloadRecommendGroupListWithViewController:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
