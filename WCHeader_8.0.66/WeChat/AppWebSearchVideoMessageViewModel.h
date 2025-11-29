@interface AppWebSearchVideoMessageViewModel : AppUrlMessageViewModel

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)sourceTitle;
- (id)sourceIcon;
- (BOOL)isShowSourceView;
- (BOOL)shouldShowSourceViewInContent;

@end
