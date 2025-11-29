@class IESLiveAnchorPFMicrophoneSliderModel, UISlider, UILabel;

@interface IESLiveAnchorPFMicrophoneSlider : UIView

@property (retain, nonatomic) IESLiveAnchorPFMicrophoneSliderModel *model;
@property (nonatomic) BOOL isMoving;
@property (retain, nonatomic) UISlider *slider;
@property (retain, nonatomic) UILabel *valueLabel;

- (void)updateUIWithModel:(id)a0;
- (void)sliderTouchUp:(id)a0;
- (void)sliderValueChanged:(id)a0 event:(id)a1;
- (void)sliderValueChanged:(id)a0;
- (void).cxx_destruct;
- (void)sliderTouchDown:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)setupLayout;

@end
