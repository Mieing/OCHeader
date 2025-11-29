@class MMUIButton, MJSegmentAudioInspectorViewModel, MJPublisherSlider, MMUILabel;

@interface MJSegmentVolumeInspectorView : MJSegmentInspectorView

@property (retain, nonatomic) MMUIButton *muteButton;
@property (retain, nonatomic) MMUILabel *valueLabel;
@property (retain, nonatomic) MJPublisherSlider *plainSlider;
@property (readonly, nonatomic) MJSegmentAudioInspectorViewModel *viewModel;

- (void)commonInit;
- (void)setupViews;
- (void)layoutViews;
- (void)sliderValueChanged:(id)a0;
- (void)setButtonMuted:(id)a0;
- (void)setButtonUnMuted:(id)a0;
- (void)sliderDidFinishChangeValue:(id)a0;
- (void)muteButtonDidTouchUpInside:(id)a0;
- (void)syncWithModel;
- (void).cxx_destruct;

@end
