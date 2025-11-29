@class _TtC7FlowIMX27FlowIMConnectionServiceImpl, _TtC7FlowIMX12FlowIMConfig, _TtC7FlowIMX21FlowIMChatServiceImpl, _TtC7FlowIMX21FlowCmdMessageHandler, _TtC7FlowIMX29FlowIMConversationServiceImpl, _TtC7FlowIMX20FlowIMBotServiceImpl, _TtC7FlowIMX9FlowIMSDK, _TtC7FlowIMX28FlowIMParticipantServiceImpl;
@protocol _TtP7FlowIMX25FlowIMConversationService_, _TtP7FlowIMX16FlowIMBotService_, _TtP7FlowIMX17FlowIMChatService_, _TtP7FlowIMX23FlowIMConnectionService_, _TtP7FlowIMX24FlowIMParticipantService_;

@interface FlowIMX.FlowIMSDK : NSObject {
    void /* unknown type, empty encoding */ $__lazy_storage_$_p_connectionService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_p_conversationService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_p_participantService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_p_chatService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_p_botService;
    void /* unknown type, empty encoding */ accountObservers;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cmdHandler;
    void /* unknown type, empty encoding */ $__lazy_storage_$_handlerStore;
    void /* unknown type, empty encoding */ $__lazy_storage_$_connectionService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_conversationService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_participantService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_chatService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_botService;
}

@property (class, nonatomic, readonly) _TtC7FlowIMX9FlowIMSDK *shared;

@property (nonatomic, retain) _TtC7FlowIMX27FlowIMConnectionServiceImpl *p_connectionService;
@property (nonatomic, retain) _TtC7FlowIMX29FlowIMConversationServiceImpl *p_conversationService;
@property (nonatomic, retain) _TtC7FlowIMX28FlowIMParticipantServiceImpl *p_participantService;
@property (nonatomic, retain) _TtC7FlowIMX21FlowIMChatServiceImpl *p_chatService;
@property (nonatomic, retain) _TtC7FlowIMX20FlowIMBotServiceImpl *p_botService;
@property (nonatomic, retain) _TtC7FlowIMX12FlowIMConfig *config;
@property (nonatomic, retain) _TtC7FlowIMX21FlowCmdMessageHandler *cmdHandler;
@property (nonatomic, retain) id<_TtP7FlowIMX23FlowIMConnectionService_> connectionService;
@property (nonatomic, retain) id<_TtP7FlowIMX25FlowIMConversationService_> conversationService;
@property (nonatomic, retain) id<_TtP7FlowIMX24FlowIMParticipantService_> participantService;
@property (nonatomic, retain) id<_TtP7FlowIMX17FlowIMChatService_> chatService;
@property (nonatomic, retain) id<_TtP7FlowIMX16FlowIMBotService_> botService;

+ (void)registerSettings;
+ (void)registerSettings:(id /* block */)a0;

- (void)registerWithConfig:(id)a0;
- (void)cleanCacheWithUserId:(id)a0;
- (void)onAccountLogin;
- (void)onAccountLogout;
- (void)onTouristIDChange;
- (void)disasterDeleteFieldInTableWithConfig:(id)a0;
- (void).cxx_destruct;
- (void)cleanCache;
- (id)init;

@end
