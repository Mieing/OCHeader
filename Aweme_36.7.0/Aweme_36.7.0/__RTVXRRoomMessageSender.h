@class NSMutableDictionary, RxScheduler, RTVXRRoomMessageRTMFallbackSender, NSString;
@protocol RTVSEIMessageController, RTVSettingsManager, RTVXREngine, RTVMultipleDelegateInterface, RTVXRRoomSessionControllerInterface, RTVXRRoomMessageBusinessTypeTransformerInterface, RTVXRRoomManagerInterface, RTVUserProfileManagerInterface, RTVXRControllerInjector, RTVXRRoomMessageSenderDelegate, RTVInteractionClientInterface, RxInjector, RTVXRMonitor, RTVXRRoomMessageSenderObserver;

@interface __RTVXRRoomMessageSender : NSObject <RTVXRRoomMessageSender, RTVXRControllerInterface, RTVXREngineDelegate, RTVSEIMessageObserver, RTVInteractionClientObserver>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) id<RTVXREngine> engine;
@property (readonly, weak, nonatomic) id<RTVSEIMessageController> seiMessageController;
@property (readonly, weak, nonatomic) id<RTVXRRoomSessionControllerInterface> roomController;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) id<RTVSettingsManager> settingManager;
@property (readonly, nonatomic) id<RTVXRMonitor> monitor;
@property (retain, nonatomic) id<RTVXRRoomMessageSenderObserver, RTVMultipleDelegateInterface> multipleDelegate;
@property (readonly, nonatomic) RxScheduler *scheduler;
@property (readonly, nonatomic) NSMutableDictionary *sendDeferredMapper;
@property (readonly, nonatomic) NSMutableDictionary *sendMessageResultCheckInfoMapper;
@property (readonly, nonatomic) NSMutableDictionary *messageIdentifierMapper;
@property (readonly, nonatomic) NSMutableDictionary *doubleSendFilter;
@property (readonly, nonatomic) id<RTVXRRoomMessageBusinessTypeTransformerInterface> messageTypeTansformer;
@property (readonly, nonatomic) id<RTVInteractionClientInterface> interactionClient;
@property (readonly, nonatomic) id<RTVXRRoomManagerInterface> roomManager;
@property (readonly, nonatomic) RTVXRRoomMessageRTMFallbackSender *fallbackSender;
@property (weak, nonatomic) id<RTVXRRoomMessageSenderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (void)renderBusinessHandler:(id)a0 context:(id)a1;
- (void)xrEngine:(id)a0 onRoomBinaryMessageReceived:(id)a1 message:(id)a2;
- (void)xrEngine:(id)a0 onUserBinaryMessageReceived:(id)a1 message:(id)a2;
- (void)xrEngine:(id)a0 onRoomMessageReceived:(id)a1 message:(id)a2;
- (void)xrEngine:(id)a0 onUserMessageReceived:(id)a1 message:(id)a2;
- (void)xrEngine:(id)a0 onUserMessageSendResult:(long long)a1 error:(long long)a2;
- (void)xrEngine:(id)a0 onRoomMessageSendResult:(long long)a1 error:(long long)a2;
- (void)interactionClient:(id)a0 didReceiveOperation:(id)a1;
- (void)didReceiveSEIMessage:(id)a0 messageKey:(id)a1;
- (void)__addMonitorInfoIfNeeded:(id)a0;
- (BOOL)__enableRTMFallbackSenderMessage:(id)a0;
- (void)__monitorReceiveMessageIfNeeded:(id)a0 withOrderIndex:(long long)a1;
- (id)__errorWithCode:(long long)a0 userInfo:(id)a1;
- (void)__handleRTMMessageSendResult:(long long)a0 success:(BOOL)a1 messageSource:(long long)a2;
- (void)__didReceiveMessageWithData:(id)a0 fromUserID:(id)a1 source:(long long)a2;
- (id)__dispatchReceiveMessage:(id)a0;
- (id)sendMessageContent:(id)a0;
- (id)sendMessageContent:(id)a0 toUserID:(id)a1;
- (id)sendMessage:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)__sendMessage:(id)a0;
- (void)removeObserver:(id)a0;
- (unsigned long long)__currentTimestamp;

@end
