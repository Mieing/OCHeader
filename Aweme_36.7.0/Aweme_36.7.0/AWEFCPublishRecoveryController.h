@interface AWEFCPublishRecoveryController : AWEBaseController

@property (nonatomic) BOOL hasShowVideoRecoveryAlert;

- (void)task:(id)a0 willAppendWithInfo:(id)a1;
- (void)splashViewDidDisappear:(id)a0;
- (void)awesomeSplashRemoved:(id)a0;
- (void)recoveryVideoBackupIfNeed;
- (BOOL)isActiveForBackup;
- (void)showRetryViewWhenLaunch;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)dealloc;

@end
