@class AWETeenFoldingLabel, NSString, UIImageView, UIButton, AWEUILoadingView, AWETeenAlbumResourceProfileDataController, UICollectionView, AWEFeedRefreshFooter, UILabel, NSMutableDictionary;

@interface AWETeenAlbumDetailViewController : UIViewController <AWETeenWaterfallCollectionViewLayoutDelegate, UICollectionViewDelegate, UICollectionViewDataSource, AWETeenAlbumMessage>

@property (retain, nonatomic) AWETeenAlbumResourceProfileDataController *dataController;
@property (nonatomic) long long vcType;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWETeenFoldingLabel *introductionLabel;
@property (retain, nonatomic) UIImageView *coverView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIButton *returnButton;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) AWEFeedRefreshFooter *refreshFooter;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } waterFallEdgeInsets;
@property (nonatomic) double titleOffsetY;
@property (nonatomic) double coverOffsetY;
@property (nonatomic) BOOL isFirstAppear;
@property (copy, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) NSMutableDictionary *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)schema;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (id)aweui_emptyPageBelowView;
- (long long)collectionView:(id)a0 layout:(id)a1 columnCountForSection:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumColumnSpacingForSectionAtIndex:(long long)a2;
- (void)p_handleConnectionChanged:(id)a0;
- (void)p_backAction;
- (void)p_initFetch;
- (void)updateWatchedAlbumModel:(id)a0;
- (void)p_initAddSubview;
- (void)p_loadMoreIsPreload:(BOOL)a0;
- (void)p_endFooterRefreshing;
- (void)p_updateOffsetAndAlpha;
- (void)p_addContentSubview;
- (void)p_preloadMoreIfNeeded;
- (id)initWithResourceID:(id)a0 extra:(id)a1;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)preferredStatusBarStyle;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)dealloc;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;

@end
