@class IESLiveAudiencePauseTipView, NSString, UIView, IESLivePauseBackgroundView, MASConstraint;

@interface IESLiveAudienceLivePauseFragment : IESLiveRoomComponent <HTSLiveMessageSubscriber, IESLiveSocialInteractAction>

@property (weak, nonatomic) IESLiveAudiencePauseTipView *indicatorView;
@property (weak, nonatomic) IESLivePauseBackgroundView *backgroundView;
@property (weak, nonatomic) UIView *simpleBkgGradView;
@property (nonatomic) BOOL isKeyboardShowing;
@property (nonatomic) BOOL hideAvatarBgByPaused;
@property (retain, nonatomic) MASConstraint *tipViewCenterY;
@property (retain, nonatomic) MASConstraint *tipViewCenterX;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentMount;
- (void)componentDidAppear;
- (void)componentOrientationChanged:(long long)a0;
- (void)addNotifications;
- (void)handleKeyboardShowNoti:(id)a0;
- (void)handleKeyboardHideNoti:(id)a0;
- (void)bindActions;
- (void)currentServerLayoutDidChangedFrom:(id)a0 to:(id)a1;
- (void)hideAudioBgView;
- (void)showAudioBgView;
- (void)addPausedIndicatorView;
- (void)addStreamAbnormalView;
- (void)addAnchorAvatarBlurView;
- (void)trackPauseTipShowWithMessage:(id)a0;
- (void)removePausedIndicatorView;
- (void)removeStreamAbnormalView;
- (void)removeAnchorAvatarBlurView;
- (BOOL)canAddIndicatorView;
- (void)layoutIndicatorView;
- (void)addAvatarBlurViewWithImageUrls:(id)a0;
- (BOOL)canChangeAudioBgStatus;
- (void).cxx_destruct;
- (void)dealloc;
- (void)messageReceived:(id)a0;

@end
