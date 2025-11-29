@class MJPublisherSlider, MJComposingBGMAdjustViewModel, NSString, UIView, MMUIButton, MMUILabel;
@protocol MJComposingBGMVolumeAdjustViewDelegate;

@interface MJComposingBGMVolumeAdjustView : MMUIView <MJPublisherSliderAccessibilityDelegate>

@property (retain, nonatomic) MMUIButton *backButton;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UIView *topBar;
@property (retain, nonatomic) MJPublisherSlider *bgmVolumeSlider;
@property (retain, nonatomic) MMUILabel *bgmVolumeTitleLabel;
@property (retain, nonatomic) MMUILabel *bgmVolumeValueLabel;
@property (retain, nonatomic) MJPublisherSlider *ostVolumeSlider;
@property (retain, nonatomic) MMUILabel *ostVolumeTitleLabel;
@property (retain, nonatomic) MMUILabel *ostVolumeValueLabel;
@property (readonly, nonatomic) MJComposingBGMAdjustViewModel *viewModel;
@property (weak, nonatomic) id<MJComposingBGMVolumeAdjustViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)commonInit;
- (void)setupTopBarView;
- (void)setupContentView;
- (id)sliderWithValue:(float)a0;
- (id)sliderTitleLabelWithText:(id)a0;
- (id)sliderValueLabelWithText:(id)a0;
- (void)onSliderTouchDown:(id)a0;
- (void)onSliderTouchMove:(id)a0;
- (void)onSliderTouchUp:(id)a0;
- (void)onSliderTouchCancel:(id)a0;
- (void)syncBGMVolumeValueLabelAccessibility;
- (void)syncOSTVolumeValueLabelAccessibility;
- (void)accessibilityIncrementInSlider:(id)a0;
- (void)accessibilityDecrementInSlider:(id)a0;
- (void)backButtonDidTouchUpInside:(id)a0;
- (int)vocalEnhancementFactor;
- (void).cxx_destruct;

@end
