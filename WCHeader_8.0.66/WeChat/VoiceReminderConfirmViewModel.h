@class NSString;

@interface VoiceReminderConfirmViewModel : BaseMessageViewModel

@property (readonly, nonatomic) NSString *appDataPath;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;

@end
