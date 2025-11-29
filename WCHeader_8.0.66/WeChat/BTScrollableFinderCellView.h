@class BTRecommendFinderHeaderView, UICollectionView, NSHashTable, NSArray, BTScrollableFinderCellViewModel, NSString;
@protocol BTScrollableFinderCellViewDelegate;

@interface BTScrollableFinderCellView : BTBaseRecommendAppMsgCellView <UIScrollViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, BTScrollableFinderCellViewModelDelegate, BTFinderLiveFlowStyleItemCellDelegate>

@property (retain, nonatomic) BTRecommendFinderHeaderView *headerView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSHashTable *playingCells;
@property (weak, nonatomic) id<BTScrollableFinderCellViewDelegate> finderCellViewDelegate;
@property (readonly, nonatomic) BTScrollableFinderCellViewModel *viewModel;
@property (readonly, nonatomic) NSArray *indexesOfVisibleItem;
@property (readonly, nonatomic) NSArray *indexesOfValidShowItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)headerViewHeight;

- (void)initSubviews;
- (void)setViewModel:(id)a0;
- (void)onUpdateViewModel;
- (void)checkAutoPlay;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertFinderItemCellFrameWithIndex:(long long)a0 toView:(id)a1;
- (void)setFinderItemCellWithIndex:(long long)a0 bHighlight:(BOOL)a1;
- (void)layoutSubviews;
- (id)finderItemCellWithIndex:(long long)a0;
- (void)didHideFinderItemViewWithIndexArr:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)indexForFinderTid:(id)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)onDidReceiveFinderInterestData;
- (void)onDidDeleteFinderInterestData;
- (void)checkIfCardExposed;
- (void)onDisappear;
- (void)checkAutoPlayLiveCard;
- (void)stopAllAutoPlayCell;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)report21053WithAction:(long long)a0 viewModel:(id)a1 index:(long long)a2 actionTS:(unsigned long long)a3 extraDic:(id)a4;
- (void)onFinderLivePlayStateChange:(id)a0 state:(unsigned long long)a1;
- (void)updateLiveCardCellExposeStart:(id)a0 index:(long long)a1;
- (void)updateLiveCardCellExposeEnd:(id)a0 index:(long long)a1;
- (void)reportValidRatioExposeStart:(id)a0 index:(long long)a1;
- (void)reportValidRatioExposeEnd:(id)a0 index:(long long)a1;
- (void).cxx_destruct;

@end
