@class NSTimer, NSString;
@protocol AWEUGCampaignTaskTimerStateDelegate;

@interface AWEUGCampaignTaskTimer : NSObject <AWEUGCampaignTaskTimerProtocol>

@property (nonatomic) BOOL fixBDTimerFirstCallback;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) double totalTimeInterval;
@property (nonatomic) double hasProgressTimeInterval;
@property (nonatomic) double timeInterval;
@property (copy, nonatomic) NSString *taskToken;
@property (nonatomic) double progress;
@property (nonatomic) long long status;
@property (weak, nonatomic) id<AWEUGCampaignTaskTimerStateDelegate> countDownStatsDelegate;

- (double)totalTaskTime;
- (void)p_resumeTimer;
- (void)p_pauseTimer;
- (void)p_startTimer;
- (void)trackLogWithKey:(id)a0 message:(id)a1;
- (void)updateTaskStatus:(long long)a0;
- (BOOL)p_checkTimerStatus;
- (void)p_countTime;
- (void).cxx_destruct;
- (BOOL)isRunning;
- (void)pause;
- (void)start;
- (double)speed;
- (void)dealloc;
- (void)releaseTimer;

@end
