@class CMMDB, NSString, MMTimer, NSRecursiveLock, NSDate, NSMutableArray;
@protocol NotifyFromMainCtrlDelegate;

@interface CMainControll : NSObject <INewSyncExt, MMServiceProtocol, NotifyFromEventDelegate, NetworkStatusDelegate, MMKernelExt, PBMessageObserverDelegate> {
    NSString *m_nsDocPath;
    MMTimer *m_oTimerCheckEvent;
    id<NotifyFromMainCtrlDelegate> m_delNotifyFromMainCtrl;
    NSRecursiveLock *m_oMsgQueLock;
    NSMutableArray *m_arrMessageList;
    NSString *m_nsLastToken;
    unsigned int m_uiLastNetworkStatus;
    NSDate *m_dtLastSyncForAuth;
    NSDate *m_dtLastGetUpdateInfo;
    BOOL m_bStop;
}

@property (retain, nonatomic) CMMDB *m_oMMDB;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)LoadLastSvrID;
- (void)Start:(id)a0;
- (void)Stop;
- (void)StopAllEvent;
- (void)TimerCheckEvent;
- (void)CreateSyncTimer;
- (BOOL)IsNewUser;
- (unsigned int)CheckVersion;
- (void)SetVersionInited;
- (void)RaiseEvent:(unsigned int)a0 MessageID:(unsigned int)a1 MessageInfo:(id)a2;
- (void)onNewSyncIPXX:(id)a0;
- (void)handleIPXXMessage:(id)a0;
- (void)ReachabilityChange:(unsigned int)a0;
- (void)NotifyFromEvent:(id)a0 Message:(unsigned int)a1 MessageInfo:(id)a2;
- (void)SpeedyNotifyFromEvent:(id)a0 Message:(unsigned int)a1 MessageInfo:(id)a2;
- (void)speedyDispacthMessage:(id)a0;
- (void)HandleNewSyncPush:(id)a0;
- (void)onKickQuit;
- (void)CheckUpdate:(id)a0;
- (void)HandleRespForGetUpdateInfo:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)onAuthOK;
- (void)onLoginOK;
- (void)TimerSync;
- (void).cxx_destruct;

@end
