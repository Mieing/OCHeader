@class IESLiveInteractionGuestEmojiContainer, NSString, UIImageView, IESLiveMultiAudioKTVSingStatusView, IESLiveInteractionGuestAFKOverlapView, IESLiveInteractVoiceWaveView;
@protocol IESLiveCompoundSubscription, IESLiveInteractVoiceWaveRouter, IESLiveInteractUserModel;

@interface IESLiveMultiAudioKTVAnchorSeatView : UIView <IESLiveMultiAudioAnchorSeatViewProtocol, IESLiveInteractSeatProvider>

@property (retain, nonatomic) UIImageView *avatar;
@property (retain, nonatomic) UIImageView *silenceImage;
@property (retain, nonatomic) UIImageView *silenceView;
@property (retain, nonatomic) IESLiveMultiAudioKTVSingStatusView *singStatusView;
@property (retain, nonatomic) IESLiveInteractionGuestEmojiContainer *emojiContainer;
@property (retain, nonatomic) NSString *currentUserID;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (retain, nonatomic) IESLiveInteractVoiceWaveView *voiceWaveView;
@property (weak, nonatomic) id<IESLiveInteractVoiceWaveRouter> voiceWaveRouter;
@property (retain, nonatomic) IESLiveInteractionGuestAFKOverlapView *afkView;
@property (nonatomic) double scale;
@property (retain, nonatomic) NSString *linkmicFancticketStr;
@property (copy, nonatomic) id /* block */ onFanticketInfoViewClicked;
@property (readonly, nonatomic) BOOL isShowingGuideAnimation;
@property (nonatomic) BOOL isEnlarge;
@property (readonly, nonatomic) id<IESLiveInteractUserModel> guest;
@property (copy, nonatomic) id /* block */ onUserViewClicked;
@property (nonatomic) BOOL needShowIncomePrompt;
@property (nonatomic) BOOL disableSilence;
@property (nonatomic) BOOL disableEmoji;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)emptyImageView;
- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (id)nickNameView;
- (void)updateWithGuest:(id)a0;
- (void)p_disposable;
- (void)updateFanticketAreaHidden:(BOOL)a0;
- (void)updateHost:(id)a0 withSendGiftEnable:(BOOL)a1;
- (void)updateSingStatus:(unsigned long long)a0;
- (void)setupVoiceWaveRouter:(id)a0;
- (id)fanticketView;
- (void)dynamicUpdateItemInfo:(id)a0;
- (id)linkmicUser;
- (void)dynamicResetWithIds:(id)a0;
- (void)dynamicUpdateSeatUIItemInfo:(id)a0;
- (id)interactGiftContainer;
- (id)emojiWidgetContainer;
- (id)silenceImageKTVView;
- (void)startGuideAnimationWithBubbleData:(id)a0 endBlock:(id /* block */)a1;
- (id)registerVoiceWaveWithModel:(id)a0;
- (void)addSilenceImage;
- (void)addSingStatusView;
- (void)updateTag:(id)a0;
- (id)observeSilence:(id)a0;
- (id)observeAfkWithModel:(id)a0;
- (void)updateAvatarWithUser:(id)a0 complete:(id /* block */)a1;
- (id)initWithScale:(double)a0 diContext:(id)a1;
- (id)curFanticketView;
- (void).cxx_destruct;
- (id)backgroundImageView;
- (id)viewType;
- (void)dealloc;
- (id)avatarImageView;
- (void)layoutUI;

@end
