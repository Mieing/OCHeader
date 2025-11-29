@class AWEPlayInteractionViewController, NSString, AWEAwemeModel;

@interface AWEPlayInteractionNotificationController : NSObject <AWEPlayInteractionNotificationControllerProtocol>

@property (nonatomic) long long blockPlayCounter;
@property (nonatomic) BOOL playingBeforeBlockPlay;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) AWEPlayInteractionViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didReceiveCollectStatusChangedNoti:(id)a0;
- (void)didReceiveClickTabbarExitNoti:(id)a0;
- (void)didReceiveEnterBackgroundNoti:(id)a0;
- (void)imAwemeVideoPlayControlNotification:(id)a0;
- (void)startBlockingPlay;
- (void)endBlockingPlay;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(id)a0;
- (void)dealloc;

@end
