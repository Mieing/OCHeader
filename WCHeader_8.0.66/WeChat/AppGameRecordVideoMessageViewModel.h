@interface AppGameRecordVideoMessageViewModel : CommonMessageViewModel <IVideoExt>

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)initWithMessageWrap:(id)a0 contact:(id)a1 chatContact:(id)a2;
- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (id)additionalAccessibilityDescription;
- (BOOL)isShowSourceView;
- (id)sourceIcon;
- (id)sourceTag;
- (id)sourceIconUrlString;
- (id)thumbUrl;
- (id)thumbData;
- (BOOL)isChatroom;
- (void)UpdateVideoMsg:(id)a0;
- (struct CGSize { double x0; double x1; })getTitleSize;
- (struct CGSize { double x0; double x1; })getDescSize;
- (struct CGSize { double x0; double x1; })getPageSize;

@end
