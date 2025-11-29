@interface AWEIMChatListHintProviderLatestMessageComponent : AWEIMChatListHintProviderComponentBase

@property (nonatomic) BOOL ignoreEmptyEnable;

- (void)componentDidMounted:(id)a0;
- (unsigned long long)typeOfProvidingHint;
- (unsigned long long)priorityOfProvidingHint;
- (void)reloadHintWithCellContext:(id)a0;
- (BOOL)isCompatibleWithTimeText;
- (void)updateCellComponentWhenChatUpdate:(id)a0;
- (void)didDisplayedHint:(id)a0 cellContext:(id)a1;
- (void)didClickedHint:(id)a0 cellContext:(id)a1;
- (BOOL)isCompatibleWithMention;
- (void)trackHintEvent:(unsigned long long)a0 withHintModel:(id)a1 cellContext:(id)a2;
- (id)typeForChat:(id)a0;

@end
