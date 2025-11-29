@class MMLiveMusicStyleSlider, MMUILabel;

@interface MMFinderLiveMusicVolumnContentView : UIView

@property (retain, nonatomic) MMLiveMusicStyleSlider *sliderBar;
@property (retain, nonatomic) MMUILabel *progressTipLabel;
@property (copy, nonatomic) id /* block */ volumnAdjustCallback;
@property (nonatomic) int previousVolumeValue;
@property (nonatomic) BOOL isUpdatingWithSEI;

+ (int)getAdaptedProgressValue:(double)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutSliderBar;
- (void)layoutProgressTipLabel;
- (void)onMusicStyleSliderValueChangedForceUpdate:(id)a0;
- (void)onMusicStyleSliderValueChanged:(id)a0;
- (void)updateProgressTip:(int)a0;
- (void)reduceVolumnToLowVoice;
- (void)recoverPreviousVolumn;
- (int)currentVolumn;
- (void)setVolumn:(int)a0;
- (void)updateUIWithVolumn:(int)a0;
- (void).cxx_destruct;

@end
