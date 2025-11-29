@class NSString, AWEIMComponentManager, YYMemoryCache;
@protocol AWEIMChatListHintProviderUpdateHintInterface, IESIMCommonAsyncQueueProtocol;

@interface AWEIMChatListHintInfoHighlightProvider : AWEIMComponentBase <IESIMChatDataManagerDelegate, AWEIMComponentContainer, AWEIMComponentManagerDependency, AWEIMChatListHintProviderCellEventObserver, AWEIMChatListHintInfoHighlightProviderProtocol>

@property (weak, nonatomic) id<AWEIMChatListHintProviderUpdateHintInterface> hintUpdateService;
@property (retain, nonatomic) YYMemoryCache *hintInfoCache;
@property (weak, nonatomic) id<IESIMCommonAsyncQueueProtocol> asyncQueueService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEIMComponentManager *componentManager;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)iesim_chatDataManager:(id)a0 chatDidUpdate:(id)a1;
- (void)iesim_onConversationDataSourceMessagesCreated:(id)a0 belongingConversationMap:(id)a1 reason:(id)a2;
- (void)iesim_onConversationDataSourceMessagesUpdated:(id)a0 belongingConversationMap:(id)a1;
- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)updateCellComponentWhenChatUpdate:(id)a0;
- (void)clearCacheHintInfoAndHintWithCellHintType:(unsigned long long)a0 conv:(id)a1;
- (void)updateHintInfoHighlightWithChatModel:(id)a0;
- (id)updateHintInfoWithConv:(id)a0;
- (unsigned long long)convertServerHintTypeToCellHintType:(long long)a0;
- (void)updateHintInfoTextWithHintInfo:(id)a0 conv:(id)a1;
- (void)clearCacheHintInfoAndHint:(id)a0 conv:(id)a1;
- (id)subPriorityComponents;
- (void)updateHintWithHighlightedAttributedStringWithHintInfo:(id)a0 conv:(id)a1 hintType:(unsigned long long)a2;
- (BOOL)p_enableHighLightWithCon:(id)a0;
- (void)updateVMForConversationId:(id)a0 content:(id)a1 type:(unsigned long long)a2;
- (long long)convertCellHintTypeToServerHintType:(unsigned long long)a0;
- (void)messageTabViewWillDealloc:(id)a0;
- (void).cxx_destruct;

@end
