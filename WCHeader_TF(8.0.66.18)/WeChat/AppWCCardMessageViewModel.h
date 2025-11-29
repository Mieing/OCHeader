@class UIImage;

@interface AppWCCardMessageViewModel : CommonMessageViewModel

@property (readonly, nonatomic) UIImage *thumbImage;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isShowSourceView;
- (id)sourceTitle;
- (id)additionalAccessibilityDescription;
- (void)onMessageDownloadThumbImageOK;

@end
