@class NSTimer, NSString;

@interface AWELandscapeFeedPadController : AWELandscapeFeedBaseController <AWEPadRTVGuideTargetProtocol>

@property (retain, nonatomic) NSTimer *inviteWatchGuideTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)padAdapter_triggerInviteWatchToolTip;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;

@end
