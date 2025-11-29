@class NSString;

@interface MailMessageViewModel : BaseMessageViewModel

@property (readonly, nonatomic) NSString *mailTitle;
@property (readonly, nonatomic) BOOL hasAttachment;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (id)additionalAccessibilityDescription;

@end
