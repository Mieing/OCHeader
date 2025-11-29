@class NSString, WCFinderStreamFooterView, UICollectionView, UILabel, UITapGestureRecognizer;

@interface WCFinderProfileStickerTabPage : WCFinderStreamProfileViewPage <WCFinderProfileStickerTabPageModelDelegate, WCFinderStreamLayoutDelegate, WCFinderStreamFooterViewActionDelegate, UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UILabel *statusTips;
@property (retain, nonatomic) WCFinderStreamFooterView *loadmoreFooterView;
@property (retain, nonatomic) WCFinderStreamFooterView *noMoreFooterView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) unsigned long long emotionFetchStatus;
@property (nonatomic) unsigned long long emojiCellLineCount;
@property (nonatomic) double emojiCellMargin;
@property (retain, nonatomic) UITapGestureRecognizer *storePackViewMoreGesture;
@property (nonatomic) BOOL didScrollToSingleEmoji;
@property (retain, nonatomic) NSString *sdkRequestID;
@property (nonatomic) unsigned long long enterTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)loadView;
- (void)pageSizeDidChanged;
- (void)viewDidLoad;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (unsigned long long)collectionView:(id)a0 layout:(id)a1 columnCountAtSection:(unsigned long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 cellSpaceAtSection:(unsigned long long)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 cellEdgeInsetAtSection:(unsigned long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 cellHeightAtIndexPath:(id)a2 withWidth:(double)a3;
- (double)collectionView:(id)a0 layout:(id)a1 headerHeightAtSection:(unsigned long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 footerHeightAtSection:(unsigned long long)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 headerEdgeInsetAtSection:(unsigned long long)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 footerEdgeInsetAtSection:(unsigned long long)a2;
- (void)genEmojiCellWidth;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)configHeaderViewFor:(id)a0 withTitle:(id)a1;
- (BOOL)isStorePackFlattened;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)emotionTabPageModelFirstPageDataLoadFinish:(BOOL)a0;
- (void)emotionTabPageModelFetchDoneForType:(unsigned long long)a0 andHasMore:(BOOL)a1;
- (void)emotionTabPageModelFetchFailedForType:(unsigned long long)a0;
- (void)emotionTabPageModelGotDataChangeAndNeedReload;
- (void)updateStatusTips:(BOOL)a0 tips:(id)a1;
- (void)onTapRetry;
- (id)getNavController;
- (id)getViewController;
- (id)sdkPageName;
- (unsigned long long)sdkPageID;
- (int)enterHasRedDot;
- (unsigned long long)emoticonEnterScene;
- (unsigned long long)cellTypeForSection:(unsigned long long)a0;
- (void)onTapGesture:(id)a0;
- (void)scrollToSingleEmojiIfNeeded;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)updateLoadMoreFooterViewStatus;
- (void)didClickStreamFooterRefresh:(id)a0;
- (BOOL)isEnableStreamFooterTrigerLoading:(id)a0;
- (id)reportParams;
- (void).cxx_destruct;

@end
