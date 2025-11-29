@class WAAppPlatformStateChangedContext;

@interface WAAppStateChangedEvent : MMObject

@property (nonatomic) unsigned long long eventType;
@property (retain, nonatomic) WAAppPlatformStateChangedContext *context;
@property (nonatomic) unsigned long long resourceType;
@property (nonatomic) unsigned long long sharedResourceType;
@property (nonatomic) unsigned long long closeReason;

- (id)description;
- (void).cxx_destruct;

@end
