@interface WeChat.WCFinderInterestFeedVC : MMUIViewController <WCFinderFeedFlowViewDelegate, WCFinderFeedFlowViewDataSource, WCFinderFeedBaseViewControllerProtocol> {
    void /* unknown type, empty encoding */ vm;
    void /* unknown type, empty encoding */ appearance;
    void /* unknown type, empty encoding */ $__lazy_storage_$_feedFlowView;
}

- (void)finderFeedFlowViewFooterClickNavToRec;
- (id)finderFeedFlowView:(id)a0 tipsType:(unsigned long long)a1 inState:(unsigned long long)a2;
- (id)finderFeedFlowViewAutoPlayParams:(id)a0;
- (id)finderFeedFlowViewCurrentViewController:(id)a0;
- (unsigned long long)finderFeedFlowDataBeginRefreshTime:(id)a0;
- (BOOL)finderFeedFlowViewCanPrefetchData:(id)a0;
- (void)finderFeedFlowView:(id)a0 requestDataWithType:(unsigned long long)a1;
- (void)finderFeedFlowViewStateChangedFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (unsigned long long)finderFeedFlowViewState:(id)a0;
- (void)finderFeedFlowView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)finderFeedFlowView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)onFinderFeedFlowViewDelete:(id)a0 indexPath:(id)a1;
- (id)finderFeedFlowView:(id)a0 reportParametersAtIndexPath:(id)a1;
- (long long)finderFeedFlowView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)finderFeedFlowView:(id)a0 contentVMAtIndexPath:(id)a1;
- (id)finderFeedFlowView:(id)a0 cellConfigAtIndexPath:(id)a1;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)init:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)navigationBarBlurEffect;
- (void)willAppear;
- (void)viewDidLoad;
- (void)popSelf;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;

@end
