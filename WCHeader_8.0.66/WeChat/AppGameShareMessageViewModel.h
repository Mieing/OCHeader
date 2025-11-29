@interface AppGameShareMessageViewModel : AppUrlMessageViewModel <PBMessageObserverDelegate>

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)cellViewClassName;
- (void)setIsExposed;
- (void)setReadText;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;

@end
