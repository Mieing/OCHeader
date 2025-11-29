@class UIStackView, UIView, RTVVoipVideoPreviewAvatarViewContext, NSString, UIImageView, BDImageView, UILabel, UIGestureRecognizer;
@protocol RTVUserProfileManagerInterface, RTVSessionPreviewProcotol, RTVVoipConfigureManagerInterface, RxInjector, RTVVoipVideoPreviewAvatarViewDelegate;

@interface RTVVoipVideoPreviewAvatarView : UIView <UIGestureRecognizerDelegate, RTVVoipSessionObserver, RTVRendererProtocol>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVSessionPreviewProcotol> session;
@property (readonly, nonatomic) RTVVoipVideoPreviewAvatarViewContext *context;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) id<RTVVoipConfigureManagerInterface> configureManager;
@property (readonly, nonatomic) UIView *avatarViewContainer;
@property (readonly, nonatomic) UIStackView *participatorStackView;
@property (retain, nonatomic) BDImageView *roundAvatarView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) UILabel *voipStatusLabel;
@property (retain, nonatomic) UILabel *otherInviteDescribeLabel;
@property (retain, nonatomic) UIImageView *backgroundBlurView;
@property (readonly, nonatomic) UIGestureRecognizer *tapGesture;
@property (retain, nonatomic) UIView *audioVolumeIndicator;
@property (nonatomic) BOOL hasHiddenVoipStatusLabel;
@property (nonatomic, getter=isSimpleAppearance) BOOL simpleAppearance;
@property (weak, nonatomic) id<RTVVoipVideoPreviewAvatarViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)__configComponents;
- (void)voipSessionCallerRequestRoomFinished:(BOOL)a0 session:(id)a1;
- (void)__createDependency;
- (void)__updateComponents;
- (void)__addKVO;
- (void)__updateAudioVolumeIndicator:(long long)a0;
- (id)__voipStatusDescription:(long long)a0;
- (void)__setParticipatorWithVoipSession:(id)a0;
- (void)__updateParticipatorWithIMIDs:(id)a0;
- (void)__didClickAvatarView:(id)a0;
- (void)__refreshWhenBecomeSimpleAppearance;
- (void)__layoutWhenNotSimpleAppearacne;
- (BOOL)__shouldShowNickNameLabel;
- (BOOL)__receiveGroupCallingAndInviteOther;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })__insetsWhenSimplelyAppear;
- (void)switchToSimpleAppearance:(BOOL)a0;
- (void)invalidatePreferredInsetsWhenSimplelyAppear;
- (void)__updatePartialComponents;
- (void)hiddenSubViewIfNeed;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;

@end
