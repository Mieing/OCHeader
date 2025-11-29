@interface AWEDCFeedSwitchPreviewPlayerComponent : AWEDCFeedSwitchPreviewBaseComponent

@property (nonatomic) BOOL isMute;
@property (nonatomic) BOOL clickVolumeKey;
@property (nonatomic) BOOL isPause;

- (id)systemVolumeDidChangeNotification;
- (void)onVolumeChangeNotification;
- (BOOL)shouldMuteOrPause;
- (void)viewDidAppear;
- (void)applicationWillResignActive;
- (void)viewDidLoad;
- (void)viewDidDisappear;

@end
