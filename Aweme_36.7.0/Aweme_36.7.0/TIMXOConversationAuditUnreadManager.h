@class NSMutableDictionary, TIMXOConversationAuditBriefDataSource, NSHashTable, NSString, NSMutableArray, TIMXSDKInstance;

@interface TIMXOConversationAuditUnreadManager : NSObject <TIMXOConversationAuditDataSourceBriefDelegate, TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) TIMXOConversationAuditBriefDataSource *dataSource;
@property (retain, nonatomic) NSMutableDictionary *conversationIdToUnreadAuditCountDic;
@property (retain, nonatomic) NSMutableArray *pendingConversationIdArray;
@property (retain, nonatomic) NSHashTable *delegates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)briefDataSource:(id)a0 onNewConversationApply:(id)a1;
- (void)cleanAll;
- (void)loadAuditUnreadCountWithConversationId:(id)a0 delegate:(id)a1;
- (void)batchLoadAuditUnreadCountWithConversationIdArray:(id)a0;
- (void)batchLoadUnreadAuditCount;
- (void)notifyConversationIdToUnreadAuditCountDidChange;
- (void)loadAuditUnreadCountWithConversationId:(id)a0;
- (long long)unreadAuditCountWithConversationId:(id)a0;
- (void)markAuditReadWithConversationId:(id)a0 completion:(id /* block */)a1;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
