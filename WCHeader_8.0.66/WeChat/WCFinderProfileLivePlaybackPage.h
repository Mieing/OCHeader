@class NSMutableDictionary, WCFinderStreamFooterView, WCFinderExtStatsReporter, UICollectionViewDiffableDataSource, NSString;

@interface WCFinderProfileLivePlaybackPage : WCFinderStreamProfileViewPage <UICollectionViewDelegate, UICollectionViewDataSource, WCFinderStreamLayoutDelegate, WCFinderProfileLivePlaybackViewModelDelegate, WCFinderStreamFooterViewActionDelegate, WCFinderStreamLoadingStateDelegate>

@property (weak, nonatomic) WCFinderStreamFooterView *footerView;
@property (nonatomic) long long contentSection;
@property (retain, nonatomic) WCFinderExtStatsReporter *extStatReporter;
@property (retain, nonatomic) NSMutableDictionary *exposedTimeMap;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)checkPurchaseUserCount:(id)a0;
+ (void)registerDisplayCellForCollectionView:(id)a0;
+ (id)collectionView:(id)a0 displayCellForContentVM:(id)a1 atIndexPath:(id)a2 showProgressBar:(BOOL)a3 hiddenSticker:(BOOL)a4;
+ (id)onLiveCollectionView:(id)a0 cellForItemAtIndexPath:(id)a1 item:(id)a2;
+ (id)onFeedCollectionView:(id)a0 cellForItemAtIndexPath:(id)a1 isAuthor:(BOOL)a2 contentVM:(id)a3 showProgressBar:(BOOL)a4 hiddenSticker:(BOOL)a5;
+ (BOOL)isValidFeedContentVM:(id)a0;
+ (BOOL)isValidLiveContentVM:(id)a0;

- (id)loadView;
- (void)registerStreamCellForCollection:(id)a0;
- (void)viewDidLoad;
- (void)viewDidDisappear;
- (id)getSortedExposingFeeds;
- (void)onFeedArrayChanged:(id)a0;
- (id)createSnapshot:(id)a0;
- (void)onLivePlaybackViewModelDataFetchError;
- (void)onLivePlaybackViewModelDataFetchRefresh;
- (void)updateFooterState;
- (void)onLoadingStateChanged:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (BOOL)isSelfPostFeed:(id)a0;
- (id)browserFeedIndexPathForTid:(id)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)createContentVMFromDataItems:(id)a0;
- (int)getCurrentCommentScene;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (double)collectionView:(id)a0 layout:(id)a1 decorationHeightAtSection:(unsigned long long)a2;
- (unsigned long long)collectionView:(id)a0 layout:(id)a1 columnCountAtSection:(unsigned long long)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 cellEdgeInsetAtSection:(unsigned long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 cellSpaceAtSection:(unsigned long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 cellHeightAtIndexPath:(id)a2 withWidth:(double)a3;
- (double)collectionView:(id)a0 layout:(id)a1 headerHeightAtSection:(unsigned long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 footerHeightAtSection:(unsigned long long)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 headerEdgeInsetAtSection:(unsigned long long)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)didClickStreamFooterRefresh:(id)a0;
- (BOOL)isEnableStreamFooterTrigerLoading:(id)a0;
- (void)exposeItemViewDisappear;
- (id)reportUdfKVForItem;
- (void)reportFeedStreamClickSelectedIndexPath:(id)a0;
- (void).cxx_destruct;

@end
