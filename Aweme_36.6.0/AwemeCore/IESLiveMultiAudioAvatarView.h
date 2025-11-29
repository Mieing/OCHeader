@class IESLiveMultiAudioAvatarViewConfig, IESLiveInteractionGuestEmojiContainer, UIImageView, NSString, UIView, IESLiveInteractVoiceWaveView;

@interface IESLiveMultiAudioAvatarView : UIView <IESLiveMultiAudioGuestAvatarUpdateAction>

@property (retain, nonatomic) IESLiveMultiAudioAvatarViewConfig *config;
@property (retain, nonatomic) UIImageView *avatar;
@property (retain, nonatomic) UIView *silenceContainer;
@property (retain, nonatomic) IESLiveInteractVoiceWaveView *voiceWaveView;
@property (retain, nonatomic) UIView *containerBelowEmojiContainer;
@property (retain, nonatomic) IESLiveInteractionGuestEmojiContainer *realEmojiContainer;
@property (nonatomic) long long gender;
@property (copy, nonatomic) NSString *currentScene;
@property (retain, nonatomic) UIImageView *videoSharerView;
@property (retain, nonatomic) UIView *orderSingEnlargeHeadWidget;
@property (readonly, nonatomic) IESLiveInteractionGuestEmojiContainer *emojiContainer;
@property (retain, nonatomic) UIImageView *silenceView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1;
- (void)layoutBaseUI;
- (void)updateGender:(long long)a0;
- (void)updateSilenceView;
- (void)setSilenceViewShow:(BOOL)a0;
- (void)grayAvatar:(BOOL)a0;
- (void)updateAvatarImage:(id)a0 completion:(id /* block */)a1;
- (id)getRegisterVoiceWaveView;
- (void)setOrderSingEnlargeHeadWidgetHidden:(BOOL)a0;
- (void)notifyUpdateAvatarHidden;
- (void).cxx_destruct;
- (void)updateAvatarImage:(id)a0;
- (void)refreshConstraints;

@end
