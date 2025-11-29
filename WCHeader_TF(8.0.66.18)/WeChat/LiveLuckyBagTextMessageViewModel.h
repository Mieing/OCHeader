@interface LiveLuckyBagTextMessageViewModel : TextMessageViewModel

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)cellViewClassName;
- (id)contentText;
- (id)initWithMessageWrap:(id)a0 contact:(id)a1 chatContact:(id)a2;
- (BOOL)isLongSplitMessage;
- (long long)parserType;
- (double)contentHeight;

@end
