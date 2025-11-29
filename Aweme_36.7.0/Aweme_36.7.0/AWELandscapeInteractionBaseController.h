@class NSString, AWEPageContext;
@protocol AWELandscapePageContextInteractionProtocol;

@interface AWELandscapeInteractionBaseController : AWEDPlayerInteractionBaseController <AWELandscapeControllerDispatchProtocol>

@property (nonatomic) BOOL appearBeforeScreenCast;
@property (readonly, weak, nonatomic) AWEPageContext<AWELandscapePageContextInteractionProtocol> *context;
@property (nonatomic) BOOL canShowWhenScreenCast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playerDidReadyForDisplay:(id)a0;
- (void)player:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (void)player:(id)a0 didChangeStallState:(long long)a1;
- (void)player:(id)a0 didChangeStallState:(long long)a1 actionType:(long long)a2 reason:(unsigned long long)a3;
- (void)player:(id)a0 onMaskInfoCallBack:(id)a1 pts:(unsigned long long)a2;
- (void)setHide:(BOOL)a0;
- (void)onPlayerWillLoopPlaying:(id)a0;
- (void)onPlayer:(id)a0 didChangeStallState:(long long)a1 actionType:(long long)a2 reason:(unsigned long long)a3;
- (void)onPlayer:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (unsigned long long)activateType;
- (void)iesPlayer:(id)a0 willInStallAction:(BOOL)a1;
- (void)onPlayerDidReadyForDisplay:(id)a0;
- (void)onPlayerBeforePrepareToPlay:(id)a0;
- (void)onPlayerAfterPrepareToPlay:(id)a0;
- (void)onPlayerMaskInfoCallBack:(id)a0 svg:(id)a1 pts:(unsigned long long)a2;
- (void)onPlayer:(id)a0 didChangeStallState:(long long)a1;
- (void)player:(id)a0 willInStallAction:(BOOL)a1;
- (void)playerBeforePrepareToPlay:(id)a0;
- (void)playerAfterPrepareToPlay:(id)a0;
- (void)updateLayoutWithAnimationOffset:(double)a0 position:(long long)a1;
- (BOOL)useGeneralPlayer;
- (void)updateControllerWithAnimationOffset:(double)a0 positon:(long long)a1;
- (void)showScreenCastView:(BOOL)a0 showFeedBack:(BOOL)a1;
- (void)playerWillLoopPlaying:(id)a0;
- (void)updateState:(long long)a0;
- (id)container;
- (void)setData:(id)a0;
- (BOOL)isInteracting;
- (void)viewDidLoad;

@end
