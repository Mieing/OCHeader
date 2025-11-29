@class NSString, NSMutableDictionary, RTVChatControllerContext;
@protocol RxInjector, RTVMultipleDelegateInterface, RTVRoomChatMessageControllerInterface, RTVXRRoomSessionControllerInterface, RTVXRControllerInjector, RTVChatDataController, RTVSettingsManager, RTVInteractionConfigureManagerInterface, RTVUserProfileManagerInterface, RTVChatControllerObserver, RTVMonitor;

@interface RTVChatController : NSObject <RTVChatControllerDelegate, RTVChatController> {
    struct RecursiveMutex { int _type; union { struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _plain; struct recursive_mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _recursive; } ; } _lock;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, nonatomic) id<RTVMultipleDelegateInterface, RTVChatControllerObserver> observers;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) id<RTVChatDataController> dataController;
@property (readonly, nonatomic) id<RTVRoomChatMessageControllerInterface> roomChatMessageController;
@property (readonly, nonatomic) id<RTVSettingsManager> rtvSettingsManager;
@property (readonly, weak, nonatomic) id<RTVXRRoomSessionControllerInterface> roomController;
@property (readonly, nonatomic) id<RTVInteractionConfigureManagerInterface> interactionConfigManager;
@property (readonly, copy, nonatomic) NSString *conversationID;
@property (readonly, copy, nonatomic) NSString *imConversationID;
@property (readonly, nonatomic) RTVChatControllerContext *context;
@property (readonly, nonatomic) NSMutableDictionary *messageQueueDict;
@property (readonly, nonatomic) NSMutableDictionary *receivedMessageTypeMap;
@property (nonatomic) BOOL needSendToRtm;
@property (nonatomic) BOOL isReadyForWork;
@property (nonatomic) unsigned long long numberOfMessagesSentBeforeReady;
@property (nonatomic) unsigned long long maxNumberOfMessages;
@property (readonly, nonatomic) id<RTVMonitor> rtvMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (void)__createComponents;
- (void)renderBusinessHandler:(id)a0 context:(id)a1;
- (void)sendGuideVerifyFakeMessageWithConversationId:(id)a0;
- (void)sendNobodySetRingtoneNoticeMessageWithConversationId:(id)a0 extra:(id)a1;
- (void)sendPeerUserSetRingtoneNoticeMessageWithConversationId:(id)a0 musicId:(id)a1 musicName:(id)a2 extra:(id)a3;
- (void)sendHangUpNotice:(id)a0 text:(id)a1 needShowRecall:(BOOL)a2 callType:(id)a3 hangUpCode:(long long)a4;
- (void)dataController:(id)a0 didReceiveMessages:(id)a1;
- (void)dataController:(id)a0 didReceiveSendMessageResponse:(id)a1 error:(id)a2;
- (void)__configComponents;
- (id)insertFakeMessage:(id)a0;
- (void)__monitorMessagesCountPeak;
- (void)__preProcessMessage:(id)a0;
- (void)__preProcessFakeMessage:(id)a0;
- (void)__insertMessage:(id)a0 ofType:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)__observersDidReceiveNewMessages:(id)a0;
- (id)__popMessagesWithCount:(unsigned long long)a0 messageType:(unsigned long long)a1;
- (BOOL)__hasReceiveMessage:(id)a0 withType:(unsigned long long)a1;
- (void)__appendMessages:(id)a0 ofType:(unsigned long long)a1;
- (id)__messageQueueWithType:(unsigned long long)a0;
- (void)__updateMaxNumberOfMessagesIfNeeded;
- (unsigned long long)__currentMessagesCount;
- (id)__createMessageQueue;
- (void)__hmdTrackService:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
- (id)validConvIDTuple;
- (void)renderWithConversationID:(id)a0 context:(id)a1;
- (void)renderRtmRoadWithContext:(id)a0;
- (id)popMessagesWithCount:(unsigned long long)a0 type:(unsigned long long)a1;
- (unsigned long long)countOfMessageWithType:(unsigned long long)a0;
- (void)clearMessageCache;
- (id)sendMessage:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id).cxx_construct;
- (void)reset;
- (void)removeObserver:(id)a0;
- (void)dealloc;

@end
