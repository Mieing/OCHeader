@class WCFinderMJSetTabModel, NSString, WCFinderFeedFlowView, WCFinderMJSetViewController;

@interface WCFinderMJSetViewTabPageAdapter : NSObject <WCFinderFeedFlowViewDelegate, WCFinderFeedFlowViewDataSource, WCFinderFeedFlowViewLayoutDelegate, WCFinderMJSetTabModelDelegate, WCFinderFeedStaticCoverCollectionViewCellDataSource>

@property (retain, nonatomic) WCFinderMJSetTabModel *tabModel;
@property (weak, nonatomic) WCFinderFeedFlowView *feedFlowView;
@property (weak, nonatomic) WCFinderMJSetViewController *hostVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onTabModel:(id)a0 appendDataFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)onTabModelDataStateChanged:(id)a0;
- (long long)finderFeedFlowView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)finderFeedFlowView:(id)a0 contentVMAtIndexPath:(id)a1;
- (id)finderFeedFlowViewCurrentViewController:(id)a0;
- (unsigned long long)finderFeedFlowDataBeginRefreshTime:(id)a0;
- (BOOL)finderFeedFlowViewCanPrefetchData:(id)a0;
- (void)finderFeedFlowView:(id)a0 requestDataWithType:(unsigned long long)a1;
- (unsigned long long)finderFeedFlowViewState:(id)a0;
- (void)finderFeedFlowView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)browserFeedIndexPathForTid:(id)a0;
- (BOOL)finderFeedFlowView:(id)a0 isCustomCellAtIndexPath:(id)a1;
- (id)finderFeedFlowView:(id)a0 customCellAtIndexPath:(id)a1;
- (double)finderFeedFlowView:(id)a0 heightForCustomCellAtIndexPath:(id)a1 itemWidth:(double)a2;
- (unsigned long long)finderFeedFlowViewPrefetchRemainCount:(id)a0;
- (unsigned long long)finderFeedFlowView:(id)a0 columnCountAtSection:(unsigned long long)a1;
- (struct CGSize { double x0; double x1; })finderFeedFlowView:(id)a0 cellSpaceAtSection:(unsigned long long)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })finderFeedFlowView:(id)a0 edgeInsetsAtSection:(unsigned long long)a1;
- (id)finderFeedFlowView:(id)a0 leftTopBadgeContent:(id)a1;
- (id)onStaticCellLeftTopBadgeContent:(id)a0;
- (void).cxx_destruct;

@end
