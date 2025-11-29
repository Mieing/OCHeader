@interface AWEMVEmptyExperimentController : AWEDCFeedBaseController

@property (readonly, nonatomic) BOOL gotDeviceId;
@property (nonatomic) long long lastNetworkStatus;

- (void)handleConnectionChanged:(id)a0;
- (void)addNotifications;
- (void)dealloc;
- (void)containerViewDidLoad;

@end
