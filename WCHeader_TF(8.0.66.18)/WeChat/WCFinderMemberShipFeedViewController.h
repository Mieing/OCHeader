@class WCFinderMemberShipFeedTabViewModel, NSString, WCFinderProfileCollectionListLayout;

@interface WCFinderMemberShipFeedViewController : MMUIViewController <WCFinderFeedFlowViewDelegate, WCFinderFeedFlowViewDataSource, WCFinderFeedFlowViewLayoutDelegate, WCFinderMemberShipFeedTabViewModelDelegate, WCFinderProfileFeedPageHeaderContainerViewDelegate>

@property (retain, nonatomic) WCFinderProfileCollectionListLayout *collectionListLayout;
@property (retain, nonatomic) WCFinderMemberShipFeedTabViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)feedFlowView;
- (void)loadView;
- (void)updateCollectionListLayout;
- (BOOL)finderFeedFlowView:(id)a0 isCustomSupplementaryViewOfKind:(id)a1 atSection:(long long)a2;
- (double)finderFeedFlowView:(id)a0 heightForCustomSupplementaryViewOfKind:(id)a1 atSection:(long long)a2;
- (id)finderFeedFlowView:(id)a0 customSupplementaryViewOfKind:(id)a1 atIndexPath:(id)a2;
- (long long)finderFeedFlowView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)finderFeedFlowView:(id)a0 contentVMAtIndexPath:(id)a1;
- (id)finderFeedFlowView:(id)a0 cellConfigAtIndexPath:(id)a1;
- (unsigned long long)finderFeedFlowDataBeginRefreshTime:(id)a0;
- (BOOL)finderFeedFlowViewCanPrefetchData:(id)a0;
- (void)finderFeedFlowView:(id)a0 requestDataWithType:(unsigned long long)a1;
- (unsigned long long)finderFeedFlowViewState:(id)a0;
- (id)finderFeedFlowView:(id)a0 tipsType:(unsigned long long)a1 inState:(unsigned long long)a2;
- (void)finderFeedFlowView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })finderFeedFlowView:(id)a0 edgeInsetForCustomSupplementaryViewOfKind:(id)a1 atSection:(long long)a2;
- (void)finderMemberShipZoneFeedTabViewNoMoreData;
- (void)finderMemberShipZoneFeedTabViewFetchListSuc;
- (void)finderMemberShipZoneFeedTabViewFetchListFail;
- (void)finderMemberShipZoneFeedTabViewDeleteDataItemVM;
- (void)finderMemberShipZoneFeedTabViewChangeStickyTopTo:(BOOL)a0 contentVM:(id)a1 success:(BOOL)a2 errorInfo:(id)a3;
- (void)headerContainer:(id)a0 clickedCollectionItemWithInfo:(id)a1;
- (void)headerContainerClickedCollectionMoreButton:(id)a0;
- (void).cxx_destruct;

@end
