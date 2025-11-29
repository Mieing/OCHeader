@class WCFinderMusicTopicPageViewModel, MMUIViewController, WCFinderTopicRouteParams, NSString, WCFinderFeedFlowView, WCFinderPostMgr;
@protocol WCFinderMusicTopicPageViewManagerDelegate, WCFinderFeedBaseViewControllerProtocol;

@interface WCFinderMusicTopicPageViewManager : NSObject <WCFinderFeedFlowViewDataSource, WCFinderFeedFlowViewDelegate, WCFinderMusicTopicPageViewModelDelegate, WCFinderTopicListDetailViewControllerDelegate, WCFinderPostMgrDelegate>

@property (retain, nonatomic) WCFinderFeedFlowView *feedFlowView;
@property (retain, nonatomic) WCFinderMusicTopicPageViewModel *viewModel;
@property (weak, nonatomic) MMUIViewController<WCFinderFeedBaseViewControllerProtocol> *currentViewController;
@property (retain, nonatomic) WCFinderTopicRouteParams *params;
@property (retain, nonatomic) WCFinderPostMgr *postMgr;
@property (weak, nonatomic) id<WCFinderMusicTopicPageViewManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTopicParams:(id)a0 eventTabInfo:(id)a1 view:(id)a2 InViewController:(id)a3 byPassInfo:(id)a4 musicInfo:(id)a5;
- (void)showPostEntryByMusicInfo:(id)a0 musicIdPrefix:(id)a1 enterChildScene:(unsigned long long)a2;
- (void)openPostCameraByEnterChildScene:(unsigned long long)a0;
- (void)openPostAlbum;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (unsigned long long)finderFeedFlowViewPrefetchRemainCount:(id)a0;
- (BOOL)finderFeedFlowViewCanPrefetchData:(id)a0;
- (id)finderFeedFlowView:(id)a0 tipsType:(unsigned long long)a1 inState:(unsigned long long)a2;
- (long long)finderFeedFlowView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)finderFeedFlowView:(id)a0 contentVMAtIndexPath:(id)a1;
- (id)finderFeedFlowView:(id)a0 cellConfigAtIndexPath:(id)a1;
- (BOOL)finderFeedFlowViewNeedCornerRadius;
- (BOOL)isOriginalContactFromUsername:(id)a0;
- (id)finderFeedFlowView:(id)a0 leftTopBadgeContent:(id)a1;
- (unsigned long long)genFeedTagTypeFromContentVM:(id)a0;
- (double)finderFeedFlowView:(id)a0 heightForCustomCellAtIndexPath:(id)a1 itemWidth:(double)a2;
- (BOOL)finderFeedFlowView:(id)a0 isCustomCellAtIndexPath:(id)a1;
- (BOOL)finderFeedFlowViewUseDefaultCellConfig;
- (id)finderFeedFlowViewCurrentViewController:(id)a0;
- (void)finderFeedFlowView:(id)a0 requestDataWithType:(unsigned long long)a1;
- (unsigned long long)finderFeedFlowViewState:(id)a0;
- (void)finderFeedFlowView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)finderFeedFlowView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)enterCurFeedFlowView:(BOOL)a0;
- (void)routerListDetailViewController:(id)a0 indexPath:(id)a1 shouldSetFeedRingtone:(BOOL)a2;
- (id)finderFeedFlowView:(id)a0 reportParametersAtIndexPath:(id)a1;
- (void)finderEventFeedOrderChanged;
- (void)finderMusicUploadSuc;
- (void)finderMusicFetchListSucPullType:(unsigned long long)a0 innerTabType:(int)a1 dataArray:(id)a2;
- (void)finderEventReloadAllData;
- (void)finderEventAppendDataFrom:(long long)a0 toIndex:(long long)a1;
- (void)finderEventNoMoreData;
- (void)finderMusicTopicInvalidWithErrorCode:(int)a0 errMsg:(id)a1;
- (id)genMusicDataProvider;
- (id)postMgrSourceInfo:(id)a0;
- (void)postMgrWillOpenAlbum:(id)a0;
- (BOOL)postMgrEnableOpenAlbum:(id)a0;
- (id)postMgrGetMusicInfo;
- (id)onPostMusicIds:(id)a0;
- (id)onPostFollowTemplateFeedId;
- (id)onPostFollowMuiscFeedId:(id)a0;
- (id)postMgrGetRecommendedMusicInfoFromShoot:(BOOL)a0 postMgr:(id)a1;
- (id)postMgrPatMusicGetGroupId:(id)a0;
- (id)postMgrGetVideoTemplateInfo:(id)a0;
- (id)getRefDataItemForExtStatsReport;
- (id)postMgrGetExtStatsReportStrValue;
- (void).cxx_destruct;

@end
