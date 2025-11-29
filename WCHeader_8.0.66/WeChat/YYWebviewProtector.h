@class NSString;

@interface YYWebviewProtector : MMRootService <MMServiceProtocol>

@property (nonatomic) long long xpcFailWkCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)reportBecomeUnresponsiveEvent:(id)a0;
+ (void)reportDetectXpcDisableEvent:(id)a0;
+ (void)reportDidJudgeDetectFailedEvent:(id)a0;
+ (void)reportDidUseNonPersistentDataStore;
+ (void)reportDidUseKillNetworkProcess:(id)a0;
+ (void)reportDidCheckMpAliveOK:(id)a0;
+ (void)reportDidCheckMpAliveFailed:(id)a0;
+ (void)reportDidCheckMpAliveRecovery:(BOOL)a0 url:(id)a1;
+ (long long)wxXpcAliveDetectType;
+ (long long)wxXpcDisableFixType;
+ (long long)wkXpcDisableStateCount;
+ (long long)wkXpcDisableDetectTimeoutInMs;
+ (void)forceKillNetworkProcess;
+ (BOOL)enableUIViewSnapshotHook;
+ (BOOL)disableUIViewSnapshotAfterScreenUpdates;
+ (void)reportDidTakeSnapshotAfterUpdates;

- (void)increateXpcDisableCheckCount:(id)a0;
- (BOOL)shouldUseModifiedConfig;

@end
