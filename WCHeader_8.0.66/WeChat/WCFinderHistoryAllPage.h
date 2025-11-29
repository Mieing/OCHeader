@class WCFinderFeedFlowView, WCFinderFeedFlowViewAdapter, NSString;

@interface WCFinderHistoryAllPage : WCFinderHistoryPageBase <WCFinderFeedFlowViewAdapterDeleagte, WCFinderFeedFlowAdapterFeedVisitor>

@property (retain, nonatomic) WCFinderFeedFlowViewAdapter *flowViewAdapter;
@property (retain, nonatomic) WCFinderFeedFlowView *feedFlowView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)viewModel;
- (void)didMoveToSuperview;
- (void)setupFlowView;
- (void)onNoMoreTipsChange;
- (struct WCFinderFeedFlowViewCellMenuComponment { id /* block */ x0; })_createMenuComp;
- (BOOL)finderFeedFlowViewCanPrefetchData:(id)a0;
- (BOOL)feedFlowViewAdapter:(id)a0 isCustomCell:(id)a1;
- (double)feedFlowViewAdapter:(id)a0 heightForCustomCell:(id)a1 itemWidth:(double)a2;
- (id)feedFlowViewAdapter:(id)a0 collectionView:(id)a1 indexPath:(id)a2 customCellForFeed:(id)a3;
- (BOOL)onFeedFlowViewOpenFeed:(id)a0 fromVC:(id)a1 index:(id)a2 listVCScene:(int)a3;
- (void).cxx_destruct;

@end
