@class NSString, MMUIViewController, WCFinderLiveEntertainmentChannelsTagStreamVM, WCFinderFeedFlowView, WCFinderLiveFeedGenericAutoPlayModel;
@protocol WCFinderLiveEntertainmentChannelsTagStreamAdapterDelegate, WCFinderFeedBaseViewControllerProtocol;

@interface WCFinderLiveEntertainmentChannelsTagStreamAdapter : NSObject <WCFinderFeedFlowViewDataSource, WCFinderFeedFlowViewDelegate, WCFinderFeedFlowViewLayoutDelegate, WCFinderLiveEntertainmentChannelsTagStreamVMDelegate, MMLiveTaskMgrExt, WCFinderMoreLiveTagListHeaderViewDelegate, WCFinderLiveHomePageEntertainmentAudioRoomCellDelegate>

@property (retain, nonatomic) WCFinderFeedFlowView *feedFlowView;
@property (weak, nonatomic) MMUIViewController<WCFinderFeedBaseViewControllerProtocol> *currentViewController;
@property (retain, nonatomic) WCFinderLiveEntertainmentChannelsTagStreamVM *vm;
@property (retain, nonatomic) WCFinderLiveFeedGenericAutoPlayModel *autoPlayCtx;
@property (weak, nonatomic) id<WCFinderLiveEntertainmentChannelsTagStreamAdapterDelegate> delegate;
@property (retain, nonatomic) NSString *tag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTag:(id)a0 view:(id)a1 InViewController:(id)a2 delegate:(id)a3 vm:(id)a4;
- (void)disappear;
- (void)appear;
- (void)finishFirstPageRequest:(id)a0;
- (void)deleteTid:(id)a0;
- (void)scrollToTop;
- (id)visibleElementModels;
- (BOOL)checkAutoPlay;
- (void)stopAutoPlay;
- (void)startPlayWithIndexPath:(id)a0;
- (void)stopPlayWithIndexPath:(id)a0;
- (long long)numberOfSectionsInFinderFeedFlowView:(id)a0;
- (long long)finderFeedFlowView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)finderFeedFlowView:(id)a0 contentVMAtIndexPath:(id)a1;
- (BOOL)finderFeedFlowView:(id)a0 isCustomCellAtIndexPath:(id)a1;
- (id)finderFeedFlowView:(id)a0 customCellAtIndexPath:(id)a1;
- (void)goToSettingLocationAuthorization:(id)a0;
- (double)finderFeedFlowView:(id)a0 heightForCustomCellAtIndexPath:(id)a1 itemWidth:(double)a2;
- (id)finderFeedFlowView:(id)a0 cellConfigAtIndexPath:(id)a1;
- (BOOL)finderFeedFlowView:(id)a0 isCustomSupplementaryViewOfKind:(id)a1 atSection:(long long)a2;
- (id)finderFeedFlowView:(id)a0 customSupplementaryViewOfKind:(id)a1 atIndexPath:(id)a2;
- (double)finderFeedFlowView:(id)a0 heightForCustomSupplementaryViewOfKind:(id)a1 atSection:(long long)a2;
- (id)finderFeedFlowViewCurrentViewController:(id)a0;
- (unsigned long long)finderFeedFlowDataBeginRefreshTime:(id)a0;
- (BOOL)finderFeedFlowViewCanPrefetchData:(id)a0;
- (void)finderFeedFlowView:(id)a0 requestDataWithType:(unsigned long long)a1;
- (unsigned long long)finderFeedFlowViewState:(id)a0;
- (void)finderFeedFlowView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)finderFeedFlowView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)finderFeedFlowView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)finderFeedFlowView:(id)a0 tipsType:(unsigned long long)a1 inState:(unsigned long long)a2;
- (void)finderFeedFlowViewDidEndScrolling:(id)a0;
- (void)finderFeedFlowViewWillBeginDragging:(id)a0 atIndexPath:(id)a1;
- (void)finderFeedFlowViewDidScroll:(id)a0;
- (void)finderFeedFlowViewDidScrollToTop:(id)a0;
- (id)finderFeedFlowView:(id)a0 reportParametersAtIndexPath:(id)a1;
- (void)finderFeedFlowView:(id)a0 reportExtStatsReportAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })finderFeedFlowView:(id)a0 cellSpaceAtSection:(unsigned long long)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })finderFeedFlowView:(id)a0 edgeInsetsAtSection:(unsigned long long)a1;
- (unsigned long long)finderFeedFlowView:(id)a0 columnCountAtSection:(unsigned long long)a1;
- (double)finderFeedFlowViewFlowSectionBottomFooterInset:(id)a0;
- (void)onLiveEntertainmentChannelsTagStreamReloadAllData:(id)a0;
- (void)onLiveEntertainmentChannelsTagStreamAppendDataFrom:(long long)a0 toIndex:(long long)a1;
- (void)onLiveEntertainmentChannelsTagStreamNoMoreData;
- (void)onLiveEntertainmentChannelsTagStreamFetchFailWithErrorCode:(int)a0;
- (void)onClickCoverContact:(id)a0 feedVM:(id)a1;
- (void)onEntertainmentAudioRoomCellTeamUpListClickUnoccupiedSeat:(id)a0;
- (void).cxx_destruct;

@end
