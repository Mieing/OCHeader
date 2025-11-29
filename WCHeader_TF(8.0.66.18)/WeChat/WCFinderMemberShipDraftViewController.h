@class NSString, WCFinderMemberShipDraftViewModel;

@interface WCFinderMemberShipDraftViewController : MMUIViewController <WCFinderFeedFlowViewDelegate, WCFinderFeedFlowViewDataSource, WCFinderFeedFlowViewLayoutDelegate, WCFinderProfileMusicViewDelegate, WCFinderMemberShipDraftViewModelDelegate, WCFinderPostViewControllerDelegate>

@property (retain, nonatomic) WCFinderMemberShipDraftViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)feedFlowView;
- (void)loadView;
- (void)finderFeedFlowView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)pushVCAnimated:(id)a0;
- (void)openFinderEditor:(id)a0;
- (BOOL)checkLongVideoFileValid:(id)a0;
- (id)zoneViewController;
- (long long)numberOfSectionsInFinderFeedFlowView:(id)a0;
- (long long)finderFeedFlowView:(id)a0 numberOfItemsInSection:(long long)a1;
- (BOOL)finderFeedFlowView:(id)a0 isCustomCellAtIndexPath:(id)a1;
- (id)finderFeedFlowView:(id)a0 customCellAtIndexPath:(id)a1;
- (double)finderFeedFlowView:(id)a0 heightForCustomCellAtIndexPath:(id)a1 itemWidth:(double)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })finderFeedFlowView:(id)a0 edgeInsetForCustomSupplementaryViewOfKind:(id)a1 atSection:(long long)a2;
- (void)finderFeedFlowView:(id)a0 requestDataWithType:(unsigned long long)a1;
- (unsigned long long)finderFeedFlowViewState:(id)a0;
- (id)finderFeedFlowView:(id)a0 tipsType:(unsigned long long)a1 inState:(unsigned long long)a2;
- (unsigned long long)finderFeedFlowView:(id)a0 columnCountAtSection:(unsigned long long)a1;
- (void)finderMemberShipZoneDraftTabViewNoMoreData;
- (void)finderMemberShipZoneDraftTabViewFetchListSuc;
- (void)finderMemberShipZoneDraftTabViewFetchListFail;
- (void)finderMemberShipZoneDraftTabDeleteItemAtIdx:(long long)a0;
- (void)finderMemberShipZoneDraftTabInsertItemAtIdx:(long long)a0;
- (BOOL)reloadDataWithBatchModify;
- (void)onMusicViewDidSlideDelete:(id)a0 feedVM:(id)a1;
- (void)onMusicViewDidClickRetry:(id)a0 feedVM:(id)a1;
- (void)onMusicViewDidClickDelete:(id)a0 feedVM:(id)a1;
- (void)onMusicView:(id)a0 exposeMenuAction:(id)a1 feedVM:(id)a2;
- (void)postViewControllerStartUpload;
- (void).cxx_destruct;

@end
