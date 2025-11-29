@class UILabel, UISlider;

@interface IESLiveNewKTVVolumeSliderViewDH : UIView

@property (nonatomic) BOOL isTouching;
@property (nonatomic) BOOL iOS26AdaptEnable;
@property (copy, nonatomic) id /* block */ valueChangedEvent;
@property (nonatomic) float value;
@property (nonatomic) float minimumValue;
@property (nonatomic) float maximumValue;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *valueLabel;
@property (retain, nonatomic) UISlider *volumeSlider;

- (void)freshTitleLabel;
- (void)sliderValueChangedBegan:(id)a0;
- (void)sliderValueChangedMoved:(id)a0;
- (void)sliderValueChangedEnd:(id)a0;
- (void)sliderValueChanged:(id)a0 forEvent:(id)a1;
- (void)updateTitleWidth:(double)a0;
- (void).cxx_destruct;
- (id)init;

@end
