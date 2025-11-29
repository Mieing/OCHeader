@class NSString, MMUILabel, MMTimer;
@protocol WCAdCountdownViewDelegate;

@interface WCAdCountdownView : MMUIView

@property (retain, nonatomic) NSString *title;
@property (nonatomic) long long endTime;
@property (nonatomic) double maxWidth;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *dayNumLabel;
@property (retain, nonatomic) MMUILabel *dayUnitLabel;
@property (retain, nonatomic) MMUILabel *hourNumLabel;
@property (retain, nonatomic) MMUILabel *timeSeparator1Label;
@property (retain, nonatomic) MMUILabel *minuteNumLabel;
@property (retain, nonatomic) MMUILabel *timeSeparator2Label;
@property (retain, nonatomic) MMUILabel *secondNumLabel;
@property (retain, nonatomic) MMTimer *updateTimer;
@property (weak, nonatomic) id<WCAdCountdownViewDelegate> delegate;

- (id)initWithTitle:(id)a0 endTime:(long long)a1 maxWidth:(double)a2;
- (void)dealloc;
- (void)initView;
- (id)makeTitleLabel;
- (id)makeDayNumLabel;
- (id)makeDayUnitLabel;
- (id)makeTimeSeparatorLabel;
- (id)makeTimeNumLabel;
- (void)initTimer;
- (void)startCountdown;
- (void)stopCountdown;
- (void)onTimerUpdateView;
- (void)updateView;
- (void)calcRealTitleWidth:(BOOL)a0;
- (void).cxx_destruct;

@end
