@class UIView, NSString, IESLLPOIVideoMuteView, UIImageView, IESLLPOIHeaderContentTabView, UICollectionView, IESLLPOIHeaderContentComponentViewModel, IESLLPOIHeaderContentCrushRankView;

@interface IESLLPOIHeaderContentComponentView : IESLLPOIDetailHeaderImageComponentBaseView <UICollectionViewDataSource, UICollectionViewDelegate, IESLLPOIVideoPlayerDelegate>

@property (weak, nonatomic) IESLLPOIHeaderContentComponentViewModel *viewModel;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UICollectionView *mediaListView;
@property (retain, nonatomic) UIImageView *loadMoreImageView;
@property (retain, nonatomic) IESLLPOIHeaderContentTabView *tabListView;
@property (retain, nonatomic) IESLLPOIVideoMuteView *muteView;
@property (retain, nonatomic) IESLLPOIHeaderContentCrushRankView *crushRankView;
@property (nonatomic) BOOL isMaxUnfold;
@property (nonatomic) long long currentIndex;
@property (nonatomic) long long stableIndex;
@property (nonatomic) BOOL contentVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)currentTabName;
- (void)updateViewModel:(id)a0;
- (void)pageDidScroll:(double)a0;
- (id)currentTabID;
- (long long)tagListWidth;
- (void)updateComponentViewAlpha:(double)a0;
- (BOOL)isCurrentTabVideo;
- (void)updateContentVisible;
- (void)openContentPageByMethod:(id)a0 needAnchor:(BOOL)a1;
- (void)adjustErrorCell:(BOOL)a0;
- (void)poiHeaderContentLoadMore:(id)a0;
- (void)changeTabListBySlideMedia;
- (void)handleTabViewClicked:(id)a0;
- (void)changeTabListByLynxSlide:(id)a0 innerIndex:(long long)a1 action:(id)a2;
- (void)changeImageTopOffset:(double)a0;
- (void)enableMediaCellPrefetch;
- (void)performCrushZoom;
- (void)animationToOffset:(double)a0 isMaxUnfold:(BOOL)a1 duration:(double)a2;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)itemCount;
- (void)scrollViewWillBeginDecelerating:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)setupUI;
- (void)resetContent;

@end
