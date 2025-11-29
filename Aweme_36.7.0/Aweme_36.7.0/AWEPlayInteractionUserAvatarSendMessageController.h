@class NSString;

@interface AWEPlayInteractionUserAvatarSendMessageController : AWEBaseController <AWEPlayInteractionUserAvatarLifeCycleProtocol, AWEPlayInteractionUserAvatarSendMessageProtocol>

@property (nonatomic) BOOL shouldTrackSendViewShowingEvent;
@property (nonatomic) BOOL isShowVoipSendMessageView;
@property (nonatomic) BOOL hitLightInteractionReverse;
@property (nonatomic) BOOL isShowAudio;
@property (nonatomic) BOOL isShowVideo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)userAvatarView;
- (BOOL)shouldShowSendMessageView;
- (void)initController;
- (void)controllerViewDidDisappear;
- (void)controllerWillDisplay;
- (void)controllerDidEndDisplaying;
- (void)controllerViewDidLayout;
- (void)controllerStartConfigAvatarView:(id)a0;
- (void)controllerPlay;
- (void)controllerReset;
- (void)p_updateSendMessageView:(BOOL)a0;
- (void)updateSendMessageView:(BOOL)a0;
- (void)onSendMessageViewClicked:(id)a0;
- (void)playSendMessageGuideAnimationIfNeeded;
- (BOOL)shouldShowVoipIcon;
- (BOOL)shouldShowSendMessageGuideAnimation;
- (BOOL)p_isShowVoipByAgeMinorOrHighlyDangerous;
- (void)p_showSendMessageView:(id)a0 shouldShowSendMessageView:(BOOL)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)configAndShowPopoverActionSheet;
- (BOOL)enableVoipCall;
- (void)startAudioVoipEnterFrom:(long long)a0;
- (void)startVideoVoipEnterFrom:(long long)a0;
- (id)model;
- (id)viewModel;

@end
