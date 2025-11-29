@class IESLiveGCDTimer, NSString, IESLiveSelfDisciplineTimerView;
@protocol IESLiveInteractUserModel;

@interface IESLiveSelfDisciplineTimerViewModel : NSObject

@property (weak, nonatomic) IESLiveSelfDisciplineTimerView *timerView;
@property (retain, nonatomic) IESLiveGCDTimer *sourceTimer;
@property (nonatomic) BOOL isPause;
@property (retain, nonatomic) id<IESLiveInteractUserModel> userModel;
@property (copy, nonatomic) NSString *selfDisciplineTime;
@property (nonatomic) long long selfDisciplineTimeValue;
@property (nonatomic) unsigned long long timeLabelState;

- (void)onClicked;
- (void)bindView:(id)a0;
- (id)formatTimeString:(long long)a0;
- (BOOL)didTimeLabelSuccess;
- (id)initWithDiContext:(id)a0 userModel:(id)a1;
- (void)p_refeshSelfDisciplineTime;
- (BOOL)p_isUserAnchor:(id)a0;
- (void)updateState:(unsigned long long)a0;
- (void)stopTimer;
- (void).cxx_destruct;
- (void)startTimer;
- (id)currentConfig;
- (void)reset;
- (void)pauseTimer;
- (void)dealloc;
- (void)updateWithModel:(id)a0;

@end
