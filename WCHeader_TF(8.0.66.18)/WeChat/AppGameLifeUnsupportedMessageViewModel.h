@interface AppGameLifeUnsupportedMessageViewModel : TextMessageViewModel

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)cellViewClassName;
- (BOOL)isLongSplitMessage;
- (BOOL)shouldShowRoomTodoView;
- (id)originContentText;
- (long long)parserType;
- (BOOL)isShowSourceView;

@end
