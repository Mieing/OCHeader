@class NSString, AWEMusicStreamingButton;
@protocol AWEMusicPlayerActionViewDelegate;

@interface AWEMusicPlayerActionView : UIView

@property (retain, nonatomic) AWEMusicStreamingButton *loopButton;
@property (retain, nonatomic) AWEMusicStreamingButton *queueButton;
@property (retain, nonatomic) AWEMusicStreamingButton *preButton;
@property (retain, nonatomic) AWEMusicStreamingButton *nextButton;
@property (retain, nonatomic) AWEMusicStreamingButton *playButton;
@property (nonatomic) BOOL isSingle;
@property (nonatomic) BOOL isPlaying;
@property (weak, nonatomic) id<AWEMusicPlayerActionViewDelegate> delegate;
@property (nonatomic, getter=isPlayingStatus) BOOL playingStatus;
@property (nonatomic) unsigned long long loopMode;
@property (copy, nonatomic) NSString *loopModeAccessibilityLabel;

- (void)setPlayStatus:(BOOL)a0;
- (void)setLoopStatus:(BOOL)a0;
- (void)setButton:(id)a0 imageName:(id)a1;
- (void)loopButtonTapped:(id)a0;
- (void)queueButtonTapped:(id)a0;
- (void)preButtonTapped:(id)a0;
- (void)loopButtonTapped_IMP:(id)a0;
- (void)preButtonTapped_IMP:(id)a0;
- (void)nextButtonTapped_IMP:(id)a0;
- (void)playButtonTapped_IMP:(id)a0;
- (void)queueButtonTapped_IMP:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setup;
- (void)nextButtonTapped:(id)a0;
- (void)playButtonTapped:(id)a0;

@end
