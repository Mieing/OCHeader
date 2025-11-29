@interface AWEStudioEditImpl.AESoundFXListViewController : AWEBaseListViewController <AWETabListItemViewControllerProtocol> {
    void /* unknown type, empty encoding */ tokens;
    void /* unknown type, empty encoding */ tabItem;
    void /* unknown type, empty encoding */ initialLoadingView;
    void /* unknown type, empty encoding */ loadingView;
    void /* unknown type, empty encoding */ retryView;
    void /* unknown type, empty encoding */ emptyView;
}

- (id)tabContentScrollView;
- (id)segmentedControlItemConfigForTabList:(id)a0;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:(id)a0 forSectionViewModel:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)setupCollectionView:(id)a0;

@end
