@class WAAppTask, WAAppStateChangedContextInfo;

@interface WAAppTaskRunningStateEnterBackgroundContext : MMObject

@property (weak, nonatomic) WAAppTask *task;
@property (nonatomic) unsigned long long reason;
@property (nonatomic) long long action;
@property (retain, nonatomic) WAAppStateChangedContextInfo *contextInfo;

- (void)backgroundInteruptUniqueSource:(unsigned long long)a0;
- (void)backgroundReTakeUniqueSource:(unsigned long long)a0;
- (void)backgroundRecoverSharedResource:(unsigned long long)a0;
- (void)backgroundReceiveBackgroundCheck;
- (BOOL)isForbidTriggerSuspendTimer;
- (BOOL)isCanKeepRunningWhenWhiteScreen;
- (id)description;
- (void).cxx_destruct;

@end
