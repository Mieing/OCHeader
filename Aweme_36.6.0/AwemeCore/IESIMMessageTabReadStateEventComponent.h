@class IESIMDebounce, NSString;
@protocol AWEIMMessageTabVisibleConversationInterface, AWEIMChatListComponentCenter, IESLCConnectManagerProtocol;

@interface IESIMMessageTabReadStateEventComponent : AWEIMComponentBase <IESLCConnectService, IESIMChatListUpdateAction, AWEIMChatListComponent>

@property (weak, nonatomic) id<AWEIMMessageTabVisibleConversationInterface> visibleConvService;
@property (retain, nonatomic) IESIMDebounce *debounce;
@property (weak, nonatomic) id<AWEIMChatListComponentCenter> componentCenter;
@property (weak, nonatomic) id<IESLCConnectManagerProtocol> connectManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)ieslc_onConnectionStateChanged:(id)a0 connectionState:(unsigned long long)a1 url:(id)a2;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (BOOL)isLCConnecteBreak;
- (void)chatListNewCellShowedUp;
- (void)p_refreshScreenCellReadStatus;
- (void)updateScreenCellReadStateForTimerPulling;
- (void).cxx_destruct;

@end
