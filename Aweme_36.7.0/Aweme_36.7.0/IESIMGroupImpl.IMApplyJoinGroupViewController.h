@interface IESIMGroupImpl.IMApplyJoinGroupViewController : AWEBaseListViewController <AWERouterViewControllerProtocol> {
    void /* unknown type, empty encoding */ bindingStore;
    void /* unknown type, empty encoding */ collectionView;
}

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)listDidReloadDataWithCollectionView:(id)a0;
- (BOOL)configWithRouterParamDict:(id)a0;
- (void)listDidPerformBatchUpdatesWithCollectionView:(id)a0;
- (void)customLayoutCollectionView:(id)a0;
- (id)layoutForCollectionView;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:(id)a0 forSectionViewModel:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupCollectionView:(id)a0;

@end
