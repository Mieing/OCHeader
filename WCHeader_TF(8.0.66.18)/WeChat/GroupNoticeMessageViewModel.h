@interface GroupNoticeMessageViewModel : TextMessageViewModel

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (BOOL)isLongSplitMessage;
- (struct CGSize { double x0; double x1; })calculateContentTextSize;
- (struct CGSize { double x0; double x1; })contentTextSize;
- (id)contentText;
- (double)contentHeight;
- (BOOL)canShowJumpButton;
- (double)jumpButtonHeight;
- (id)jumpButtonFont;
- (BOOL)canShowRevokeMsgMenuItem;

@end
