@class NSString, UIViewController, AWETabContainerSectionController;

@interface AWEGuestHomeViewController : AWEBaseListViewController <AWETabContainerSectionControllerDataSource, AWETabContainerSectionControllerDelegate, AWEGuestHomeViewControllerProtocol, AWETabBarItemViewControllerProtocol, AWERouterViewControllerProtocol>

@property (weak, nonatomic) AWETabContainerSectionController *tabSectionController;
@property (weak, nonatomic) UIViewController *selectedViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)duxGrid_viewDidChangeBreakPointFrom:(struct { long long x0; long long x1; })a0 toBreakPoint:(struct { long long x0; long long x1; })a1;
- (double)heightForSegmentedControl;
- (void)customLayoutCollectionView:(id)a0;
- (id)layoutForCollectionView;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:(id)a0 forSectionViewModel:(id)a1;
- (id)viewControllerForModel:(id)a0 index:(long long)a1;
- (double)heightForSectionController:(id)a0;
- (void)setupTabContentConfig:(id)a0;
- (id)segmentedControlForSectionController:(id)a0;
- (void)updateSegmentedControl:(id)a0 itemsArray:(id)a1;
- (void)tabContainerSectionController:(id)a0 didSelectItemAtIndex:(long long)a1 itemViewController:(id)a2 isByTap:(BOOL)a3;
- (BOOL)tabContainerSectionControllerShouldDisableAccessibilityAutoScroll:(id)a0;
- (BOOL)lazyAccessItemViewControllerForTabContent;
- (void)bindViewModel;
- (BOOL)enableStickCollectionView;
- (void)bindEvent;
- (void)willSwitchToHomePageTabWithEnterMethod:(id)a0 previousSelectedType:(long long)a1;
- (void)didLeaveHomePageTab;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)init;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupUI;
- (void)setupCollectionView:(id)a0;

@end
