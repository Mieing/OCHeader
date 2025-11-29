@class MMTimer, MMLiveCDNPlayerView, NSString, WCFinderDataItem;

@interface TingFinderLivePlayer : TingBizPlayer <MMLiveCDNPlayerViewDelegate>

@property (retain, nonatomic) MMLiveCDNPlayerView *livePlayerView;
@property (retain, nonatomic) WCFinderDataItem *finderItem;
@property (retain, nonatomic) MMTimer *checkTimer;
@property (nonatomic) unsigned int checkInterval;
@property (nonatomic) BOOL isChecking;
@property (nonatomic) unsigned int checkFailCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTingItem:(id)a0 configuartion:(id)a1;
- (void)dealloc;
- (id)view;
- (void)prepareToPlay;
- (void)play;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)onPlayBegin;
- (void)onPlayProgress:(double)a0;
- (void)onPlayDisconnect;
- (void)onPlayEnd;
- (void)onPlayWarningReconnect;
- (void)startTimerCheck;
- (void)stopTimerCheck;
- (void)checkLiveStatus;
- (void).cxx_destruct;

@end
