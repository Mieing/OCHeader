@interface AWEPaySwiftImpl.TransportCityListContainerViewController : AWEBaseListViewController <UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ onUserSelect;
}

@property (nonatomic, readonly) long long preferredStatusBarStyle;

- (void)transition_didPopDoneTransitionWithContext:(id)a0;
- (void)listDidReloadDataWithCollectionView:(id)a0;
- (void)listDidPerformBatchUpdatesWithCollectionView:(id)a0;
- (void)customLayoutCollectionView:(id)a0;
- (id)layoutForCollectionView;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:(id)a0 forSectionViewModel:(id)a1;
- (BOOL)enableStickHeader;
- (BOOL)shouldStickHeaderAtSectionIndex:(long long)a0 sectionController:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)setupCollectionView:(id)a0;

@end
