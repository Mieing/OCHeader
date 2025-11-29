@class CAGradientLayer, AWEIMMusicSongWaveView, UIView, UIButton;

@interface AWEIMDSPMusicCardView : AWEIMGeneralCardView

@property (retain, nonatomic) UIView *playIconConatiner;
@property (retain, nonatomic) AWEIMMusicSongWaveView *playWaveView;
@property (nonatomic) BOOL isDarkStyle;
@property (retain, nonatomic) CAGradientLayer *musicCoverGradientLayer;
@property (retain, nonatomic) UIView *musicCoverPlaceholder;
@property (retain, nonatomic) UIButton *playButton;
@property (nonatomic) unsigned long long status;
@property (nonatomic) BOOL useDefaultMusicCover;
@property (copy, nonatomic) id /* block */ playButtonTapBlock;

- (void)constraintSubviews;
- (void)iesim_themeReload:(id)a0;
- (void)p_addAdditionalViews;
- (void)p_refreshPlayingStatus;
- (void)p_refreshThemeStyle;
- (void)p_refreshMusicCover;
- (void)p_updatePlayStateIcon;
- (void)p_playButtonTap:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
