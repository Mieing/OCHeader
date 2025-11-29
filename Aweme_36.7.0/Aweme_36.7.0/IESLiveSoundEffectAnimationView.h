@class UILabel, CADisplayLink, IESLiveVoiceMeterView;

@interface IESLiveSoundEffectAnimationView : UIView

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) IESLiveVoiceMeterView *meterView;
@property (retain, nonatomic) CADisplayLink *recorderMeterTimer;

- (long long)shuffleTime:(long long)a0 upper:(long long)a1;
- (void)addLongPressMeterView;
- (void)stopRecorderMeterTimer;
- (void)refreshRecorderMeter;
- (void)startRecorderMeterTimer;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addLabel;

@end
