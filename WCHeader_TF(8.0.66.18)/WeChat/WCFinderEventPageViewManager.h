@class NSString, MMUIViewController, WCFinderEventPageViewModel, WCFinderFeedFlowView;
@protocol WCFinderEventPageViewManagerDelegate, WCFinderFeedBaseViewControllerProtocol;

@interface WCFinderEventPageViewManager : NSObject <WCFinderFeedFlowViewDataSource, WCFinderFeedFlowViewDelegate, WCFinderEventPageViewModelDelegate, WCFinderFeedFlowViewLayoutDelegate>

@property (retain, nonatomic) WCFinderFeedFlowView *feedFlowView;
@property (retain, nonatomic) WCFinderEventPageViewModel *viewModel;
@property (weak, nonatomic) MMUIViewController<WCFinderFeedBaseViewControllerProtocol> *currentViewController;
@property (weak, nonatomic) id<WCFinderEventPageViewManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTopicParams:(id)a0 eventTabInfo:(id)a1 filterIndex:(unsigned long long)a2 view:(id)a3 InViewController:(id)a4 byPassInfo:(id)a5;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (long long)finderFeedFlowView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)finderFeedFlowView:(id)a0 contentVMAtIndexPath:(id)a1;
- (id)finderFeedFlowView:(id)a0 cellConfigAtIndexPath:(id)a1;
- (id)finderFeedFlowViewCurrentViewController:(id)a0;
- (void)finderFeedFlowView:(id)a0 requestDataWithType:(unsigned long long)a1;
- (unsigned long long)finderFeedFlowViewState:(id)a0;
- (void)finderFeedFlowView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)finderFeedFlowView:(id)a0 reportParametersAtIndexPath:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })finderFeedFlowView:(id)a0 edgeInsetsAtSection:(unsigned long long)a1;
- (void)finderEventFeedOrderChanged;
- (void)finderEventFakeInsertFeed;
- (void)finderEventReceiveFirstPageWithPrefetched:(BOOL)a0;
- (void)finderEventReloadAllData;
- (void)finderEventAppendDataFrom:(long long)a0 toIndex:(long long)a1;
- (void)finderEventNoMoreData;
- (void)finderEventInvalidWithErrorCode:(int)a0;
- (void).cxx_destruct;

@end
