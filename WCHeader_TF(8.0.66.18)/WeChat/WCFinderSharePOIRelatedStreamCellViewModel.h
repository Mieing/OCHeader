@interface WCFinderSharePOIRelatedStreamCellViewModel : CommonMessageViewModel

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)title;
- (id)desc;
- (id)imageUrl;
- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })viewSize;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isShowSourceView;
- (id)sourceTitle;
- (id)sourceIcon;
- (id)additionalAccessibilityDescription;

@end
