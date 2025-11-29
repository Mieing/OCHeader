@class WCFinderLiveHomePageFooterView, NSString, WCFinderLiveHomePageFollowSectionViewModel;
@protocol WCFinderLiveHomePageFollowSectionViewDelegate;

@interface WCFinderLiveHomePageFollowSectionView : WCFinderLiveHomePageBaseSectionView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WCFinderLiveHomePageFooterViewActionDelegate>

@property (retain, nonatomic) WCFinderLiveHomePageFooterView *footerView;
@property (retain, nonatomic) WCFinderLiveHomePageFollowSectionViewModel *vm;
@property (weak, nonatomic) id<WCFinderLiveHomePageFollowSectionViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)viewHeight:(BOOL)a0 styleInfo:(id)a1;

- (void)layoutSubviews;
- (id)generateCollectionView;
- (void)updateWithVM:(id)a0;
- (void)prepareForReuse;
- (void)resetState;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 willDisplaySupplementaryView:(id)a1 forElementKind:(id)a2 atIndexPath:(id)a3;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)didClickFooterRefresh:(id)a0;
- (BOOL)isEnableFooterTrigerLoading:(id)a0;
- (void)onContainerSectionVMRefreshAllData:(id)a0;
- (void)onContainerSectionVMFetchNextPageData:(id)a0;
- (void)onContainerSectionVMNoMoreData;
- (void)onContainerSectionVMFetchFailWithErroCode:(long long)a0;
- (void)onContainerSectionVMHomePageResetState;
- (void).cxx_destruct;

@end
