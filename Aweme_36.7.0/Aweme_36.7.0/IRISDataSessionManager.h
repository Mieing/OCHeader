@class NSString, NSMutableDictionary, IRISDataSessionIMPL;
@protocol IRISContext, IRISDataSession;

@interface IRISDataSessionManager : NSObject <IRISModule> {
    double latestRefresh;
    _Atomic unsigned long long index;
}

@property (class, readonly) NSString *launchId;

@property (copy, nonatomic) id /* block */ onSessionTerminateRecovery;
@property (copy, nonatomic) id /* block */ onSessionTerminateRecovery;
@property (nonatomic) unsigned long long refreshInterval;
@property (weak, nonatomic) id<IRISContext> context;
@property (retain, nonatomic) NSMutableDictionary *sessionUsage;
@property (retain, nonatomic) IRISDataSessionIMPL *usage;
@property (readonly) id<IRISDataSession> current;
@property (nonatomic) BOOL recoveryEnabled;
@property (copy, nonatomic) id /* block */ onSessionLaunch;
@property (copy, nonatomic) id /* block */ onSessionTerminate;
@property (copy, nonatomic) NSString *lastestSessionId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sessionRecoveryDirectory;
- (void)ensureDirectoryAvailable;
- (void)_removeCachedSession:(id)a0;
- (void)_cacheSessionDataIfNeed;
- (void)_removeSessionDataIfNeed;
- (void)restoreTerminateData;
- (id)generateSessionId;
- (void)cacheSessionDataIfNeed;
- (void)removeSessionDataIfNeed;
- (void)launch:(id)a0;
- (void)terminate;
- (void).cxx_destruct;
- (void)refresh;
- (id)initWithContext:(id)a0;

@end
