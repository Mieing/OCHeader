@class NSString;

@interface GameShareNameCardViewModel : CommonMessageViewModel {
    NSString *m_sharedUsername;
    NSString *m_sharedNickname;
}

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)name;
- (id)desc;
- (id)headImageUrl;
- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isShowSourceView;
- (id)sourceTitle;
- (id)sourceIcon;
- (BOOL)hasReferImage;
- (id)getReferImageViewWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)getReferImage;
- (id)additionalAccessibilityDescription;
- (void).cxx_destruct;

@end
