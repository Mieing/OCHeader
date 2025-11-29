@interface AWEPreviewBizUIContainerViewController : AWEBaseListViewController

- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:(id)a0 forSectionViewModel:(id)a1;
- (id)init;
- (void)viewDidLoad;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupUI;
- (void)setupCollectionView:(id)a0;
- (void)backButtonTapped;

@end
