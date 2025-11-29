@class NSTimer, NSString, AWELiveEnterGuideView;

@interface AWELiveEnterGuideElement : AWELiveLeftElement <AWELivePreStreamEnterRoomDataProvider>

@property (retain, nonatomic) NSTimer *guideTimer;
@property (retain, nonatomic) AWELiveEnterGuideView *guideView;
@property (nonatomic) BOOL isShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeElement;
- (unsigned long long)excludeStatus;
- (id)slotIdentity;
- (void)restDataIfNeed;
- (void)showLiveElementWithWillAnimations:(id /* block */)a0 animations:(id /* block */)a1 completion:(id /* block */)a2;
- (BOOL)shouldActivateElementWithData:(id)a0;
- (void)prepareForDisPlay;
- (void)onUserEnterLiveRoom:(id)a0;
- (void)provideEenterLiveRoomParamasWithContext:(id)a0;
- (unsigned long long)currentGuideType;
- (void)streamPlayer_stop;
- (void)streamPlayer_finish;
- (void)invalidGuideTimer;
- (BOOL)enableEnterGuideCountdownTimer;
- (void)startGuideEnterTimerIfNeed;
- (BOOL)enableEnterGuideCountdownTimer_VS;
- (void)p_stopGudieEnter;
- (void)p_startGudieEnter;
- (void)creatEnterGuideView;
- (void)trackShowEnterGuideEventWithParams:(id)a0;
- (void)removeEnterGuideView;
- (BOOL)enableChat;
- (BOOL)checkAnchorCommentSettingEnable;
- (double)guideViewHeightWithType:(unsigned long long)a0;
- (void)trackClickEnterGuideEventWithParams:(id)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (unsigned long long)priority;
- (void)reset;
- (void)dealloc;

@end
