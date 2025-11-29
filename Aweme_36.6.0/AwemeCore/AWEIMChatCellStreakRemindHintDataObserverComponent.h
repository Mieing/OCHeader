@class AWEBinding;
@protocol AWEIMChatListHintProviderCellInterface;

@interface AWEIMChatCellStreakRemindHintDataObserverComponent : AWEIMChatCellComponentBase

@property (weak, nonatomic) id<AWEIMChatListHintProviderCellInterface> hintComponentInterface;
@property (retain) AWEBinding *sharedExtBinding;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)updateComponentWhenChatUpdate:(id)a0;
- (void)p_addKVOIfNeeded:(id)a0;
- (void).cxx_destruct;

@end
