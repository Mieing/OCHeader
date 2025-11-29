@class UIImage, NSData, NSString;

@interface ImageMessageViewModel : CommonMessageViewModel <IMessageWrapImgExt, MessageDownloadable>

@property (readonly, nonatomic) unsigned int thumbDownloadStatus;
@property (readonly, nonatomic) struct CGSize { double width; double height; } thumbImageSize;
@property (readonly, nonatomic) UIImage *thumbImage;
@property (readonly, nonatomic) BOOL isImageExists;
@property (readonly, nonatomic) NSData *imageData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)initWithMessageWrap:(id)a0 contact:(id)a1 chatContact:(id)a2;
- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)shouldShowSourceViewInContent;
- (BOOL)isShowSourceView;
- (id)sourceTitle;
- (BOOL)isSupportSourceViewBottomClick;
- (BOOL)shouldShowWeAppEntranceTail;
- (BOOL)shouldShowTailEntranceTail;
- (id)maskedThumbImagePath;
- (id)maskedThumbImage;
- (id)getImageIfDownFail;
- (BOOL)hasReferImage;
- (id)getReferImage;
- (BOOL)contentExists;
- (id)accessibilityMessageType;
- (void)onThumbImageSave:(id)a0;

@end
