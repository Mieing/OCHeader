@interface AppLinkTextMessageViewModel : TextMessageViewModel

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)cellViewClassName;
- (id)contentText;
- (id)accessibilityDescription;
- (id)getReplaceContent;
- (long long)parserType;
- (BOOL)isLongSplitMessage;

@end
