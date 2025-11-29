@class NSArray, NSString, UIScrollView, UIView;
@protocol MMOrderCenterTabNumberingDataProvider;

@interface MMOrderCenterPivotViewController : MMUIViewController <UIScrollViewDelegate, MMOrderCenterTableViewControllerExt>

@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) UIScrollView *tabScrollView;
@property (retain, nonatomic) UIView *tabContainerView;
@property (retain, nonatomic) UIView *currentTabIndicatorBarView;
@property (retain, nonatomic) UIScrollView *pageContainerView;
@property (nonatomic) long long selectedIndex;
@property (retain, nonatomic) id<MMOrderCenterTabNumberingDataProvider> tabNumberingProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithItems:(id)a0 tabNumberingProvider:(id)a1;
- (void)updateDisplayName:(id)a0 atIndex:(long long)a1;
- (void)updateNumbering:(long long)a0 atIndex:(long long)a1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)didMoveToParentViewController:(id)a0;
- (void)viewDidPopOrDismiss:(BOOL)a0;
- (void)onTabViewTapped:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)onGlobalOrderRefreshRequestedByOrderTableViewController:(id)a0;
- (void)layoutTabs;
- (void)layoutControllers;
- (void)selectItemAtIndex:(long long)a0 scrollPageContainer:(BOOL)a1;
- (void)attachViewControllerAtIndex:(long long)a0;
- (void)fetchAndUpdateTabNumberingWithForce:(BOOL)a0;
- (void)updateTabNumberingWithTabCountItems:(id)a0;
- (void).cxx_destruct;

@end
