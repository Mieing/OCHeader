@class AWEPublishPaymentPreviewThumb, NSString, DUXBaseImageView, UIView, DUXBaseLabel;
@protocol AWEPublishPaymentPreviewSliderDelegate;

@interface AWEPublishPaymentPreviewSlider : UIControl

@property (weak, nonatomic) UIView *sliderView;
@property (weak, nonatomic) UIView *rectView;
@property (weak, nonatomic) UIView *activeView;
@property (weak, nonatomic) DUXBaseImageView *leftThumbImageView;
@property (weak, nonatomic) DUXBaseImageView *rightThumbImageView;
@property (weak, nonatomic) DUXBaseLabel *titleLabel;
@property (weak, nonatomic) DUXBaseLabel *valueLabel;
@property (weak, nonatomic) UIView *progressView;
@property (nonatomic) double min;
@property (nonatomic) double max;
@property (nonatomic) double slideMinValue;
@property (nonatomic) double minValue;
@property (nonatomic) double maxValue;
@property (readonly, nonatomic) double value;
@property (nonatomic) BOOL disabled;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) AWEPublishPaymentPreviewThumb *leftThumb;
@property (readonly, nonatomic) AWEPublishPaymentPreviewThumb *rightThumb;
@property (weak, nonatomic) id<AWEPublishPaymentPreviewSliderDelegate> delegate;
@property (copy, nonatomic) id /* block */ valChangeBlock;

- (void)updateLeftThumbValue:(double)a0;
- (void)updateRightThumbValue:(double)a0;
- (void)updateProgressValue:(double)a0;
- (id)initWithLeftThumb:(id)a0 rightThumb:(id)a1;
- (double)transformThumbValueToActiveX:(double)a0;
- (double)transformValueToActiveWidth;
- (double)transformThumbValueToThumbX:(double)a0;
- (void)updateValueLabelForLeftThumb:(BOOL)a0;
- (void)updateValueLabelForRightThumb:(BOOL)a0;
- (double)exactValue;
- (void)sendActionBeganSlideForThumb:(id)a0;
- (void)updateLeftThumb:(struct CGPoint { double x0; double x1; })a0;
- (void)sendActionEndSlideForThumb:(id)a0;
- (void)updateRightThumb:(struct CGPoint { double x0; double x1; })a0;
- (double)thumbMinMargin;
- (double)transformThumbXToThumbValue:(double)a0;
- (void)updateValueLabel:(double)a0 value:(double)a1 expectToHidden:(BOOL)a2;
- (void)leftThumbPanGesture:(id)a0;
- (void)rightThumbPanGesture:(id)a0;
- (void).cxx_destruct;
- (double)total;
- (void)addObserver;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupUI;

@end
