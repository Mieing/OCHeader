@class NSTimer, NSString;

@interface AWEPlayInteractionPadInviteWatchGuideController : AWEPlayInteractionNewBaseController <AWEPadRTVGuideTargetProtocol>

@property (retain, nonatomic) NSTimer *playbackTimer;
@property (nonatomic) BOOL inviteWatchTriggered;
@property (nonatomic) double triggerVideoDuration;
@property (nonatomic) double triggerStayTime;
@property (nonatomic) double triggerStayRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)setupEvent;
- (id)awemeTypeWhiteList;
- (void)padAdapter_triggerInviteWatchToolTip;
- (id)referStringWhiteList;
- (void)triggerInviteWatchGuide;
- (void)viewDidAppear;
- (void)stopTimer;
- (void).cxx_destruct;
- (void)startTimer;
- (void)viewDidLoad;
- (void)didEndDisplaying;
- (void)viewDidDisappear;
- (id)shareButton;
- (void)willDisplay;

@end
