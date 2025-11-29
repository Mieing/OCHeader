@class _TtC21AWEMusicStreamingImpl13LongLyricView, NSString, CADisplayLink, AWEMusicDSPEventModel, UIView, AWEMusicFeedViewModel, _TtC21AWEMusicStreamingImpl23LunaLongLyricDataSource;
@protocol MusicService;

@interface LunaLongLyricViewController : AWEMiniLunaBaseViewController <AWEMusicStreamingImpl.LongLyricViewDelegate, AWEMusicServiceDelegate, AWEMusicDispatchLunaV2Protocol, AWEMusicStreamingImpl.BNSnackBarShowing, LunaLongLyricTransitionInnerContextProvider>

@property (nonatomic) BOOL isShowing;
@property (retain, nonatomic) _TtC21AWEMusicStreamingImpl13LongLyricView *longLyricView;
@property (retain, nonatomic) _TtC21AWEMusicStreamingImpl23LunaLongLyricDataSource *longLyricDataSource;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) AWEMusicFeedViewModel *previousModel;
@property (nonatomic) double previousCardAppearTimestamp;
@property (copy, nonatomic) NSString *previousReportPageStatusID;
@property (weak, nonatomic) id<MusicService> musicService;
@property (retain, nonatomic) AWEMusicDSPEventModel *eventModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long snackBarBottomAlignment;
@property (readonly, nonatomic) double bottomBarHeight;
@property (readonly, nonatomic) UIView *targetView;

- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (void)musicService:(id)a0 playStatusChanged:(long long)a1;
- (void)onDidPrev:(id)a0;
- (void)onDidNext:(id)a0 isManual:(BOOL)a1 isFinished:(BOOL)a2;
- (void)onStartPlay:(id)a0;
- (void)longLyricViewTapped;
- (void)longLyricSeekTime:(id)a0 seekTo:(double)a1;
- (void)longLyricViewSceneImageDidLoad;
- (void)longLyricViewPlayButtonTapped;
- (void)longLyricViewCollectButtonTappedWithCollectButton:(id)a0;
- (void)longLyricRetryViewTappedWithLonglyricView:(id)a0;
- (void)longLyricViewBeginDragging;
- (id)longLyricTitle;
- (id)longLyricSubTitle;
- (void)longLyricViewLoadLyricWithLonglyricView:(id)a0;
- (id)initWithMusicService:(id)a0;
- (id)currentMusicModel;
- (void)onDisplayRefresh;
- (id)pageEventParams;
- (void)lunaV2UpdateFinish:(id)a0 isFromCache:(BOOL)a1;
- (void)reportCollectEventModel:(id)a0 isSuccess:(BOOL)a1 code:(long long)a2 isRepeatCollect:(BOOL)a3;
- (void)reportCancelCollectEventModel:(id)a0 isSuccess:(BOOL)a1 code:(long long)a2;
- (void)onLyricInnerTransitionCompletion;
- (void)updateLyricInfo;
- (void)reportMiniStayPage;
- (void)updateLyricStateWithPlaybackTime:(double)a0;
- (void)reportPageStatus;
- (void)updateLyricOnMusicChange;
- (void)longLyricViewMoreButtonTapped;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)hide;
- (id)currentItem;
- (void)viewDidLoad;
- (void)showInViewController:(id)a0;

@end
