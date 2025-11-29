@class WAAppTaskReferrerInfo;

@interface WAAppTaskRunningEvent_EnterBackground : WAAppTaskRunningEvent_Base

@property (nonatomic) long long mode;
@property (nonatomic) long long action;
@property (retain, nonatomic) WAAppTaskReferrerInfo *backReferrerInfo;

- (unsigned long long)eventType;
- (id)description;
- (void).cxx_destruct;

@end
