@class WCFinderFeedFlowView, WCFinderHotWordsFeedViewModel, NSString;

@interface WCFinderHotWordsFeedFlowViewController : MMUIViewController <WCFinderFeedFlowViewDataSource, WCFinderFeedFlowViewDelegate, WCFinderHotWordsFeedViewModelDelegate, WCFinderFeedBaseViewControllerProtocol>

@property (retain, nonatomic) WCFinderHotWordsFeedViewModel *viewModel;
@property (retain, nonatomic) WCFinderFeedFlowView *feedFlowView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTriggerInfo:(id)a0 streamScene:(int)a1;
- (void)viewDidLoad;
- (void)setupFeedFlowView;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)linkTopicVM:(id)a0 fetchDataFinishWithAppendDataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)linkTopicVMStateChanged:(id)a0;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (long long)finderFeedFlowView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)finderFeedFlowView:(id)a0 contentVMAtIndexPath:(id)a1;
- (id)finderFeedFlowViewCurrentViewController:(id)a0;
- (unsigned long long)finderFeedFlowDataBeginRefreshTime:(id)a0;
- (BOOL)finderFeedFlowViewCanPrefetchData:(id)a0;
- (void)finderFeedFlowView:(id)a0 requestDataWithType:(unsigned long long)a1;
- (unsigned long long)finderFeedFlowViewState:(id)a0;
- (void)finderFeedFlowViewDidScroll:(id)a0;
- (void)finderFeedFlowView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
