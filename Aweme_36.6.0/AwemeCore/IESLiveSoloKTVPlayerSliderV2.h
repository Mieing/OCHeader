@class IESLiveSoloKTVPlayerInternalSlider, UILabel, UIView, IESSoloKTVDrawCGImpl;

@interface IESLiveSoloKTVPlayerSliderV2 : UIView

@property (retain, nonatomic) IESLiveSoloKTVPlayerInternalSlider *slider;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIView *dotView;
@property (retain, nonatomic) IESSoloKTVDrawCGImpl *asyncDraw;
@property (nonatomic) long long scaleRatio;
@property (copy, nonatomic) id /* block */ sliderValueChangedBlock;

- (void)sliderValueChanged:(id)a0 forEvent:(id)a1;
- (void)updateTrackImageWithStartColor:(id)a0 endColor:(id)a1;
- (void)updateSliderToLarge;
- (void)updateDotFrame;
- (void)updateSliderToNormal;
- (void)sliderTouchPhaseBegan:(id)a0;
- (void)sliderTouchPhaseMoved:(id)a0;
- (void)sliderTouchPhaseEnd:(id)a0;
- (void)updateDurationText:(double)a0;
- (void).cxx_destruct;
- (float)getDuration;
- (id)init;
- (void)updateValue:(double)a0;
- (void)updateDuration:(double)a0;

@end
