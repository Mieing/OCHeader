@class NSString, AWEFeedSpeedCapsuleView;

@interface AWEFeedSpeedCapsuleController : AWEBaseController <AWEFeedSpeedCapsuleViewPlaybackRateDelegate, AWEFeedControllerProtocol, AWEFeedSpeedTopCapsuleViewProtocol>

@property (retain, nonatomic) AWEFeedSpeedCapsuleView *capsuleView;
@property (nonatomic) double beginScrollOffsetY;
@property (nonatomic) BOOL shouldDismissCapsuleView;
@property (nonatomic) BOOL allowAlphaChange;
@property (nonatomic) BOOL isInLongPressFastSpeed;
@property (nonatomic) double speedModeStartNewTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isLongPressLockedSpeed;

- (void)beginRefresh;
- (void)updateSkylightCapsuleView:(BOOL)a0;
- (void)showSpeedCapsuleViewIfNeeded;
- (void)hideSpeedCapsuleViewIfNeeded;
- (void)handlePureModeBlock:(BOOL)a0;
- (void)trackSpeedModePlayTime;
- (void)resetPlaybackRate;
- (void).cxx_destruct;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)setupUI;

@end
