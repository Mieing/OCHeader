@interface WCFinderShareNameCardCellViewModel : CommonMessageViewModel

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (unsigned long long)authType;
- (id)username;
- (id)name;
- (id)desc;
- (id)headImageUrl;
- (id)authIconUrl;
- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isShowSourceView;
- (id)sourceTitle;
- (id)sourceIcon;
- (BOOL)hasReferImage;
- (id)getReferImageViewWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)getReferImage;
- (id)additionalAccessibilityDescription;

@end
