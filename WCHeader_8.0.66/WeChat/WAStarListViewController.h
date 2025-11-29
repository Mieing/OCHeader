@class MMUILabel, WAStarCollectionViewLayout, UICollectionView, NSString, UIView, WAMainFrameTaskBarDeleteActionWindow, WAStarListViewModel;

@interface WAStarListViewController : MMUIViewController <WCActionSheetDelegate, WAAppItemManagerExtension, WAStarListViewModelDelegate, WAContactMgrExtension, WAMainFrameTaskbarOperationViewControllerDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, WAStarCollectionViewLayoutDataSource, WAStarCollectinViewViewLayoutDelegate>

@property (retain, nonatomic) WAMainFrameTaskBarDeleteActionWindow *operationWindow;
@property (retain, nonatomic) WAStarListViewModel *viewModel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) WAStarCollectionViewLayout *layout;
@property (retain, nonatomic) UIView *tipsView;
@property (retain, nonatomic) MMUILabel *emptyLabel;
@property (nonatomic) BOOL isInEditMode;
@property (nonatomic) double collectionViewMargin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)createViewModel;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)showOperationWindow;
- (void)hideOperationWindow;
- (void)initOperationWindow;
- (void)initCustomUI;
- (void)initCollectionView;
- (void)updateViewAnimated:(BOOL)a0;
- (void)initTipsView;
- (void)initEmptyView;
- (void)configureCell:(id)a0;
- (unsigned long long)uiScene;
- (id)sceneNote:(long long)a0;
- (void)viewDidLayoutSubviews;
- (void)onReturn;
- (void)onComplete;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 dragViewForItemAtIndexPath:(id)a1;
- (struct CGPoint { double x0; double x1; })collectionView:(id)a0 dragViewFromPointForItemAtIndexPath:(id)a1;
- (struct CGPoint { double x0; double x1; })collectionView:(id)a0 dragViewToPointForItemAtIndexPath:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionViewDidTapBackgroundView:(id)a0;
- (BOOL)collectionView:(id)a0 canMoveItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 itemAtIndexPath:(id)a1 canMoveToIndexPath:(id)a2;
- (void)collectionView:(id)a0 itemAtIndexPath:(id)a1 willMoveToIndexPath:(id)a2;
- (void)collectionView:(id)a0 itemAtIndexPath:(id)a1 didMoveToIndexPath:(id)a2;
- (void)collectionView:(id)a0 layout:(id)a1 onLongPress:(id)a2 indexPath:(id)a3;
- (BOOL)collectionView:(id)a0 itemCenterIsInDeleteArea:(struct CGPoint { double x0; double x1; })a1;
- (long long)collectionView:(id)a0 itemDidMoveInDeleteAreaAtIndexPath:(id)a1 viewCenter:(struct CGPoint { double x0; double x1; })a2;
- (void)collectionView:(id)a0 itemDidMoveOutDeleteAreaAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 itemDidCommitToDeleteAtIdexPath:(id)a1;
- (BOOL)collectionView:(id)a0 itemDidCommitToStarAtIdexPath:(id)a1;
- (void)reloadData;
- (void)onModifyWeAppContact:(id)a0;
- (void).cxx_destruct;

@end
