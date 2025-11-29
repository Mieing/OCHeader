@class NSString, WCFinderLiveFeedGenericAutoPlayModel;
@protocol WCFinderLiveHomePageBannerSectionViewDelegate;

@interface WCFinderLiveHomePageBannerSectionView : WCFinderLiveHomePageBaseSectionView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WCFinderLiveHomePageBannerCellDelegate>

@property (retain, nonatomic) WCFinderLiveFeedGenericAutoPlayModel *autoPlayModel;
@property (weak, nonatomic) id<WCFinderLiveHomePageBannerSectionViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)viewHeightInWidth:(double)a0;

- (void)prepareForReuse;
- (void)updateWithVM:(id)a0;
- (void)autoPlayStop;
- (void)autoPlayStart;
- (id)generateCollectionView;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)onClickCoverContact:(id)a0 feedVM:(id)a1;
- (void)clickRecommendUrl:(id)a0;
- (void)onBaseLiveCellForwardAction:(id)a0;
- (void)onLiveCellClickFriendLikeReason:(id)a0;
- (void)onContainerSectionVMHomePageResetState;
- (void)onContainerSectionVMHomePageDeleteTid:(id)a0;
- (void).cxx_destruct;

@end
