@class NSString, ACCAIGCWaterfallCollectionView, UILabel, NSMutableArray;
@protocol ACCAIGCWaterfallContentProviderProtocol, ACCAIGCWaterfallContentScrollDelegate;

@interface ACCAIGCWaterfallViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, ACCNewCollectionDelegateWaterfallLayout, ACCAIGCWaterfallVCProtocol>

@property (retain, nonatomic) ACCAIGCWaterfallCollectionView *collectionView;
@property (retain, nonatomic) UILabel *noMoreLabel;
@property (nonatomic) BOOL isFetchingData;
@property (nonatomic) BOOL firstLoadFlag;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSMutableArray *displayFilterIndexPaths;
@property (retain, nonatomic) id<ACCAIGCWaterfallContentProviderProtocol> contentProvider;
@property (weak, nonatomic) id<ACCAIGCWaterfallContentScrollDelegate> delegate;
@property (copy, nonatomic) id /* block */ updateContentOffsetBlock;
@property (nonatomic) unsigned long long currentColumnIndex;
@property (nonatomic) BOOL toUsePreloadDataFlag;
@property (nonatomic) BOOL customEmpteState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)collectionView:(id)a0 layout:(id)a1 heightForHeaderInSection:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 heightForFooterInSection:(long long)a2;
- (id)accui_emptyPageConfigForState:(unsigned long long)a0;
- (void)accui_emptyPagePrimaryButtonTapped:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })accui_emptyPageEdgeInsets;
- (void)p_addCollectionView;
- (void)updateLoraInfo;
- (void)p_bindService;
- (id)transitionCollectionCellForItemOffset:(long long)a0;
- (void)refreshLoraAIContent;
- (void)p_fetchContentData:(BOOL)a0;
- (void)doRealDeleteLoraModel;
- (void)afterDeleteUpdateUI;
- (void)p_loadMoreContentData;
- (void)p_updateEmpteStateWithError:(id)a0 andContentCount:(unsigned long long)a1;
- (void)p_trackFilterReload:(id /* block */)a0;
- (void)diffReloadContent;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)didReceiveMemoryWarning;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)viewDidLayoutSubviews;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)reloadContent;
- (void)refreshContent;

@end
