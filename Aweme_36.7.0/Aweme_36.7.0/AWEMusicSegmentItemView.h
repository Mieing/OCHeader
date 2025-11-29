@class UIFont, AWEMusicSegmentItem, LOTAnimationView, UILabel;

@interface AWEMusicSegmentItemView : UIView

@property (retain, nonatomic) AWEMusicSegmentItem *item;
@property (retain, nonatomic) UILabel *darkLabel;
@property (retain, nonatomic) UILabel *lightLabel;
@property (retain, nonatomic) LOTAnimationView *darkWaveView;
@property (retain, nonatomic) LOTAnimationView *lightWaveView;
@property (nonatomic) BOOL isPlaying;
@property (retain, nonatomic) UIFont *font;

- (void)updateSelectedProgress:(double)a0 darkTheme:(BOOL)a1 themeChanged:(BOOL)a2;
- (void)updateTitleAlpha:(double)a0 darkTheme:(BOOL)a1;
- (void)willEnterForegroundNotify:(id)a0;
- (void)updatePlayingViewAlpha:(double)a0 darkTheme:(BOOL)a1 themeChanged:(BOOL)a2 increasing:(BOOL)a3;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)setup;
- (id)initWithItem:(id)a0;

@end
