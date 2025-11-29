@class AWELiveRoomModel, NSString;
@protocol AWELivePaidStreamControlProvider;

@interface AWELivePreStreamLiveShowElement : AWELiveBaseElement <AWELivePreStreamMessageSubscriber, IESLivePaidStreamAction, IESLivePaidStreamSecurityDelegate>

@property (retain, nonatomic) AWELiveRoomModel *roomModel;
@property (retain, nonatomic) id<AWELivePaidStreamControlProvider> paidStreamControl;
@property (nonatomic, getter=isDisplaying) BOOL displaying;
@property (nonatomic, getter=isEnteredRoom) BOOL enteredRoom;
@property (nonatomic, getter=isLiveShowViewDidAppear) BOOL liveShowViewDidAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeElement;
- (void)viewController_viewDidAppear;
- (void)onUserQuitLiveRoom:(id)a0;
- (void)application_WillResignActive;
- (void)viewController_viewDidDisAppear;
- (void)prepareForDisPlay;
- (void)onUserEnterLiveRoom:(id)a0;
- (void)preloadElement;
- (void)onMessageReceivce:(id)a0 withDict:(id)a1;
- (id)paidStream;
- (void)paidStreamTrialDidStart:(long long)a0;
- (void)paidStreamTrialDidStop:(long long)a0;
- (void)paidStreamTrialDidFinish:(long long)a0 reason:(unsigned long long)a1;
- (void)paidStreamScreenCapturedDidChange:(BOOL)a0 scene:(long long)a1;
- (void)paidStreamWillDisplayForBlockType:(unsigned long long)a0 scene:(long long)a1;
- (void)paidStreamDidEndDisplayForBlockType:(unsigned long long)a0 scene:(long long)a1;
- (void)application_DidBecomeActive;
- (void)streamPlayer_firstFrame;
- (void)streamPlayer_stop;
- (void)streamPlayer_finish;
- (void)audienceViewController_WillEnterLiveRoom:(id)a0 anchorID:(id)a1;
- (void)audienceViewController_DidLeaveLiveRoom:(id)a0 anchorID:(id)a1;
- (void)paidStreamTrialRemainingTimeChangeTo:(double)a0 scene:(long long)a1;
- (void)paidStreamTrialDidPaid:(long long)a0 authSource:(unsigned long long)a1;
- (void)paidStreamTrialDidPromised:(long long)a0;
- (void)stopPaidStream;
- (void)pausePaidStream;
- (void)startPaidStream;
- (void)installPaidStreamControl:(id)a0;
- (void)configureMessage;
- (void)muteStreamWithToken:(id)a0;
- (void)unMuteStreamWithToken:(id)a0;
- (BOOL)paidStreamShouldActiveScreenCaptured:(id)a0;
- (void)trackWindowPaidLiveTryEndShow;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (BOOL)isShowing;
- (void)reset;

@end
