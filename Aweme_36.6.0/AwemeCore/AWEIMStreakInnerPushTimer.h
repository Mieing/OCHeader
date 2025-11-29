@class NSString;

@interface AWEIMStreakInnerPushTimer : NSObject <AWEUserMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)onAppWillEnterForeground;
- (void)startTimerWith:(double)a0;
- (void)startTimerWhenColdLaunch;
- (double)timeInterval:(double)a0 afterDays:(long long)a1 atSeconds:(long long)a2;
- (BOOL)shouldRequestServerToday;
- (void)requestServerIfNeeded;
- (void)requestServer;
- (double)getStreakInnerPushTargetTime;
- (double)getStreakInnerPushRequestTime;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
