@class NSString, TTCollectionView, UICollectionViewFlowLayout, NSMutableDictionary, NSMutableArray, WCStoryFloatTopBar, WCStoryCollectionFooterView, MMUILabel;

@interface WCStoryHistoryViewController : MMUIViewController <WCStoryFacadeExt, UIScrollViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource, WCStoryCollectionFooterViewDelegate>

@property (retain, nonatomic) TTCollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout;
@property (retain, nonatomic) WCStoryFloatTopBar *floatTopBar;
@property (retain, nonatomic) WCStoryCollectionFooterView *footerView;
@property (copy, nonatomic) NSString *username;
@property (nonatomic) unsigned long long currentDataID;
@property (nonatomic) BOOL isFetchingData;
@property (nonatomic) BOOL hasNoMoreLocalData;
@property (nonatomic) BOOL hasNoMoreServerData;
@property (retain, nonatomic) NSMutableArray *timeTable;
@property (retain, nonatomic) NSMutableDictionary *historyMediaData;
@property (retain, nonatomic) NSMutableArray *dateKeyTable;
@property (retain, nonatomic) MMUILabel *noDataLabel;
@property (retain, nonatomic) NSMutableDictionary *showYearCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUsername:(id)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setUpUI;
- (void)changeContentInsetAdjustmentBehavior;
- (void)setupData;
- (void)fetchMoreData;
- (id)getHistoryDataFromDB;
- (void)getHistoryDataFromServer;
- (void)handleNewDataItems:(id)a0;
- (void)changeFooterViewState;
- (BOOL)shouleShowYearLabelAtSection:(unsigned long long)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)MMRefreshCollectionFooterDidTriggerRefresh:(id)a0;
- (void)onDeleteStoryWithStory:(id)a0 PageIndexObj:(id)a1;
- (void).cxx_destruct;

@end
