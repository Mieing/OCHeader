@class NSString, TIMXOConversationAuditBriefDataSource, TIMXOConversationAuditDataSource, TIMXSDKInstance;
@protocol IESIMConversationAuditManagerDelegate;

@interface IESIMConversationAuditManager : NSObject <TIMXOConversationAuditDataSourceBriefDelegate, IESIMTIMXLifeMessage, IESIMConversationAuditManagerProtocol>

@property (weak) TIMXSDKInstance *sdkRoot;
@property (retain) TIMXOConversationAuditBriefDataSource *briefDataSource;
@property (retain) TIMXOConversationAuditDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESIMConversationAuditManagerDelegate> delegate;

- (void)ackConversationMultiApplyWithApplyIDs:(id)a0 agree:(BOOL)a1 bizExt:(id)a2 completion:(id /* block */)a3;
- (void)fetchUnreadAuditWithBizExt:(id)a0 statusCheckblock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)fetchBatchApplyUnreadCountWith:(id)a0 bizExt:(id)a1 completion:(id /* block */)a2;
- (void)fetchUnreadAuditWithCompletion:(id /* block */)a0;
- (void)markReadAllAuditWithCompletion:(id /* block */)a0;
- (void)markReadAuditWithConShortId:(long long)a0 completion:(id /* block */)a1;
- (void)disappearAuditUnreadCount;
- (void)fetchAuditSwitchStatusWithShortID:(long long)a0 type:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)updateAuditSwitchStatusWithShortID:(long long)a0 type:(unsigned long long)a1 switchStatus:(BOOL)a2 ext:(id)a3 completion:(id /* block */)a4;
- (void)fetchNewestAuditListWithLimit:(int)a0 completion:(id /* block */)a1;
- (void)fetchNewestAuditListWithConShortId:(long long)a0 limit:(int)a1 completion:(id /* block */)a2;
- (void)loadMoreAuditListWithLimit:(int)a0 completion:(id /* block */)a1;
- (void)loadMoreAuditListWithConShortId:(long long)a0 limit:(int)a1 completion:(id /* block */)a2;
- (void)ackConversationApplyWithApplyID:(long long)a0 agree:(BOOL)a1 bizExt:(id)a2 completion:(id /* block */)a3;
- (void)iesim_timxInstanceMounted:(id)a0;
- (void)iesim_timxInstanceUnmounted:(id)a0;
- (void)p_fillPropertyFromCurrentSDKIfNecessary;
- (id)p_storedSDKRoot;
- (void)p_clearPropertyOfSDK;
- (id)p_storedSDKRoot_Nullable;
- (void)briefDataSource:(id)a0 onNewConversationApply:(id)a1;
- (void)briefDataSource:(id)a0 onNewApplyAck:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
