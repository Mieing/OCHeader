@class UIImage;

@interface AppDefaultMessageViewModel : CommonMessageViewModel

@property (readonly, nonatomic) double titleHeight;
@property (readonly, nonatomic) UIImage *thumbImage;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (id)additionalAccessibilityDescription;
- (void)onMessageDownloadThumbImageOK;

@end
