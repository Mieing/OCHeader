@class NSString;

@interface AWETeenFeedEyeProtectController : AWETeenFeedBaseController <AWETeenEyeProtectionDelegate>

@property (nonatomic) BOOL initSeekEnded;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL isResign;
@property (nonatomic) BOOL hasTriggered;
@property (nonatomic) double playedDuration;
@property (nonatomic) double totalDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isLandScape;
- (void)p_appWillResignActive:(id)a0;
- (void)playerWillLoopPlayingWithAwemeID:(id)a0 videoID:(id)a1 currentTime:(double)a2;
- (BOOL)shouldShowEyeProtection:(BOOL)a0;
- (void)syncPlayTimeWithAwemeModel:(id)a0 playedDuration:(double)a1 totalDuration:(double)a2;
- (void)setHiddenInteractionView:(BOOL)a0 completion:(id /* block */)a1;
- (id)videoCanvasImage;
- (double)videoCanvasHeight;
- (id)currentFeedPageContext;
- (void)playBackActionDidChange:(long long)a0 isReady:(BOOL)a1;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (id)currentModel;
- (void)viewWillDisappear;
- (void)p_applicationDidBecomeActive:(id)a0;

@end
