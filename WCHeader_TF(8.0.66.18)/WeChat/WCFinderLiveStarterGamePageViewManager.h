@class WCFinderLiveStarterGamePageViewModel, MMFinderLiveGameUserInfo, NSString, WCFinderFeedFlowView;
@protocol WCFinderLiveStarterGamePageViewManagerDelegate;

@interface WCFinderLiveStarterGamePageViewManager : NSObject <WCFinderFeedFlowViewDataSource, WCFinderFeedFlowViewLayoutDelegate, WCFinderLiveStarterGamePageViewModelDelegate, WCFinderFeedFlowViewDelegate>

@property (retain, nonatomic) WCFinderFeedFlowView *feedFlowView;
@property (retain, nonatomic) WCFinderLiveStarterGamePageViewModel *viewModel;
@property (retain, nonatomic) MMFinderLiveGameUserInfo *selectGameUserInfo;
@property (weak, nonatomic) id<WCFinderLiveStarterGamePageViewManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTabInfo:(id)a0 feedFlowView:(id)a1 selectGameUserInfo:(id)a2 delegate:(id)a3;
- (void)updateSelectLiveGameUserInfo:(id)a0;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (void)onLiveGameTabLiveStreamReloadAllData;
- (void)onLiveGameTabLiveStreamAppendDataFrom:(long long)a0 toIndex:(long long)a1;
- (void)onLiveHomeGameTabLiveStreamNoMoreData;
- (void)onLiveHomeGameTabLiveStreamFetchFailWithErrorCode:(int)a0;
- (long long)numberOfSectionsInFinderFeedFlowView:(id)a0;
- (long long)finderFeedFlowView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)finderFeedFlowView:(id)a0 contentVMAtIndexPath:(id)a1;
- (BOOL)finderFeedFlowView:(id)a0 isCustomCellAtIndexPath:(id)a1;
- (long long)getNumberOfItemsInSection;
- (id)finderFeedFlowView:(id)a0 customCellAtIndexPath:(id)a1;
- (double)finderFeedFlowView:(id)a0 heightForCustomCellAtIndexPath:(id)a1 itemWidth:(double)a2;
- (BOOL)finderFeedFlowViewCanPrefetchData:(id)a0;
- (void)finderFeedFlowView:(id)a0 requestDataWithType:(unsigned long long)a1;
- (unsigned long long)finderFeedFlowViewState:(id)a0;
- (void)finderFeedFlowView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })finderFeedFlowView:(id)a0 cellSpaceAtSection:(unsigned long long)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })finderFeedFlowView:(id)a0 edgeInsetsAtSection:(unsigned long long)a1;
- (unsigned long long)finderFeedFlowView:(id)a0 columnCountAtSection:(unsigned long long)a1;
- (void).cxx_destruct;

@end
