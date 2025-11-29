@class CAGradientLayer, NSString, UIImageView, UILabel, UIView, MMUIButton;
@protocol MJMusicCapsuleViewDelegate;

@interface MJMusicCapsuleView : MMUIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *musicIconView;
@property (retain, nonatomic) UIView *leftLineView;
@property (retain, nonatomic) UIView *rightLineView;
@property (retain, nonatomic) UILabel *lytricLabel;
@property (retain, nonatomic) MMUIButton *micMuteButton;
@property (retain, nonatomic) MMUIButton *disableMusicButton;
@property (retain, nonatomic) UIView *gradientMaskView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) BOOL needScrollAnimation;
@property (nonatomic) double titleContentWidth;
@property (nonatomic) double titleBGViewWidth;
@property (nonatomic) BOOL isInMusicPlayingMode;
@property (readonly, nonatomic) BOOL isMicMuted;
@property (readonly, nonatomic) BOOL micEnabled;
@property (readonly, nonatomic) NSString *currentTitle;
@property (weak, nonatomic) id<MJMusicCapsuleViewDelegate> delegate;
@property (nonatomic) BOOL shouldHideLeftLine;

- (id)initWithMicEnabled:(BOOL)a0;
- (void)commonInit;
- (void)switchToNonMusicPlayingMode;
- (void)updateAccessbililtyLabelForNonMusicPlayingMode;
- (void)switchToMusicPlayingModeWithSongName:(id)a0;
- (void)updateAccessbililtyLabelForMusicPlayingMode;
- (void)addGradientLayer;
- (void)removeGradientLayer;
- (void)startAnimationIfNeeded;
- (double)calcContentWidth;
- (void)stopAnimation;
- (void)updateForMicMuted;
- (void)updateForMicUnMuted;
- (void)handleTapGesture:(id)a0;
- (void)micMuteButtonDidTouchUpInside:(id)a0;
- (void)disableMusicButtonDidTouchUpInside:(id)a0;
- (id)getMusicIconAndTitleTintColor;
- (id)getBackgroundColor;
- (id)getlineColor;
- (void).cxx_destruct;

@end
