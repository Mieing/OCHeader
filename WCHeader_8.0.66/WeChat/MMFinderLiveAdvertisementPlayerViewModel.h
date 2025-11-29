@class MMLiveStorageCleanupPinningToken, NSString, NSMutableSet, WCFinderLivePlayerViewReporter;

@interface MMFinderLiveAdvertisementPlayerViewModel : MMFinderLiveWcPlayerViewModel <MMLiveTaskMgrExt>

@property (retain, nonatomic) NSMutableSet *preloadAdvertisementSet;
@property (nonatomic) unsigned long long beginShowAdVideoTimeForReport;
@property (retain, nonatomic) WCFinderLivePlayerViewReporter *playerViewReporter;
@property (retain, nonatomic) MMLiveStorageCleanupPinningToken *resourcesPinningToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initTaskId:(id)a0 config:(id)a1;
- (void)dealloc;
- (BOOL)play;
- (void)playFinish;
- (id)createPlayerInfo;
- (id)generateDownloadArgsWrap;
- (id)videoSavePath;
- (id)videoFormatPath;
- (id)saveFilename;
- (void)onPlayerVideoFrameOut:(id)a0;
- (void)onLiveTask:(id)a0 synchronizedFinderLiveAnchorTimeInterval:(id)a1;
- (void)onLiveTaskWillShowLiveAdvertisement:(id)a0 liveAdId:(id)a1 liveAdPlayUrl:(id)a2;
- (void)registerExt;
- (void)unRegisterExt;
- (void)preloadPreloadPlayerDataWithRequest:(id)a0 liveAdId:(id)a1;
- (unsigned long long)audienceAdVideoScenReportType:(unsigned long long)a0;
- (double)adVideoDiffernetValue;
- (void)onExitLive;
- (id)playerId;
- (id)adId;
- (unsigned long long)currentAdTime;
- (unsigned long long)currentAdVideoDuration;
- (void)hiddenBufferingView;
- (void)onVideoPlayFail:(unsigned long long)a0 errorCode:(int)a1 LocalizedErrorDes:(id)a2;
- (void)onVideoPlayFinish;
- (void)showBufferingView;
- (void).cxx_destruct;

@end
