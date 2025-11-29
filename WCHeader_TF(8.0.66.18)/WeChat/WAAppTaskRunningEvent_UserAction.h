@interface WAAppTaskRunningEvent_UserAction : WAAppTaskRunningEvent_Base

@property (nonatomic) unsigned long long action;

- (unsigned long long)eventType;
- (id)description;

@end
