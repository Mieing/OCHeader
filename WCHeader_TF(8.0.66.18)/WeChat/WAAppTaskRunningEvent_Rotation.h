@interface WAAppTaskRunningEvent_Rotation : WAAppTaskRunningEvent_Base

@property (nonatomic) long long orientation;

- (unsigned long long)eventType;
- (id)description;

@end
