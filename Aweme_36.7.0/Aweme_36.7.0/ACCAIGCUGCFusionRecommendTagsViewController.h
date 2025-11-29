@interface ACCAIGCUGCFusionRecommendTagsViewController : AWEBaseListViewController

- (void)listDidReloadDataWithCollectionView:(id)a0;
- (void)listDidPerformBatchUpdatesWithCollectionView:(id)a0;
- (id)layoutForCollectionView;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:(id)a0 forSectionViewModel:(id)a1;
- (void)bindViewModel;
- (void)bindEvent;
- (id)init;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupUI;
- (void)setupCollectionView:(id)a0;

@end
