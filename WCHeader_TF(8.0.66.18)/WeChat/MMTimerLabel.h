@interface MMTimerLabel : UILabel {
    BOOL _isShowHourDefault;
    BOOL _isActive;
    BOOL _isCountDown;
}

@property (nonatomic) long long second;
@property (nonatomic) long long minute;
@property (nonatomic) long long hour;
@property (nonatomic) BOOL isInMinutesMode;
@property (copy, nonatomic) id /* block */ countDownCompleteCallback;
@property (copy, nonatomic) id /* block */ countDownRemainTimeCallback;
@property (copy, nonatomic) id /* block */ handleTextBlock;

- (void)updateLabel;
- (void)increaseTime;
- (void)setIsShowHourDefault:(BOOL)a0;
- (void)reset;
- (void)startTimer;
- (void)stopTimer;
- (void)pauseTimer;
- (BOOL)isActive;
- (unsigned int)currentTime;
- (void)dealloc;
- (void)countDownFromHour:(long long)a0 miniute:(long long)a1 second:(long long)a2 complte:(id /* block */)a3 remain:(id /* block */)a4;
- (void).cxx_destruct;

@end
