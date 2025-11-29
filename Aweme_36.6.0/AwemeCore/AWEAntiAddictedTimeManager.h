@class NSTimer, NSString, AWEUnloginAntiAddictedTimeManager;

@interface AWEAntiAddictedTimeManager : NSObject <AWEUserMessage, AWEAntiAddictedTimeManager>

@property (nonatomic) BOOL isUsingApp;
@property (nonatomic) double lastStartTimeStamp;
@property (nonatomic) double lastLeaveTimeStamp;
@property (retain, nonatomic) NSTimer *inAPPTimer;
@property (retain, nonatomic) AWEUnloginAntiAddictedTimeManager *unloginManager;
@property (nonatomic) double continuousUseAppSeconds;
@property (nonatomic) double lastVideoRemindTimeStamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEChildModeModuleServiceCommonAdapterClass;
+ (id)sharedManager;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didCancelLogin;
- (void)didLoginFailed;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)startUsingApp;
- (void)stopUsingApp;
- (id)getLocalDateOfTodayForHour:(long long)a0;
- (void)addUsingTime;
- (double)caculateContinuousUseAppSeconds:(double)a0;
- (BOOL)checkIfRemindVideoCanShowToday;
- (BOOL)withinDayTime;
- (BOOL)isShowingTeenModeAntiAddictedView;
- (BOOL)withinStartDate:(id)a0 andEndDate:(id)a1;
- (id)getDateForHour:(long long)a0 date:(id)a1;
- (BOOL)shouldShowRemindVideo;
- (BOOL)isTimeManagerEnabled;
- (id)aAWEChildModeModuleServiceCommonAdapter;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
