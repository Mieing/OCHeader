@class UIStackView, NSTimer, UIView, NSString, BDImageView, MASConstraint, UILabel, RTVVoipSession;
@protocol RTVVoipConfigureManagerInterface, RxInjector, RTVUserProfileManagerInterface;

@interface RTVVoipUserRegionView : UIView <RTVVoipSessionObserver>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) id<RTVVoipConfigureManagerInterface> configureManager;
@property (readonly, nonatomic) UIView *avatarBackView;
@property (readonly, nonatomic) BDImageView *avatarImageView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *subtitleLabel;
@property (readonly, nonatomic) UILabel *subtitleLoadingLabel;
@property (retain, nonatomic) MASConstraint *titleLabelOffset;
@property (retain, nonatomic) NSTimer *subtitleAnimationTimer;
@property (nonatomic) unsigned long long subtitleAnimationIndex;
@property (readonly, nonatomic) UILabel *audioTimeLabel;
@property (readonly, nonatomic) UIStackView *participatorStackView;
@property (readonly, weak, nonatomic) RTVVoipSession *lastSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)__createComponents;
- (void)renderModel:(id)a0;
- (void)voipSession:(id)a0 typeDidChangeTo:(long long)a1 fromType:(long long)a2;
- (void)rtvSession:(id)a0 statusDidChangeTo:(long long)a1 fromStatus:(long long)a2;
- (void)voipSession:(id)a0 runTimeDidChange:(double)a1;
- (void)voipSessionCallerRequestRoomFinished:(BOOL)a0 session:(id)a1;
- (void)rtvSession:(id)a0 contextKeyPathChange:(id)a1 fromValue:(id)a2 toValue:(id)a3;
- (void)rtvSession:(id)a0 participatorsDidChange:(id)a1 oldParticipators:(id)a2;
- (void)voipSessionVoipInfoPrepareReady:(id)a0;
- (void)__configureComponentWithVoipSession:(id)a0;
- (void)__setLayoutWithVoipSession:(id)a0;
- (void)__setTitleAndAvatarWithVoipSession:(id)a0;
- (void)__setSubtitleWithVoipSession:(id)a0;
- (void)__setParticipatorWithVoipSession:(id)a0;
- (void)__createAudioTimeLabelIfNeededWithVoipSession:(id)a0;
- (void)__setupLayoutWhenAudio;
- (void)__setupLayoutWhenVideo;
- (void)__configureComponentsWhenAudio;
- (void)__configureComponentsWhenVideo;
- (void)__setSubtitle:(id)a0 loadingAnimation:(BOOL)a1;
- (id)__subtitleConfigurationForSession:(id)a0;
- (void)__setUserInfoWithIMID:(id)a0 needAvatar:(BOOL)a1;
- (id)__labelTextShadow;
- (id)__attributedTextWithText:(id)a0 shadowValue:(id)a1;
- (void)__updateParticipatorWithIMIDs:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
