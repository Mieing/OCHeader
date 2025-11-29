@class NSString, MMUIViewController, WCFinderFeedFlowView, WCFinderTopicPageViewModel;
@protocol WCFinderTopicPageViewManagerDelegate, WCFinderFeedBaseViewControllerProtocol;

@interface WCFinderTopicPageViewManager : NSObject <WCFinderFeedFlowViewDataSource, WCFinderFeedFlowViewDelegate, WCFinderFeedFlowViewLayoutDelegate, WCFinderFeedFlowViewMonitorDelegate, WCFinderTopicPageViewModelDelegate>

@property (retain, nonatomic) WCFinderFeedFlowView *feedFlowView;
@property (retain, nonatomic) WCFinderTopicPageViewModel *viewModel;
@property (weak, nonatomic) MMUIViewController<WCFinderFeedBaseViewControllerProtocol> *currentViewController;
@property (weak, nonatomic) id<WCFinderTopicPageViewManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTopicParams:(id)a0 eventTabInfo:(id)a1 filterIndex:(unsigned long long)a2 view:(id)a3 InViewController:(id)a4;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (id)contentVMAtIndex:(unsigned long long)a0;
- (long long)finderFeedFlowView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)finderFeedFlowView:(id)a0 contentVMAtIndexPath:(id)a1;
- (id)finderFeedFlowViewCurrentViewController:(id)a0;
- (void)finderFeedFlowView:(id)a0 requestDataWithType:(unsigned long long)a1;
- (unsigned long long)finderFeedFlowViewState:(id)a0;
- (void)finderFeedFlowView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)finderFeedFlowView:(id)a0 reportParametersAtIndexPath:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })finderFeedFlowView:(id)a0 edgeInsetsAtSection:(unsigned long long)a1;
- (struct CGSize { double x0; double x1; })finderFeedFlowView:(id)a0 cellSpaceAtSection:(unsigned long long)a1;
- (void)monitorView:(id)a0 newExposedItems:(id)a1 lastExposedItems:(id)a2;
- (void)finderTopicReloadAllDataWithPrefetched:(BOOL)a0;
- (void)finderTopicAppendDataFrom:(long long)a0 toIndex:(long long)a1;
- (void)finderTopicNoMoreData;
- (void)finderTopicInvalidWithErrorCode:(int)a0;
- (void)finderTopicGetReviseFeedCount:(unsigned int)a0;
- (void)reportFeedStreamClickWithFeedFlowView:(id)a0 selectedIndexPath:(id)a1;
- (id)genFeedReportInfoWithEventCode:(long long)a0 tid:(id)a1;
- (void)reportClickActionInfo:(id)a0;
- (void).cxx_destruct;

@end
