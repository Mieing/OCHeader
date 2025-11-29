@class UIImageView, NSTimer, IESLiveVoiceMeterView, UILabel, LOTAnimationView;

@interface IESLiveVoiceMsgSendTipView : UIView

@property (retain, nonatomic) IESLiveVoiceMeterView *meterView;
@property (retain, nonatomic) UIImageView *cancelView;
@property (weak, nonatomic) NSTimer *recordTimer;
@property (retain, nonatomic) UILabel *tipLabel;
@property (nonatomic) BOOL isCountdown;
@property (retain, nonatomic) LOTAnimationView *countdownView;
@property (copy, nonatomic) id /* block */ maxTimeBLock;
@property (nonatomic) double maxRecordDuration;
@property (nonatomic) double recordDuration;

- (void)countTime;
- (void)endRecord;
- (void)volumeChange:(float)a0;
- (void)perpareCancelRecord;
- (void)continueRecord;
- (void)startRecordWithMaxTimeBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;

@end
