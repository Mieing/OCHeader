@class IESLiveIMPaaSWorker, NSString, NSDictionary, AWELivePlayerContainerView, UIView, IESLivePlayerLynxController, HTSLiveRoom;
@protocol AWELivePaidStreamControlProvider;

@interface AWELivePlayerElement : BDXLynxLiveLight <IESLivePaidStreamAction, IESLiveIMMessageSubscriber, IESLivePlayerControllerDelegate>

@property (retain, nonatomic) AWELivePlayerContainerView *containerView;
@property (retain, nonatomic) UIView *lynxLiveLightContainer;
@property (retain, nonatomic) IESLivePlayerLynxController *playerController;
@property (retain, nonatomic) UIView *tapGestureRecognizerView;
@property (retain, nonatomic) HTSLiveRoom *aweLiveRoom;
@property (retain, nonatomic) IESLiveIMPaaSWorker *worker;
@property (retain, nonatomic) id<AWELivePaidStreamControlProvider> paidStreamControl;
@property (nonatomic) BOOL isMutedBeforeFreeTrialFinished;
@property (nonatomic) BOOL isRecordedMutedStatusBeforeFreeTrialFinished;
@property (nonatomic) BOOL nativeEnterRoomSupported;
@property (copy, nonatomic) NSDictionary *extraLogParameters;
@property (nonatomic) BOOL didFinishLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__2181;
+ (id)__lynx_prop_config__2282;
+ (id)__lynx_prop_config__2323;
+ (id)__lynx_ui_method_config__2424;
+ (id)__lynx_ui_method_config__2535;

- (void)layoutDidFinished;
- (void)play:(id)a0 withResult:(id /* block */)a1;
- (void)stop:(id)a0 withResult:(id /* block */)a1;
- (void)logExtra:(id)a0 requestReset:(BOOL)a1;
- (void)setLynxEnterRoomEnable:(BOOL)a0 requestReset:(BOOL)a1;
- (void)player:(id)a0 loadStateDidChange:(unsigned long long)a1;
- (void)player:(id)a0 playbackStateDidChange:(unsigned long long)a1;
- (void)player:(id)a0 didReceiveMetaInfo:(id)a1 processed:(BOOL)a2;
- (void)player:(id)a0 didReceiveError:(id)a1;
- (void)playerFrozen:(id)a0;
- (void)playerResume:(id)a0;
- (void)paidStreamTrialDidStart:(long long)a0;
- (void)paidStreamTrialDidStop:(long long)a0;
- (void)paidStreamTrialDidFinish:(long long)a0 reason:(unsigned long long)a1;
- (void)paidStreamTrialDidPaid:(long long)a0;
- (id)trialContainerViewForPaidStreamWithScene:(long long)a0;
- (void)paidStreamTrialRemainingTimeChangeTo:(double)a0 scene:(long long)a1;
- (void)paidStreamTrialDidPromised:(long long)a0;
- (id)trialViewForPaidStreamWithScene:(long long)a0;
- (void)setupIMConfigCore;
- (void)uninstallMessageReceive;
- (void)checkTapGestureRecognizerView;
- (void)startPaidStreamIfNeeded;
- (void)stopPaidStream;
- (void)installMessageReceive;
- (void)createPaidStreamIfNeeded;
- (void)setupSecurityView;
- (void)updatePaidStatus:(long long)a0;
- (void)paidStreamFreeTrialDidStopWithToken:(id)a0;
- (void)paidStreamStartWithToken:(id)a0;
- (void)reportLiveEndStatus;
- (void)setRoomData:(id)a0 requestReset:(BOOL)a1;
- (void)pausePaidStream;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setup;
- (void)prepareToPlay;
- (void)messageReceived:(id)a0;
- (id)createView;
- (void)singleTap;

@end
