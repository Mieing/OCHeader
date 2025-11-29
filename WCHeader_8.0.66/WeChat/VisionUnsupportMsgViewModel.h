@interface VisionUnsupportMsgViewModel : TextMessageViewModel

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)cellViewClassName;
- (BOOL)shouldShowRoomTodoView;
- (BOOL)isShowSourceView;
- (id)originContentText;
- (BOOL)canShowMsgReplyMenuItem;

@end
