@class IESECShopSLIProgressSlider, UIStackView, NSString, IESECTracker, UILabel, UIButton;
@protocol IESECShopSLIProgressBarDelegate;

@interface IESECShopSLIProgressElementView : IESECSliceXBaseContentElementView <IESECShopSLIProgressBarProtocol>

@property (retain, nonatomic) UIStackView *progressContainerView;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) IESECShopSLIProgressSlider *progressSlider;
@property (retain, nonatomic) UIButton *speedButton;
@property (nonatomic) BOOL isSliding;
@property (nonatomic) long long currentSpeedRatio;
@property (retain, nonatomic) IESECTracker *tracker;
@property (weak, nonatomic) id<IESECShopSLIProgressBarDelegate> delegate;
@property (readonly, nonatomic) long long currentDuration;
@property (readonly, nonatomic) long long totalDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateProgress:(double)a0 totalDuration:(double)a1;
- (void)progressSliderTouchEnded;
- (void)progressSlideChangeValue:(id)a0;
- (void)updateSpeedButtonText;
- (void)updateDurationLabelWithProgress:(double)a0 duration:(long long)a1;
- (void)speedButtonDidClick:(id)a0;
- (void)trackSpeedButtonClick;
- (void)trackProgressBarClick;
- (void)progressSliderTouchEnded:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
