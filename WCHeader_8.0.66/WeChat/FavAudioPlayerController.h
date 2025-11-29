@class NSString, UIImageView, UIView, FavAudioInfo, UILabel;

@interface FavAudioPlayerController : MMUIView <IFavAudioPlayerExt> {
    UIView *m_backgroundView;
    BOOL m_bBtnForPlay;
    UILabel *m_durationLabel;
    unsigned int m_uiVoiceTime;
    UIImageView *playingImageView;
}

@property (retain, nonatomic) FavAudioInfo *m_audioInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFavAudioInfo:(id)a0;
- (void)initView;
- (void)layoutSubviewsWithDefault;
- (void)layoutSubviews;
- (void)initBtn;
- (void)initDurationLabel;
- (id)getDuration:(int)a0;
- (void)updateBtnImage;
- (void)showNormalView;
- (void)showPlayingView;
- (BOOL)isCurrentControllForPlayer;
- (void)onPlayBtnClick;
- (void)play;
- (void)stop;
- (void)OnBeginPlay:(id)a0;
- (void)OnEndPlay:(id)a0;
- (void)OnPlayError:(id)a0;
- (void)OnAudioPlaying:(id)a0 Offset:(unsigned int)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)onTouchBegin:(id)a0;
- (void)onTouchEnd:(id)a0;
- (void)setSelected;
- (void)setUnSelected;
- (void)onClickObject;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
