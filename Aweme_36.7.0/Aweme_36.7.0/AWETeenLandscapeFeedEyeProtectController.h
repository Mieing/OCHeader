@class NSString;

@interface AWETeenLandscapeFeedEyeProtectController : AWEBaseController <AWETeenEyeProtectionDelegate, AWETeenLandscapeFeedControllerProtocol>

@property (nonatomic) BOOL initSeekEnded;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL hasTriggered;
@property (nonatomic) double playedDuration;
@property (nonatomic) double totalDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isLandScape;
- (void)playerWillLoopPlayingWithAwemeID:(id)a0 videoID:(id)a1 currentTime:(double)a2;
- (BOOL)shouldShowEyeProtection:(BOOL)a0;
- (void)syncPlayTimeWithAwemeModel:(id)a0 playedDuration:(double)a1 totalDuration:(double)a2;
- (void)setHiddenInteractionView:(BOOL)a0 completion:(id /* block */)a1;
- (id)videoCanvasImage;
- (double)videoCanvasHeight;
- (id)currentFeedPageContext;
- (void)playBackActionDidChange:(long long)a0 isReady:(BOOL)a1;
- (void)didVideoChanged:(id)a0;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (id)currentModel;
- (void)viewWillDisappear;

@end
