@class NSDictionary, NSString, AWEFeedRefreshFooter, AWETeenPrivateWorkListDataController, AWEUILoadingView, UIView, UICollectionView;
@protocol AWEUserProfileTabVCDelegate;

@interface AWETeenPrivateWorkViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, AWEZoomTransitionOuterContextProvider, AWETeenPrivateWorkDeleteMessage, AWEUserProfileTabBaseMethod>

@property (retain, nonatomic) AWETeenPrivateWorkListDataController *dataController;
@property (retain, nonatomic) AWETeenPrivateWorkListDataController *dataControllerBackUp;
@property (retain, nonatomic) AWEFeedRefreshFooter *refreshFooter;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) UIView *emptyView;
@property (nonatomic) long long entranceIndex;
@property (nonatomic) struct CGPoint { double x; double y; } savedContentOffset;
@property (nonatomic) BOOL isFirstRequestSuccess;
@property (nonatomic) BOOL canExpoCardShow;
@property (nonatomic) BOOL isAppearing;
@property (nonatomic) struct CGSize { double width; double height; } transitionToSize;
@property (copy, nonatomic) NSString *userID;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) id<AWEUserProfileTabVCDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *zoomTransitionContext;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (double)contentOffsetY;
- (void)adjustContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (double)contentSizeHeight;
- (id)initWithUserID:(id)a0;
- (void)p_endRefreshing;
- (void)p_updateViewControllerState:(unsigned long long)a0;
- (void)p_loadMoreWorkData;
- (void)p_refreshWorkData:(BOOL)a0;
- (void)removeAllIfNeededWithUser:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0 referString:(id)a1;
- (void)didDeletePrivateWork:(id)a0;
- (void)didPublishPrivateSuccess:(id)a0 awemeModel:(id)a1;
- (void)p_setupUI;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void)reloadData;
- (void).cxx_destruct;
- (id)contentView;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)refreshData;
- (id)tabName;

@end
