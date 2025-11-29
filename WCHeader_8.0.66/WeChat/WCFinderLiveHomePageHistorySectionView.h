@class WCFinderLiveHomePageFooterView, NSString;
@protocol WCFinderLiveHomePageHistorySectionViewDelegate;

@interface WCFinderLiveHomePageHistorySectionView : WCFinderLiveHomePageBaseSectionView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WCFinderLiveHomePageFooterViewActionDelegate, WCFinderLiveHomePageHistoryCellDelegate>

@property (retain, nonatomic) WCFinderLiveHomePageFooterView *footerView;
@property (weak, nonatomic) id<WCFinderLiveHomePageHistorySectionViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)viewHeightInWidth:(double)a0 styleInfo:(id)a1;

- (void)layoutSubviews;
- (id)generateCollectionView;
- (void)prepareForReuse;
- (void)resetState;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void)collectionView:(id)a0 willDisplaySupplementaryView:(id)a1 forElementKind:(id)a2 atIndexPath:(id)a3;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)didClickFooterRefresh:(id)a0;
- (BOOL)isEnableFooterTrigerLoading:(id)a0;
- (void)onContainerSectionVMRefreshAllData:(id)a0;
- (void)onContainerSectionVMFetchNextPageData:(id)a0;
- (void)onContainerSectionVMNoMoreData;
- (void)onContainerSectionVMFetchFailWithErroCode:(long long)a0;
- (void)onContainerSectionVMHomePageResetState;
- (void)onContainerSectionVMHomePageDeleteTid:(id)a0;
- (void)onHistoryCellLongPress:(id)a0;
- (void)onMenuDelete:(id)a0;
- (void).cxx_destruct;

@end
