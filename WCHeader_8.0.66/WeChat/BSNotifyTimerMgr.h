@class NSTimer, NSArray;

@interface BSNotifyTimerMgr : NSObject

@property (nonatomic) long long lastNativeLocalIdListCount;
@property (retain, nonatomic) NSTimer *currentTimer;
@property (retain, nonatomic) NSArray *lastNativeLocalIdList;

+ (id)shared;

- (id)init;
- (void)relaunchScheduleNotificationWithDelayMinutes:(long long)a0 nativeLocalIdList:(id)a1;
- (void)scheduleNotificationWithDelayMinutes:(long long)a0 latestNotifyMsgId:(id)a1;
- (void)updateNotifyMsgForAff:(long long)a0 latestNotifyMsgId:(id)a1;
- (void)handleTimerTrigger;
- (void)performUpdate;
- (void).cxx_destruct;

@end
