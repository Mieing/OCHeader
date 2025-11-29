@class IESLiveMultiAudioAvatarViewConfig, IESLiveInteractionGuestAFKOverlapView, IESLiveMultiAudioKTVSingStatusView, IESLiveMultiAudioAvatarView, IESLiveFastMatchEnterAnimationView, IESLiveInteractVoiceWaveView, NSString;
@protocol IESLiveCompoundSubscription, IESLiveInteractVoiceWaveRouter, IESLiveInteractUserModel;

@interface IESLiveMultiAudioKTVGuestInfoView : UIView <HTSGuestInfoRenderer, IESLiveInteractSeatProvider>

@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (retain, nonatomic) IESLiveMultiAudioAvatarViewConfig *config;
@property (retain, nonatomic) IESLiveMultiAudioAvatarView *avatarContainer;
@property (retain, nonatomic) IESLiveMultiAudioKTVSingStatusView *singStatusView;
@property (weak, nonatomic) IESLiveFastMatchEnterAnimationView *seatEnterView;
@property (retain, nonatomic) IESLiveInteractionGuestAFKOverlapView *afkView;
@property (retain, nonatomic) IESLiveInteractVoiceWaveView *voiceWaveView;
@property (weak, nonatomic) id<IESLiveInteractVoiceWaveRouter> voiceWaveRouter;
@property (nonatomic) BOOL isFeed;
@property (readonly, nonatomic) id<IESLiveInteractUserModel> guest;
@property (copy, nonatomic) id /* block */ onUserViewClicked;
@property (nonatomic) BOOL needShowIncomePrompt;
@property (nonatomic) BOOL disableSilence;
@property (nonatomic) BOOL disableEmoji;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)emptyImageView;
- (void)didTapInfoView;
- (id)nickNameView;
- (void)updateWithGuest:(id)a0;
- (void)layoutBaseUI;
- (void)p_disposable;
- (void)updateFanticketAreaHidden:(BOOL)a0;
- (void)updateHost:(id)a0 withSendGiftEnable:(BOOL)a1;
- (void)updateSingStatus:(unsigned long long)a0;
- (void)setupVoiceWaveRouter:(id)a0;
- (id)emojiContainer;
- (id)fanticketView;
- (void)dynamicUpdateItemInfo:(id)a0;
- (id)linkmicUser;
- (void)dynamicResetWithIds:(id)a0;
- (void)dynamicUpdateSeatUIItemInfo:(id)a0;
- (id)interactGiftContainer;
- (id)emojiWidgetContainer;
- (id)silenceImageKTVView;
- (id)registerVoiceWaveWithModel:(id)a0;
- (void)showFastMatchEnterAnimationIfNeeded;
- (id)observeAfkWithModel:(id)a0;
- (id)initWithSmallMode:(BOOL)a0 isFeed:(BOOL)a1 diContext:(id)a2;
- (void)updateTagShowing:(id)a0;
- (id)observeSilenceStatus:(id)a0;
- (void).cxx_destruct;
- (id)backgroundImageView;
- (void)dealloc;
- (id)avatarImageView;

@end
