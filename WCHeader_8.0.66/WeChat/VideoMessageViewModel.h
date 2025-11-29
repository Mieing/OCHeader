@class NSString, UIImage;

@interface VideoMessageViewModel : CommonMessageViewModel <MessageDownloadable>

@property (readonly, nonatomic) NSString *videoPath;
@property (readonly, nonatomic) NSString *videoSize;
@property (readonly, nonatomic) NSString *videoTime;
@property (readonly, nonatomic) UIImage *thumbImage;
@property (readonly, nonatomic) struct CGSize { double width; double height; } thumbImageSize;
@property (readonly, nonatomic) BOOL canPlayVideo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)cellViewClassName;
- (id)initWithMessageWrap:(id)a0 contact:(id)a1 chatContact:(id)a2;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)shouldShowSourceViewInContent;
- (BOOL)isShowSourceView;
- (BOOL)isSupportSourceViewBottomClick;
- (BOOL)shouldShowWeAppEntranceTail;
- (id)additionalAccessibilityDescription;
- (id)accessibilityMessageType;
- (id)accessibilityValue;
- (BOOL)isDownloading;
- (unsigned int)downloadingPercent;
- (id)getVideoDownoadSuccTipWording;
- (BOOL)canForwardAndFavorites;
- (void)onMessageDownloadThumbImageOK;
- (void)onMessageDownloadVideoExpired;
- (void)onMessageDownloadVideoFail;
- (BOOL)hasReferImage;
- (id)getReferImageViewWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)getReferImage;
- (BOOL)contentExists;
- (void).cxx_destruct;

@end
