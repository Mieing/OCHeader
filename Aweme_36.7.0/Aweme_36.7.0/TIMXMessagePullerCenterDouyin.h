@class NSArray, NSString, TIMXSDKInstance;
@protocol TIMXMessageOfflinePullerProtocol, TIMXMessagePullerInterfaceDelegate, TIMXCurrentUserCredentialProtocol;

@interface TIMXMessagePullerCenterDouyin : NSObject <TIMXMessageOfflinePullerDelegateProtocol, TIMXMessagePullerInitHandlerDelegateProtocol, TIMXPullerMessageHandlerDelegateProtocol, TIMXMessagePullerInterface> {
    TIMXSDKInstance *_r;
}

@property (nonatomic) long long userID;
@property (nonatomic) int inbox;
@property (retain, nonatomic) id<TIMXCurrentUserCredentialProtocol> userCredential;
@property (copy, nonatomic) NSArray *allInitHandlers;
@property (retain, nonatomic) id<TIMXMessageOfflinePullerProtocol> offlinePuller;
@property (copy, nonatomic) NSArray *allMessageHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<TIMXMessagePullerInterfaceDelegate> delegate;

- (unsigned long long)initStatus;
- (BOOL)hasInitSuccess;
- (void)setNeedsPullWithContext:(id)a0;
- (void)continueFetchPullIfNeedWithCompletion:(id /* block */)a0;
- (void)resetInitPuller;
- (BOOL)hasInitOver;
- (void)migrateOldPuller;
- (void)notifyConversationHasNewMessage:(id)a0 inboxType:(int)a1;
- (BOOL)isVersionInitValid;
- (id)getPullVersion:(id)a0 withContext:(id)a1 direction:(unsigned long long)a2;
- (void)didEndOfflinePullSuccess:(id)a0 withResponseObject:(id)a1 pullOfflineContext:(id)a2 completion:(id /* block */)a3;
- (void)didEndOfflinePullFail:(id)a0 withError:(id)a1 pullOfflineContext:(id)a2;
- (void)setUpOfflinePuller;
- (void)setUpInitHandlers:(id)a0;
- (void)setUpMessageHandlers:(id)a0;
- (id)createInstanceWithClass:(Class)a0 selector:(SEL)a1 protocol:(id)a2 context:(id)a3;
- (void)migrationMsgVersionForSec;
- (void)setUpAllMessageHandlesKV;
- (void)preProcessNewMessage:(id)a0 inboxType:(int)a1 completion:(id /* block */)a2;
- (id)msgLinkTrackerDicWithNotify:(id)a0;
- (void)reportVersionInvalidIfNeed;
- (void)clearMonitorsWithNotifyIfNeeded:(id)a0;
- (void)handleVoipCommandNotify:(id)a0;
- (void)handleConversationApplyOrAuditAckNotify:(id)a0;
- (void)needPullOfflineWithInitHandler:(id)a0 context:(id)a1;
- (void)didEndInitRequestSuccess:(id)a0 withResponseObject:(id)a1;
- (void)didEndInitRequestFail:(id)a0;
- (void)needPullOfflineWithMessageHandler:(id)a0 context:(id)a1;
- (void)versionValidChangedWithMessageHandler:(id)a0 versionValid:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)kickoff;

@end
