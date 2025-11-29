@interface EmoticonMessageViewModel : CommonMessageViewModel <IEmoticonDownloadExt>

@property (nonatomic) struct CGSize { double width; double height; } noImageSize;
@property (nonatomic) unsigned long long msgDownloadStatus;
@property (nonatomic) BOOL isSelfieEmoticon;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)cellViewClassName;
- (id)initWithMessageWrap:(id)a0 contact:(id)a1 chatContact:(id)a2;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (id)sourceIcon;
- (id)sourceTitle;
- (BOOL)isTailPart;
- (BOOL)isShowSourceView;
- (BOOL)shouldShowSourceViewInContent;
- (void)OnEmoticonDownload:(unsigned int)a0 withMsgWrap:(id)a1;
- (BOOL)hasReferImage;
- (id)getReferImageViewWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)additionalAccessibilityDescription;
- (id)accessibilityMessageType;

@end
