@interface AWEKnowledgeSwiftImpl.InterestDetailPhotoAlbumViewController : AWEBaseTabListViewController <AWERouterViewControllerProtocol> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_photoViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_navigationPanelView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_interestPanel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomPanelView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_optionButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_shootButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_optionLabel;
    void /* unknown type, empty encoding */ loadingToast;
    void /* unknown type, empty encoding */ dialog;
}

@property (nonatomic, readonly) long long preferredStatusBarStyle;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)didClickBackButton;
- (id)initWithNibName:(id)a0 bundle:(id)a1 viewModel:(id)a2;
- (id)tabListHeaderViewController;
- (id)tabListItemViewControllerForModel:(id)a0 index:(long long)a1;
- (id)segmentedControlForTabList;
- (double)heightForSegmentedControl;
- (struct AWEListKitSegmentedControlMargins { double x0; double x1; })marginsForSegmentedControl;
- (void)updateSegmentedControl:(id)a0 itemModelsArray:(id)a1 itemConfigsArray:(id)a2;
- (void)tabListContainerDidSelectItemAtIndex:(long long)a0 itemViewController:(id)a1 isByTap:(BOOL)a2;
- (double)topSafeAreaForTabList;
- (void)setupTabListWithConfig:(id)a0;
- (void)didClickInterestPanel;
- (void)didClickOptionLabel;
- (void)didClickUploadButton;
- (void)didClickSetTopButton;
- (void)didClickDeleteButton;
- (double)bottomSafeAreaForTabList;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;

@end
