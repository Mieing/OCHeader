@class NSString;

@interface AWEPlayInteractionPadTabBarCompactController : AWEPlayInteractionNewBaseController <AWEPlayInteractionPadTabBarCompactControllerProtocol>

@property (nonatomic) BOOL hasTrackPubShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (void)videoDidActivity;
- (void)onUpdatePlayerController:(id)a0 withPlayVideoVC:(id)a1;
- (id)playVideoViewController;
- (id)aAWEPadModuleAdapter;
- (void)onPlayerPlay:(id)a0 ifPlay:(BOOL)a1;
- (BOOL)canShowDanmaku;
- (void)trackDanmakuShowIfNeeded;
- (void)startInputDanmaku;
- (void)changeDanmakuSwitchState:(BOOL)a0;
- (void)changePlayerSpeed:(double)a0;
- (BOOL)canShowSpeed;
- (BOOL)canShowClear;
- (void)trackSpeedValueSelected:(double)a0;
- (void)reset;
- (void)viewDidLoad;

@end
