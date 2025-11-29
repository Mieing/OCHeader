@class NSString;

@interface AWEDetailNewTrendMiddleViewController : AWEBaseListViewController <AWERouterViewControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)listDidReloadDataWithCollectionView:(id)a0;
- (BOOL)configWithRouterParamDict:(id)a0;
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
