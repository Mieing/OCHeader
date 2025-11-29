@class AWELiveWorkDataController, NSString, UICollectionView, AWEFeedRefreshFooter, AWEUILoadingView, AWEUserModel;
@protocol AWEUserProfileTabVCDelegate;

@interface AWELiveWorkViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UIScrollViewDelegate, UICollectionViewDelegateFlowLayout, AWEUserProfileTabBaseMethod>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUserID;
@property (retain, nonatomic) AWEUserModel *targetUser;
@property (retain, nonatomic) AWELiveWorkDataController *dataController;
@property (retain, nonatomic) AWEFeedRefreshFooter *footer;
@property (nonatomic) BOOL isCurrentUser;
@property (nonatomic) BOOL isFromUserHomePage;
@property (weak, nonatomic) id<AWEUserProfileTabVCDelegate> delegate;
@property (nonatomic) BOOL isInTabContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (double)contentOffsetY;
- (void)adjustContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (double)contentSizeHeight;
- (void)loadMoreData;
- (void)registerCollectionViewCell;
- (id)initWithUserID:(id)a0 secUserID:(id)a1 targetUser:(id)a2 delegate:(id)a3;
- (void)onCellDeleteNotification:(id)a0;
- (void)updateLoadingViewFrame;
- (double)cellHeight:(id)a0;
- (void)trackPlayBackEventWithData:(id)a0;
- (void)trackLiveShowEventWithData:(id)a0;
- (void)endRefreshingWithData:(id)a0 error:(id)a1;
- (void)refreshDataIfNeed;
- (void)reloadData;
- (void).cxx_destruct;
- (id)contentView;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (double)cellWidth;
- (void)setupUI;
- (void)refreshData;

@end
