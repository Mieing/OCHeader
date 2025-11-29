@interface AWEMusicListenLaterController : AWEBaseController

@property (nonatomic) long long stateBefore;

- (void)onSubPlayerWillShow;
- (void)onSubPlayerDismiss;
- (void)viewDidLoad;

@end
