@class UIImage;

@interface AppGiftCardMessageViewModel : CommonMessageViewModel

@property (readonly, nonatomic) double titleHeight;
@property (readonly, nonatomic) double detailHeight;
@property (readonly, nonatomic) UIImage *thumbImage;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isShowSourceView;
- (id)sourceTitle;
- (id)sourceIcon;
- (void)onMessageDownloadThumbImageOK;

@end
