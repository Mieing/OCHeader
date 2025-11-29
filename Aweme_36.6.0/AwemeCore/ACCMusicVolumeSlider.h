@class NSString, UIImageView, UIImage, UILabel, UIView;

@interface ACCMusicVolumeSlider : UIControl

@property (nonatomic) BOOL darkTheme;
@property (retain, nonatomic) UIView *trackBgView;
@property (retain, nonatomic) UIView *trackView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *valueLabel;
@property (nonatomic) struct CGPoint { double x; double y; } previousLocation;
@property (nonatomic) float maximumValue;
@property (nonatomic) float minimumValue;
@property (nonatomic) float value;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *iconImage;

- (void)layoutTrackView;
- (void)layoutIconImageView;
- (void)updateValueByAddingPercentage:(double)a0;
- (id)initWithDarkTheme:(BOOL)a0;
- (void)handlePan:(id)a0;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (void)layoutSubviews;
- (void)setEnabled:(BOOL)a0;
- (id)accessibilityValue;
- (void)setupUI;

@end
