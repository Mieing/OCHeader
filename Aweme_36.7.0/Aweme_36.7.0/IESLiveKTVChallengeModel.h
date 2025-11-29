@class IESLiveCountTimer;
@protocol IESLiveKTVChallengeModelDelegate;

@interface IESLiveKTVChallengeModel : NSObject

@property (retain, nonatomic) IESLiveCountTimer *challengeTimer;
@property (weak, nonatomic) id<IESLiveKTVChallengeModelDelegate> delegate;
@property (nonatomic) BOOL isOn;
@property (nonatomic) int challengeType;
@property (nonatomic) unsigned long long targetDurationSecond;
@property (nonatomic) long long remainTime;
@property (nonatomic) long long challengeTarget;
@property (nonatomic) double currentScore;
@property (nonatomic) unsigned long long challengeStatus;
@property (nonatomic) BOOL isSuccess;
@property (nonatomic) BOOL isFail;

- (void)startCountDown;
- (void)cancelCountDown;
- (void)updateChallengeStatusResponse:(id)a0;
- (void)updateChallengeConfigMessage:(id)a0;
- (void)updateChallengeStatusMessage:(id)a0;
- (void)updateMidiScore:(double)a0;
- (void).cxx_destruct;
- (void)prepare;

@end
