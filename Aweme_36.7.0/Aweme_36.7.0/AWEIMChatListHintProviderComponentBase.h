@class NSString;
@protocol AWEIMChatListHintProviderUpdateHintInterface, IESIMCommonAsyncQueueProtocol;

@interface AWEIMChatListHintProviderComponentBase : AWEIMComponentBase <AWEIMChatListHintProviderProtocol>

@property (weak, nonatomic) id<IESIMCommonAsyncQueueProtocol> asyncQueueService;
@property (weak, nonatomic) id<AWEIMChatListHintProviderUpdateHintInterface> hintUpdateService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (unsigned long long)typeOfProvidingHint;
- (unsigned long long)priorityOfProvidingHint;
- (void)reloadHintWithCellContext:(id)a0;
- (BOOL)isCompatibleWithTimeText;
- (void)didDisplayedHint:(id)a0 cellContext:(id)a1;
- (void)didClickedHint:(id)a0 cellContext:(id)a1;
- (id)chatListTrackerServiceFromCellContext:(id)a0;
- (BOOL)isCompatibleWithSnapshot;
- (BOOL)isCompatibleWithMention;
- (long long)hintLineBreakMode;
- (id)incompatibleMessageTabModes;
- (void).cxx_destruct;

@end
