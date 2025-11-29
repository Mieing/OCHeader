@class NSString, WCMomentsPostReportSession;

@interface WCMomentsPostReportSessionManager : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) WCMomentsPostReportSession *currentActiveSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (id)activateNewSession;
- (id)activateNewSessionIfNeeded;
- (id)activateNewSessionIfNeededWithPostCycleId:(id)a0;
- (id)recoverSessionForScene:(long long)a0 fromEntrance:(long long)a1 withPostCycleId:(id)a2 andActive:(BOOL)a3;
- (id)deactivateCurrentSession;
- (void)deactivateSessionIfNeeded:(id)a0;
- (void).cxx_destruct;

@end
