@class NSString, TingDataReportService;

@interface TingReportManagerCpp : NSObject <WeChat.ICarPlayUIExt, ITingReportManager>

@property (nonatomic) int audioSessionRoute;
@property (nonatomic) unsigned int netType;
@property (nonatomic) int audioVolume;
@property (retain, nonatomic) TingDataReportService *logic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)clearSession;
+ (id)extraReportDataFromScene:(int)a0 ActionListenItem:(id)a1 actionCategoryItem:(id)a2 playingListenItem:(id)a3 playingCategoryItem:(id)a4;

- (id)imp;
- (id)init;
- (void)dealloc;
- (void)startObserveOutputVolume;
- (void)stopObserveOutputVolume;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)getTapeItem;
- (id)getPlayerReportContext;
- (id)getPlayerTingItem;
- (int)getAudioSessionRoute;
- (int)getNetType;
- (id)getAppSessionId;
- (int)getAppEnterScene;
- (BOOL)isPlaying;
- (id)getPlayingTask;
- (int)getVolume;
- (void)didReceiveWillEnterForegroundNotification;
- (void)didReceiveDidEnterBackgroundNotification;
- (void)updateAudioSessionRoute:(id)a0;
- (void)onWCAudioSessionRouteChange:(id)a0 reasonValue:(unsigned long long)a1;
- (void)onCarPlayConnected;
- (void)onCarPlayDisconnected;
- (void)ReachabilityChange:(unsigned int)a0;
- (void)onAction:(id)a0;
- (void)onAction:(int)a0 context:(id)a1;
- (void)onAction:(int)a0 scene:(int)a1 fill:(id /* block */)a2;
- (void)onAction:(int)a0 scene:(int)a1 tingItem:(id)a2 categoryItem:(id)a3 fill:(id /* block */)a4;
- (void)onPageAppear:(int)a0 fill:(id /* block */)a1;
- (void)onPageDisappear:(int)a0 fill:(id /* block */)a1;
- (void)onClickWithItemPlayButton:(id)a0 belongsToCategory:(id)a1 scene:(int)a2 index:(int)a3 play:(BOOL)a4 fill:(id /* block */)a5;
- (void)onClickWithItem:(id)a0 belongsToCategory:(id)a1 scene:(int)a2 index:(int)a3 fill:(id /* block */)a4;
- (void)onClickWithCategory:(id)a0 scene:(int)a1 index:(int)a2 fill:(id /* block */)a3;
- (void)onClickWithLine:(id)a0 item:(id)a1 scene:(int)a2;
- (void)markTimeTaskStop;
- (void)markMinimizeCloseButtonClicked;
- (void)markPlayCenterClear;
- (void)markAudioModuleInterrupted;
- (void)markPlayFinishAction:(int)a0;
- (void)markSessionReport:(id)a0;
- (void)addSessionItemTo:(id)a0 withKey:(id)a1 value:(id)a2;
- (void)cancelClearSessionInvoker;
- (void)doClearSession;
- (void)finderRedDotDataChangedActionType:(unsigned long long)a0 subReasonType:(unsigned long long)a1 fromCtrlInfo:(id)a2 toCtrlInfo:(id)a3 disposePath:(id)a4;
- (void).cxx_destruct;

@end
