@class AWEEmptyPageSectionController, NSString, UICollectionView;

@interface AWEFansListViewController : AWERelationListViewController <UIScrollViewDelegate, AWEFansListViewControllerProtocol>

@property (weak, nonatomic) UICollectionView *collectionView;
@property (nonatomic) BOOL recordTTI;
@property (nonatomic) BOOL fetchUserListOnly;
@property (retain, nonatomic) AWEEmptyPageSectionController *emptySectionController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ didBlockUser;

+ (Class)aAWERelationDOUYINHTSAdapterClass;
+ (Class)aAWEVCDAuthorizeDOUYINHTSAdapterClass;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (void)listDidReloadDataWithCollectionView:(id)a0;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:(id)a0 forSectionViewModel:(id)a1;
- (void)addBinding;
- (id)aAWERelationDOUYINHTSAdapter;
- (id)aAWEVCDAuthorizeDOUYINHTSAdapter;
- (void)reloadEmptyHeight;
- (double)emptyViewHeight;
- (void)transferToHelpDesk;
- (void)vCDAuthorizedButtonTap;
- (void)__refreshAfterAuthorized;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)endRefreshing;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)setupCollectionView:(id)a0;

@end
