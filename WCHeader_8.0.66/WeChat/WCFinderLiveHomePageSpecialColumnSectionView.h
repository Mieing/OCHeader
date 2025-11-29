@class NSString, WCFinderLiveHomePageRecommendGuideFooterView, WCFinderLiveHomePageFooterView, WCFinderLiveFeedGenericAutoPlayModel;
@protocol WCFinderLiveHomePageSpecialColumnSectionViewDelegate;

@interface WCFinderLiveHomePageSpecialColumnSectionView : WCFinderLiveHomePageBaseSectionView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WCFinderLiveHomePageSpecialColumnCellDelegate, WCFinderLiveHomePageRelatedLiveCellDelegate, WCFinderLiveHomePageNoticeCellDelegate, WCFinderLiveHomePageRecommendGuideFooterViewDelegate, WCFinderLiveHomePageFooterViewActionDelegate>

@property (retain, nonatomic) WCFinderLiveFeedGenericAutoPlayModel *autoPlayModel;
@property (nonatomic) double beginTouchPosX;
@property (retain, nonatomic) WCFinderLiveHomePageRecommendGuideFooterView *recommendGuideView;
@property (retain, nonatomic) WCFinderLiveHomePageFooterView *footerView;
@property (weak, nonatomic) id<WCFinderLiveHomePageSpecialColumnSectionViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)viewHeightInWidth:(double)a0 styleInfo:(id)a1;
+ (double)defaultCellWidth:(double)a0;

- (void)layoutSubviews;
- (void)layoutSubViews_onFrameChanged;
- (void)prepareForReuse;
- (void)updateWithVM:(id)a0;
- (void)checkAddJumper;
- (void)dealloc;
- (void)resetState;
- (void)reloadData;
- (void)autoPlayStop;
- (void)autoPlayStart;
- (void)_startPlayWithIndexPath:(id)a0;
- (void)_stopWithIndexPath:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)handlePan:(id)a0;
- (BOOL)isJumperShowing;
- (void)checkAdjustOffset;
- (void)hideJumper:(BOOL)a0;
- (id)generateCollectionView;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)bindYReportSdk:(id)a0 andViewId:(id)a1 feedVM:(id)a2 withContainerId:(unsigned long long)a3 indexPath:(id)a4;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void)collectionView:(id)a0 willDisplaySupplementaryView:(id)a1 forElementKind:(id)a2 atIndexPath:(id)a3;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)onClickCoverContact:(id)a0 feedVM:(id)a1;
- (void)clickRecommendUrl:(id)a0;
- (void)onRelatedLiveCellForwardAction:(id)a0;
- (void)onBaseLiveCellForwardAction:(id)a0;
- (void)onLiveCellClickFriendLikeReason:(id)a0;
- (void)onRecommendGuideClickAction:(id)a0;
- (void)didClickFooterRefresh:(id)a0;
- (BOOL)isEnableFooterTrigerLoading:(id)a0;
- (void)onContainerSectionVMRefreshAllData:(id)a0;
- (void)onContainerSectionVMFetchNextPageData:(id)a0;
- (void)onContainerSectionVMNoMoreData;
- (void)onContainerSectionVMFetchFailWithErroCode:(long long)a0;
- (void)onContainerSectionVMHomePageResetState;
- (void)onContainerSectionVMHomePageDeleteTid:(id)a0;
- (void)onHomePageNoticeAction:(BOOL)a0 feedVM:(id)a1;
- (void)onShowConcertTicketAction:(id)a0;
- (void).cxx_destruct;

@end
