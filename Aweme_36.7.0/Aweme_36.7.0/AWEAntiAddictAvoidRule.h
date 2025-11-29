@class NSString;

@interface AWEAntiAddictAvoidRule : NSObject <AWEAntiAddictLogProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedRule;
+ (id)moduleName;

- (BOOL)satisfySystemHotLaunchProtectWithHotLaunchTime:(double)a0 hotLaunchProtectTime:(double)a1 now:(double)a2;
- (BOOL)satisfySystemColdLaunchProtectWithColdLaunchTime:(double)a0 coldLaunchProtectTime:(double)a1 now:(double)a2;
- (BOOL)satisfyUserHotLaunchProtectWithHotLaunchTime:(double)a0 hotLaunchProtectTimeForUserRemind:(double)a1 now:(double)a2;
- (BOOL)satisfyUserColdLaunchProtectWithColdLaunchTime:(double)a0 coldLaunchProtectTimeForUserRemind:(double)a1 now:(double)a2;
- (BOOL)satisfySystemLaunchProtectWithColdLaunchTime:(double)a0 coldLaunchProtectTime:(double)a1 hotLaunchTime:(double)a2 hotLaunchProtectTime:(double)a3 now:(double)a4 isHotLaunch:(BOOL)a5;
- (BOOL)satisfyUserLaunchProtectWithColdLaunchTime:(double)a0 coldLaunchProtectTimeForUserRemind:(double)a1 hotLaunchTime:(double)a2 hotLaunchProtectTimeForUserRemind:(double)a3 now:(double)a4 isHotLaunch:(BOOL)a5;
- (BOOL)satisfyRemindIntervalWithLastActionEndTime:(double)a0 remindTimeInterval:(long long)a1 now:(double)a2;
- (BOOL)satisfyPushAvoidV1WithVideoShownRecords:(id)a0 now:(id)a1;
- (BOOL)satisfyPushAvoidV2WithPushShownRecord:(id)a0 pushClickedRecord:(id)a1 now:(id)a2 inPastDays:(long long)a3;

@end
