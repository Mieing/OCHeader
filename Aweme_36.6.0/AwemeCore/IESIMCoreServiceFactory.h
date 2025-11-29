@class NSMapTable, IESIMWSConnectPlugin, NSMutableDictionary, NSString, IESIMWSMessageHandlerPlugin;
@protocol IESIMThrottleDebounceFactory, IESIMP2PMessageStream, IESIMDBRealTimeUpdatePluginInjectorProtocol, IESIMCoreBusinessCommandMessageNotifierProtocol, IESIMLoginManagerProtocol, IESIMConversationDataManagerProtocol, IESIMClientTimestampAdjustManagerProtocol, IESIMMessageSenderProtocol, IESIMIncentiveChatCommandMsgNotifierProtocol, IESIMConversationAuditManagerProtocol, IESIMLongConnectionClientUnderlayingWebSocketProtocol, IESConversationGroupManagementManagerProtocol, IESIMMessagePropertyDataManagerProtocol, IESLCMessageHandlerProtocol, IESIMContentValidationManagerProtocol, IESIMRTVCommandMsgNotifierProtocol, IESIMDBConversationORMBatchUpdateManager, IESIMMonitorManagerProtocol, IESIMTrackerServiceProtocol, IESIMDBConvBatchUpdateRuleInjectorProtocolV2, IESIMDBConvBatchUpdateRuleInjectorProtocol, IESIMStrangerInboxManagerProtocol, IESIMChatDataManagerProtocol;

@interface IESIMCoreServiceFactory : NSObject <IESIMLoginManagerMessage, IESLCMessageHandlerService>

@property (retain, nonatomic) IESIMWSConnectPlugin *wsConnectPlugin;
@property (retain, nonatomic) IESIMWSMessageHandlerPlugin *wsMessageHandlerPlugin;
@property (retain, nonatomic) NSMapTable *messageDataManagerMap;
@property (retain, nonatomic) id<IESIMLoginManagerProtocol> loginManager;
@property (retain, nonatomic) id<IESIMChatDataManagerProtocol> chatDataManager;
@property (retain, nonatomic) id<IESIMChatDataManagerProtocol> strangerBoxChatDataManager;
@property (retain, nonatomic) NSMutableDictionary *boxChatDataManagerDict;
@property (retain, nonatomic) id<IESIMConversationDataManagerProtocol> conversationDataManager;
@property (retain, nonatomic) id<IESIMMessageSenderProtocol> sender;
@property (retain, nonatomic) id<IESIMLongConnectionClientUnderlayingWebSocketProtocol> webSocketImpl;
@property (retain, nonatomic) id<IESIMConversationAuditManagerProtocol> auditManager;
@property (retain, nonatomic) id<IESIMMessagePropertyDataManagerProtocol> propertyManager;
@property (retain, nonatomic) id<IESIMStrangerInboxManagerProtocol> strangerInboxManager;
@property (retain, nonatomic) id<IESIMClientTimestampAdjustManagerProtocol> timestampAdjustManager;
@property (retain, nonatomic) id<IESIMTrackerServiceProtocol> trackerServiceManager;
@property (retain, nonatomic) id<IESIMMonitorManagerProtocol> monitorManager;
@property (retain, nonatomic) id<IESConversationGroupManagementManagerProtocol> groupManagementManager;
@property (retain, nonatomic) id<IESIMContentValidationManagerProtocol> contentValidationManager;
@property (retain, nonatomic) id<IESIMDBConvBatchUpdateRuleInjectorProtocol> dBConvBatchUpdateRuleInjector;
@property (retain, nonatomic) id<IESIMDBConvBatchUpdateRuleInjectorProtocolV2> dBConvBatchUpdateRuleInjectorV2;
@property (retain, nonatomic) id<IESIMDBRealTimeUpdatePluginInjectorProtocol> dBConvRealTimeUpdatePluginInjector;
@property (retain, nonatomic) id<IESIMDBConversationORMBatchUpdateManager> dBConversationORMBatchUpdateManager;
@property (retain, nonatomic) id<IESIMP2PMessageStream> p2pMessageStream;
@property (retain, nonatomic) id<IESIMThrottleDebounceFactory> throttleDebounceFactory;
@property (retain, nonatomic) id<IESIMRTVCommandMsgNotifierProtocol> rTVCommandMsgNotifier;
@property (retain, nonatomic) id<IESIMCoreBusinessCommandMessageNotifierProtocol> businessCommandMessageNotifier;
@property (retain, nonatomic) id<IESIMIncentiveChatCommandMsgNotifierProtocol> incentiveChatCommandMsgNotifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLCMessageHandlerProtocol> messageHandler;

+ (void)asyncGetParticipantWithConversationId:(id)a0 userID:(id)a1 completion:(id /* block */)a2;
+ (id)sharedInstance;

- (void)ieslc_messageHandler:(id)a0 didReceiveMsg:(id)a1;
- (void)ieslc_messageHandler:(id)a0 didReceiveMsg:(id)a1 receivedTimestamp:(double)a2;
- (id)generateParticipantsDataManagerV2WithConversationId:(id)a0;
- (void)iesim_didFinishLogin;
- (void)iesim_didFinishLogout;
- (id)generateBotsDataManagerWithConversationId:(id)a0;
- (id)generateParticipantsDataManagerV2WrapperWithConversationId:(id)a0;
- (id)generateParticipantsDataManagerWithConversationId:(id)a0;
- (id)generateBackpackSPFaceToFaceCommandMsgNotifier;
- (id)createBoxChatDataManagerWithBoxType:(long long)a0;
- (id)conversationReadReceipt;
- (id)generateStrangerChatManager;
- (id)generateMessageReadManagerWithConversationId:(id)a0;
- (id)generateMessageDataManagerWithConversationId:(id)a0;
- (void)createDBConvBatchUpdateRefactorInjector;
- (id)createBoxChatDataManagerWithBoxType:(long long)a0 boxTypeMask:(long long)a1 unreadNeglectMask:(long long)a2;
- (id)createThrottleDebounceFactory;
- (id)createThirdPartyDataManagerWithBizID:(int)a0 inboxType:(int)a1 topN:(unsigned long long)a2;
- (id)createThirdPartyDataManagerWithConfig:(id)a0;
- (id)generateGeneralChatDataManager;
- (id)generateGroupSPCommandMsgNotifier;
- (id)generateBackpackSPCommandMsgNotifier;
- (id)generateIncentiveChatCommandMsgNotifier;
- (void).cxx_destruct;
- (id)init;
- (void)create;
- (void)dealloc;

@end
