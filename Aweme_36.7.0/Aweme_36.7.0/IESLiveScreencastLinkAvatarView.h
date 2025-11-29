@class NSString, IESLiveVoiceWave, UIImageView, UIImage, UIView, HTSLiveAudioSpeakingImageList, IESLiveScreencastLinkAvatarViewConfig;
@protocol IESLiveWebPPlayer;

@interface IESLiveScreencastLinkAvatarView : UIView

@property (retain, nonatomic) IESLiveScreencastLinkAvatarViewConfig *config;
@property (retain, nonatomic) UIImageView *avatar;
@property (retain, nonatomic) UIView *silenceView;
@property (retain, nonatomic) UIView *silenceContainer;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *animationViewStart;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *animationViewLoop;
@property (retain, nonatomic) UIView *containerBelowEmojiContainer;
@property (nonatomic) BOOL stopAnimation;
@property (nonatomic) long long gender;
@property (nonatomic) unsigned long long speakingType;
@property (nonatomic) unsigned long long previousSpeakingType;
@property (retain, nonatomic) HTSLiveAudioSpeakingImageList *speakingImageList;
@property (retain, nonatomic) IESLiveVoiceWave *limitVoiceWave;
@property (retain, nonatomic) UIImage *normalSpeakingImage;
@property (nonatomic) BOOL needUpdateSpeakingImage;
@property (copy, nonatomic) NSString *currentScene;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1;
- (void)startMultiTalkingAnimation;
- (void)stopMultiTalkingAnimation;
- (void)loopSpeakingAnimationIfNeeded;
- (void)updateSoundAnimationDidChangeWithSpeakingImageList:(id)a0;
- (void)layoutBaseUI;
- (void)updateSoundAnimationWithSpeakingType:(unsigned long long)a0;
- (id)voiceImageWithVoiceWave:(id)a0 :(unsigned long long)a1;
- (id)defaultStartWebpImage;
- (id)defaultLoopWebpImage;
- (void)startTalkingAnimation;
- (void)stopTalkingAnimation;
- (void)startMultiTalkingAnimationIfNeededWithSpeakingType:(unsigned long long)a0;
- (BOOL)isSpeakingImageListValid:(id)a0;
- (void)updateGender:(long long)a0;
- (void)updateSoundAnimationWithStartURLs:(id)a0 loopURLs:(id)a1;
- (void).cxx_destruct;

@end
