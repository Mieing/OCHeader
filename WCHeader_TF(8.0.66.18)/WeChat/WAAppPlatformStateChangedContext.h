@class WAAppStateChangedContextInfo;

@interface WAAppPlatformStateChangedContext : MMObject

@property (nonatomic) unsigned long long platformType;
@property (nonatomic) unsigned long long changeDirection;
@property (nonatomic) unsigned int changeReason;
@property (nonatomic) BOOL executeDelayToForegroundJSAPI;
@property (retain, nonatomic) WAAppStateChangedContextInfo *contextInfo;

- (id)description;
- (void).cxx_destruct;

@end
