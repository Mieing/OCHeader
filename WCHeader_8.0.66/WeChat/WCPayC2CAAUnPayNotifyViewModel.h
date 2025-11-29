@interface WCPayC2CAAUnPayNotifyViewModel : TextMessageViewModel

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)cellViewClassName;
- (id)contentText;
- (long long)parserType;
- (BOOL)isLongSplitMessage;
- (id)additionalAccessibilityDescription;

@end
