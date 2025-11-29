@class AWEEmptyPageSectionController, NSString, UICollectionView, AWEUINotificationBarView;

@interface AWEFollowListViewController : AWERelationListViewController <UIScrollViewDelegate>

@property (weak, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEUINotificationBarView *vcdBottomBubble;
@property (retain, nonatomic) AWEEmptyPageSectionController *emptySectionController;
@property (copy, nonatomic) id /* block */ didBlockUser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)viewModelClass;
+ (Class)aAWERelationDOUYINHTSAdapterClass;
+ (Class)aAWEVCDAuthorizeDOUYINHTSAdapterClass;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (void)customLayoutCollectionView:(id)a0;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:(id)a0 forSectionViewModel:(id)a1;
- (void)refreshData:(BOOL)a0;
- (void)addBinding;
- (id)aAWERelationDOUYINHTSAdapter;
- (id)aAWEVCDAuthorizeDOUYINHTSAdapter;
- (void)reloadEmptyHeight;
- (double)emptyViewHeight;
- (void)transferToHelpDesk;
- (void)vCDAuthorizedButtonTap;
- (void)executeGuideToastAction;
- (void)subscribeLiveStatusChange;
- (void)firstSubscribeLiveStatusChange;
- (void)trackGroupFilterButtonClickWithType:(long long)a0;
- (void)refreshDataWithNotification:(id)a0;
- (void)__refreshAfterAuthrized;
- (void)loadMoreDataForFirstLoad:(BOOL)a0;
- (double)__footerInset;
- (void)__handleVCDAlertOrBubble;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)initWithContext:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)endRefreshing;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupUI;
- (void)setupCollectionView:(id)a0;
- (void)addNotificationObserver;

@end
