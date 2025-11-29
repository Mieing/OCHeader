@interface WAAppTaskRunningEvent_NavigationLifeCycleEvent : WAAppTaskRunningEvent_Base

@property (nonatomic) unsigned long long navigationLifeCycleEventType;

- (unsigned long long)eventType;

@end
