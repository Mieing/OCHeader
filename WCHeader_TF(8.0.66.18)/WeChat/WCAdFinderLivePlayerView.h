@class MMTimer, WCDataItem, NSString, MMFinderLiveFeedPreviewLogic, MMFinderLiveSnsAdStreamInfo, MMUIView, WCAdURLImageView, WCAdFinderLiveStreamInfo, MMLiveCDNPlayerView, SightIconView;

@interface WCAdFinderLivePlayerView : MMUIView <MMLiveCDNPlayerViewDelegate, WCCanvasPageViewAnimationProtocol>

@property (retain, nonatomic) WCDataItem *dataItem;
@property (nonatomic) BOOL bTimelineScene;
@property (retain, nonatomic) WCAdFinderLiveStreamInfo *adLiveStreamInfo;
@property (nonatomic) int displayType;
@property (retain, nonatomic) MMFinderLiveSnsAdStreamInfo *currentFinderLiveStreamInfo;
@property (retain, nonatomic) MMUIView *bgView;
@property (retain, nonatomic) WCAdURLImageView *thumbView;
@property (retain, nonatomic) MMLiveCDNPlayerView *streamPlayer;
@property (retain, nonatomic) SightIconView *playIconView;
@property (retain, nonatomic) WCAdURLImageView *brandWallpaperView;
@property (retain, nonatomic) WCAdURLImageView *brandFrontImageView;
@property (nonatomic) BOOL intentToPlay;
@property (nonatomic) struct CGSize { double width; double height; } videoSize;
@property (nonatomic) BOOL playerPlayBeginFlag;
@property (nonatomic) BOOL liveJoinedFlag;
@property (retain, nonatomic) MMTimer *checkJoinLiveTimer;
@property (retain, nonatomic) MMFinderLiveFeedPreviewLogic *finderLivePreviewLogic;
@property (nonatomic) BOOL shutdownFlag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataItem:(id)a1 bTimelineScene:(BOOL)a2;
- (void)dealloc;
- (void)addNotifications;
- (void)onWillEnterForeground;
- (void)initView;
- (id)createImageView:(id)a0;
- (id)fetchThumbUrl;
- (void)initData;
- (void)play;
- (void)pause;
- (void)shutdown;
- (void)realStartPlayer:(id)a0;
- (void)startCheckJoinLiveTimer;
- (void)stopCheckJoinLiveTimer;
- (void)checkJoinLive;
- (id)fetchLocalFinderLiveStreamInfo;
- (void)checkAndRefreshFinderLiveStreamInfo;
- (void)requestFinderLiveStreamInfoFromServer;
- (void)onFinderLiveStreamInfoResponse:(id)a0;
- (void)cleanOnLiveEnd;
- (BOOL)isFinderLiving:(id)a0;
- (BOOL)isLiveStatusAndLiveStreamSame;
- (void)checkAndNotifyLiveStatusChanged:(id)a0;
- (void)showPlayIconWithLoadingType;
- (void)showPlayIconWithPlayType;
- (void)hidePlayIcon;
- (void)updateStreamPlayerFrame;
- (id)fetchFinderLiveStreamReportInfo;
- (BOOL)isBrandWallpaperDisplayType;
- (void)onPlayLiveConnectSuccessful;
- (void)onPlayBegin;
- (void)onPlayEnd;
- (void)onPlayDisconnect;
- (void)onPlayChangeSize:(struct CGSize { double x0; double x1; })a0;
- (void)onCanvasPageViewAnimationSetContentHidden:(BOOL)a0;
- (void).cxx_destruct;

@end
