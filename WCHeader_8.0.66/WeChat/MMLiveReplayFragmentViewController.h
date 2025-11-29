@class NSString, WCPlayerPlayArgs, WCPlayerView, WCFinderLivePostFeedProcessMgr, WCFinderPostMgr, MMLiveReplayFragmentPlayerControlView, ForwardMessageLogicController, MMLiveReplayFragmentItem;

@interface MMLiveReplayFragmentViewController : MMUIViewController <MMLiveReplayFragmentPlayerControlDelegate, WCPlayerDownloaderExt, ForwardMessageLogicDelegate, WCFinderLivePostFeedProcessMgrDelegate, WCFinderPostMgrDelegate>

@property (retain, nonatomic) WCPlayerView *playerView;
@property (retain, nonatomic) MMLiveReplayFragmentPlayerControlView *controlView;
@property (retain, nonatomic) MMLiveReplayFragmentItem *replayFragmentItem;
@property (retain, nonatomic) WCPlayerPlayArgs *playerInfo;
@property (nonatomic) BOOL isBuffering;
@property (nonatomic) BOOL isToolViewHidden;
@property (nonatomic) BOOL shouldResumeAtAppear;
@property (nonatomic) SEL downloadCompletionSelector;
@property (retain, nonatomic) ForwardMessageLogicController *forwardMsgLogic;
@property (retain, nonatomic) WCFinderLivePostFeedProcessMgr *finderPostProcessMgr;
@property (retain, nonatomic) WCFinderPostMgr *finderPostMgr;
@property (nonatomic) BOOL shouldReportExposureAtAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithReplayItem:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)setupPlayerView;
- (id)generatePlayerInfo;
- (id)generatePlayerConfig;
- (void)saveVideoToAlbum;
- (void)saveVideoOnGetAllData;
- (void)fetchAllVideoDataWithCompleteSelector:(SEL)a0;
- (void)forwardVideoToFriend;
- (id)generateForwardVideoMsg;
- (void)forwardVideoOnGetAllData;
- (void)publishFinderFeed;
- (void)publishFinderFeedAfterGetAllData;
- (id)ensurePostMgrWithEnterScene;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)hidesStatusBar;
- (BOOL)useCustomNavibar;
- (BOOL)shouldHideNavigationBar;
- (void)onTapCloseButton:(id)a0;
- (void)onClickShareButton;
- (void)onClickDownloadButton:(id)a0;
- (void)onClickPublishFinderFeedButton:(id)a0;
- (void)OnCdnDownloadSuccess:(id)a0;
- (void)OnPlayerDownloadProgress:(id)a0 finish:(unsigned long long)a1 total:(unsigned long long)a2;
- (void)OnCdnDownloadError:(id)a0;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)a0;
- (void)OnForwardMessageCancel:(id)a0;
- (void)finderLivePostFeedProcessMgrOnSendMediaWith:(id)a0;
- (id)finderLivePostFeedProcessMgrGetSelectedMediaContent;
- (void)finderLivePostFeedProcessMgrCancelPostProcess;
- (void)finderLivePostFeedProcessMgrEditCancelledOrFailedWithFlag:(BOOL)a0;
- (void)postMgrStartUpload;
- (void)checkAndReportExposure;
- (void)reportReplayFragmentViewActionWithType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
