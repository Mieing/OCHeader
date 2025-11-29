@class ACCAnimatedButton;
@protocol ACCCropVideoControlBarDelegate;

@interface ACCCropVideoControlBar : UIView

@property (retain, nonatomic) ACCAnimatedButton *resetButton;
@property (retain, nonatomic) ACCAnimatedButton *previousButton;
@property (retain, nonatomic) ACCAnimatedButton *playButton;
@property (retain, nonatomic) ACCAnimatedButton *nextButton;
@property (retain, nonatomic) ACCAnimatedButton *applyAllButton;
@property (weak, nonatomic) id<ACCCropVideoControlBarDelegate> delegete;

- (void)updatePlayButtonStatusWithIsPlaying:(BOOL)a0;
- (void)updateWithCurrentIndex:(unsigned long long)a0 totalCount:(unsigned long long)a1 enablePlayButton:(BOOL)a2 hidePlayButton:(BOOL)a3;
- (void)updateResetButtonWithEnabled:(BOOL)a0;
- (void)resetButtonDidClick;
- (void)previousButtonDidClick;
- (void)playButtonDidClick;
- (void)nextButtonDidClick;
- (void)applyAllButtonDidClick;
- (void)updateApplyAllButtonWithEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupSubviews;

@end
