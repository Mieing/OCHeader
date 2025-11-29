@interface IESLivePlayerPullStreamDecisionCenter : NSObject

@property (nonatomic) BOOL forbidPullStreamByTimedOff;
@property (nonatomic) unsigned long long backgroundNetCardStage;
@property (copy, nonatomic) id /* block */ timeOffTotalCountTimeBlock;

+ (BOOL)enablePullStreamDecisionCenterOn;

- (void)setForbidPullStreamByTimedOff:(BOOL)a0 callTrace:(id)a1;
- (BOOL)shouldForbidPullStream;
- (void)setBackgroundNetCardStage:(unsigned long long)a0 callTrace:(id)a1;
- (long long)timeOffTotalCountTimeSeconds;
- (BOOL)shouldHitBackgroundLimitPlayStrategy;
- (id)reasonForBackgroundLimitPlayStrategy;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)appWillEnterForeground;

@end
