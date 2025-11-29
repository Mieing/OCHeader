@class IESLiveScreencastAnchorPFSliderView, IESLiveAnchorPFMicrophoneSlidersModel, UIView, UIButton;

@interface IESLiveScreencastAnchorPFMicrophoneSlidersView : UIView

@property (retain, nonatomic) IESLiveAnchorPFMicrophoneSlidersModel *model;
@property (retain, nonatomic) UIView *sliderContainerView;
@property (retain, nonatomic) IESLiveScreencastAnchorPFSliderView *speakerSliderView;
@property (retain, nonatomic) IESLiveScreencastAnchorPFSliderView *micVolumeSliderView;
@property (retain, nonatomic) IESLiveScreencastAnchorPFSliderView *screenInternalVolumeSliderView;
@property (retain, nonatomic) UIButton *micVolumeSliderDisableButton;
@property (nonatomic) BOOL micVolumeSliderEnable;
@property (copy, nonatomic) id /* block */ speakerSliderValueEndChange;
@property (copy, nonatomic) id /* block */ micSliderValueEndChange;
@property (copy, nonatomic) id /* block */ screenInternalSliderValueEndChange;
@property (copy, nonatomic) id /* block */ questionButtonDidClick;
@property (copy, nonatomic) id /* block */ micVolumeSliderDisableButtonDidClick;

- (void)updateUIWithModel:(id)a0;
- (void)updateMicSliderEnable:(BOOL)a0;
- (void)micVolumeSliderDisableButtonDidClick:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
