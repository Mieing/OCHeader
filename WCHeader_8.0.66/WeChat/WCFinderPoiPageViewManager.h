@class WCFinderPoiPageViewModel, WCFinderNoMoreView, MMUIViewController, NSString, WCFinderFeedFlowView, NSIndexPath;
@protocol WCFinderFeedBaseViewControllerProtocol;

@interface WCFinderPoiPageViewManager : NSObject <WCFinderFeedFlowViewDataSource, WCFinderFeedFlowViewDelegate, WCFinderFeedFlowViewLayoutDelegate, WCFinderFeedFlowViewMonitorDelegate, WCFinderPoiPageViewModelDelegate, WCFinderNearbyFlowViewControllerDelegate, WCFinderFeedDetailViewControllerDelegate, ServiceAuthExt>

@property (retain, nonatomic) WCFinderFeedFlowView *feedFlowView;
@property (retain, nonatomic) WCFinderPoiPageViewModel *viewModel;
@property (weak, nonatomic) MMUIViewController<WCFinderFeedBaseViewControllerProtocol> *currentViewController;
@property (retain, nonatomic) NSIndexPath *serviceAuthBlockedIndexPath;
@property (retain, nonatomic) WCFinderNoMoreView *tipsView;
@property (nonatomic) struct CGPoint { double x; double y; } targetContentOffset;
@property (nonatomic) BOOL enableZoomAnimator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPoiParams:(id)a0 tabInfo:(id)a1 tabIndex:(unsigned long long)a2 filterIndex:(unsigned long long)a3 DataArray:(id)a4 lastBuffer:(id)a5 continueFlag:(BOOL)a6 view:(id)a7 InViewController:(id)a8 nearbyFlag:(BOOL)a9 nearbyInfo:(id)a10 prefetchCount:(unsigned long long)a11;
- (id)contentVMAtIndex:(unsigned long long)a0;
- (long long)finderFeedFlowView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)finderFeedFlowView:(id)a0 contentVMAtIndexPath:(id)a1;
- (long long)numberOfSectionsInFinderFeedFlowView:(id)a0;
- (BOOL)finderFeedFlowView:(id)a0 isCustomSupplementaryViewOfKind:(id)a1 atSection:(long long)a2;
- (double)finderFeedFlowView:(id)a0 heightForCustomSupplementaryViewOfKind:(id)a1 atSection:(long long)a2;
- (id)finderFeedFlowView:(id)a0 cellConfigAtIndexPath:(id)a1;
- (id)finderFeedFlowView:(id)a0 indexPathOfTid:(id)a1;
- (id)finderFeedFlowViewCurrentViewController:(id)a0;
- (void)finderFeedFlowView:(id)a0 requestDataWithType:(unsigned long long)a1;
- (unsigned long long)finderFeedFlowViewState:(id)a0;
- (void)finderFeedFlowView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)didClickFeedItemWithIndexPath:(id)a0 feedFlowView:(id)a1;
- (void)finderFeedFlowViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (id)finderFeedFlowView:(id)a0 reportParametersAtIndexPath:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })finderFeedFlowView:(id)a0 edgeInsetsAtSection:(unsigned long long)a1;
- (struct CGSize { double x0; double x1; })finderFeedFlowView:(id)a0 cellSpaceAtSection:(unsigned long long)a1;
- (void)monitorView:(id)a0 newExposedItems:(id)a1 lastExposedItems:(id)a2;
- (void)finderPoiReloadAllData:(id)a0;
- (void)finderPoiAppendDataFrom:(long long)a0 toIndex:(long long)a1 viewModel:(id)a2;
- (void)finderPoiNoMoreData:(id)a0;
- (void)finderPoiInvalidWithErrorCode:(int)a0 viewModel:(id)a1;
- (unsigned long long)finderFeedFlowDataBeginRefreshTime:(id)a0;
- (id)streamReportUDFKV:(id)a0;
- (int)getEnterScene;
- (id)getLiveFeedChannelExtraWithContentVM:(id)a0;
- (void)onOpenService:(unsigned long long)a0 config:(id)a1 error:(id)a2;
- (void).cxx_destruct;

@end
