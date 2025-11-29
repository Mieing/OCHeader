@class NSString, TIMXSDKInstance;
@protocol IESIMSDKStrangerExplicit, IESIMStrangerInboxManagerDelegate, IESIMLoginManagerProtocol, IESIMStrangerConversationProtocol;

@interface IESIMStrangerInboxManager : NSObject <TIMXOStrangerExplicitDelegate, IESIMTIMXLifeMessage, IESIMStrangerInboxManagerProtocol>

@property (weak) TIMXSDKInstance *sdkRoot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESIMLoginManagerProtocol> loginManager;
@property (nonatomic) long long unreadCount;
@property (retain) id<IESIMStrangerConversationProtocol> latestConversation;
@property (weak, nonatomic) id<IESIMStrangerInboxManagerDelegate> delegate;
@property (retain) id<IESIMSDKStrangerExplicit> dataSource;

- (void)markReadInbox;
- (void)iesim_timxInstanceMounted:(id)a0;
- (void)iesim_timxInstanceUnmounted:(id)a0;
- (void)p_fillPropertyFromCurrentSDKIfNecessary;
- (void)p_clearPropertyOfSDK;
- (id)analysisStrangerConversationWeightWithExt:(id)a0 whiteList:(id)a1;
- (BOOL)enableGetHighWeightStrangerConversationWhenFansCountEnable;
- (id)getStrangerBizInfo;
- (id)fetchLatestEnterStrangerBoxTime;
- (void)markReadLatestReadTime;
- (id)inboxMarkReadKey;
- (void)strangerInboxDidUpdate:(id)a0 shouldClearUnreadCount:(BOOL)a1;
- (void)strangerInboxDidUpdateWithConv:(id)a0 shouldClearUnreadCount:(BOOL)a1 realTimeUpdatedTrashConvIds:(id)a2 reason:(long long)a3;
- (BOOL)enableStrangerConversationOpt;
- (int)getCurrentStrangerBoxOptType;
- (BOOL)isTrashStrangerConversation:(id)a0;
- (void)strangerInboxDidUpdate:(id)a0;
- (void)strangerConversationInBoxDidRefreshHighUpdateConversation:(id)a0;
- (void)strangerConversationInBoxDidRefreshHighWeightConversation:(id)a0;
- (void)fetchStrangerChatInboxWithCompletion:(id /* block */)a0;
- (void)pullOfflineStrangerMessageManuallyWithIsFirstLoad:(BOOL)a0 completion:(id /* block */)a1;
- (void)loadNewestNoTrashStrangerChatWithCompletion:(id /* block */)a0;
- (void)removeStrangerChatInboxWithCompletion:(id /* block */)a0;
- (long long)getRealStrangerUnreadCount;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
