@class NSMutableDictionary, NSDictionary, AWEIMChatCellHintModel, NSArray, NSString;
@protocol IESIMCommonAsyncQueueProtocol;

@interface AWEIMChatCellHintViewModel : NSObject

@property (copy) NSDictionary *hintsDict;
@property (retain) NSMutableDictionary *hintsSafeDict;
@property (retain) AWEIMChatCellHintModel *preferredHintModel;
@property (retain, nonatomic) NSArray *hintTypesOrderedInPriority;
@property (copy, nonatomic) NSString *conversationId;
@property (weak, nonatomic) id<IESIMCommonAsyncQueueProtocol> asyncQueueService;

- (void)dealloc;
- (id)cachedHintModelForType:(unsigned long long)a0;
- (void)p_processHighlightHintModelContent:(id)a0;
- (void)p_updateLatestHintModelForPreferredHintModel:(id)a0;
- (void)__updatePreferredHintModel;
- (BOOL)__isDisplayableHintModel:(id)a0;
- (id)initWithConversationId:(id)a0 sortedPriorities:(id)a1;
- (void)updateHint:(id)a0;
- (void)didChangeMessageTabMode:(id)a0;
- (void).cxx_destruct;

@end
