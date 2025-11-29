@class UIStackView, NSString, IESECLiveReplayDataStore, UILabel, IESECLiveVideoProgressSlider, UIButton;

@interface IESECLiveReplayProgressComponentView : UIView <IESECLiveReplayProgressDisplayProtocol, IESECLiveReplayComponentViewProtocol>

@property (retain, nonatomic) UIStackView *progressContainerView;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) IESECLiveVideoProgressSlider *progressSlider;
@property (retain, nonatomic) UIButton *speedButton;
@property (nonatomic) BOOL isSliding;
@property (nonatomic) long long currentSpeedRatio;
@property (retain, nonatomic) IESECLiveReplayDataStore *dataStore;
@property (readonly, nonatomic) long long currentDuration;
@property (readonly, nonatomic) long long totalDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dataStoreChanged;
- (void)updateProgress:(double)a0 totalDuration:(double)a1;
- (void)progressSliderTouchEnded;
- (void)progressSlideChangeValue:(id)a0;
- (void)updateSpeedButtonText;
- (void)updateDurationLabelWithProgress:(double)a0 duration:(long long)a1;
- (void)speedButtonDidClick:(id)a0;
- (void)progressSliderTouchEnded:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
