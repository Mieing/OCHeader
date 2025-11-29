@class NSArray, NSDictionary, YYMemoryCache, NSMutableDictionary, NSString, AWEIMComponentManager;
@protocol IESIMCommonAsyncQueueProtocol;

@interface AWEIMChatListHintProviderManagerComponent : AWEIMComponentBase <AWEUserMessage, AWEIMChatListHintProviderUpdateHintInterface, AWEIMChatListHintReloadHintInterface, AWEIMChatListHintProviderCellInterface, AWEIMComponentContainer, AWEIMComponentLazyCreate, AWEIMComponentManagerDependency>

@property (copy, nonatomic) NSDictionary *hintProviders;
@property (copy, nonatomic) NSDictionary *hintType2Config;
@property (retain, nonatomic) NSArray *sortedHintTypes;
@property (retain, nonatomic) YYMemoryCache *VMTable;
@property (retain, nonatomic) NSMutableDictionary *VMTableV2;
@property (weak, nonatomic) id<IESIMCommonAsyncQueueProtocol> asyncQueueService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEIMComponentManager *componentManager;

+ (id)lazyComponentWakeupInterface;

- (void)didFinishLogoutWithUid:(id)a0;
- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)updateHint:(id)a0 conversationId:(id)a1;
- (id)hintModelForType:(unsigned long long)a0 conversationId:(id)a1;
- (void)updateCellComponentWhenChatUpdate:(id)a0;
- (void)updateCellComponentWhenConSharedSyncedExtUpdate:(id)a0;
- (void)didDisplayedHint:(id)a0 cellContext:(id)a1;
- (void)didClickedHint:(id)a0 cellContext:(id)a1;
- (void)updateStrangerConversationCellWhenStrangerChatUpdate:(id)a0;
- (void)updateHintWhenFlameInfoChangeWithCellContext:(id)a0;
- (void)updateCellComponentWhenConStatusUpdate:(id)a0;
- (void)updateCellComponentWhenSelfParticipantStatusUpdate:(id)a0;
- (id)hintViewModelForConversationId:(id)a0;
- (void)__didChangeMessageTabMode:(id)a0;
- (void)reloadAllHintsWithCellContext:(id)a0;
- (void)reloadHintWithCellContext:(id)a0 hintType:(unsigned long long)a1;
- (void)__getFlatSubComponents:(id)a0 results:(id)a1;
- (id)__constructHintTypeConfigModelWithHintProvider:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
