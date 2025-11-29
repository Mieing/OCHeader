@class MMUIImageView, NSString, FavFullScreenImageViewController, MMUIActivityIndicatorView, MMUILabel;
@protocol MailRTEImageAttachmentViewDelegate;

@interface MailRTEImageAttachmentView : RTEAttachmentView <FavFullScreenImageViewControllerDelegate, IQQMailExt> {
    MMUIActivityIndicatorView *m_loadingView;
    MMUILabel *m_failLabel;
}

@property (retain, nonatomic) MMUIImageView *imageView;
@property (retain, nonatomic) NSString *localImagePath;
@property (weak, nonatomic) FavFullScreenImageViewController *favImageVC;
@property (nonatomic) unsigned int dataSize;
@property (nonatomic) unsigned int uiPlayTimes;
@property (nonatomic) double imageScale;
@property (weak, nonatomic) id<MailRTEImageAttachmentViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAttachment:(id)a0;
- (id)mailRTEAttachment;
- (void)layoutView;
- (void)onClickObject;
- (void)onLongPressObject:(id)a0;
- (void)openImageWithEdit:(BOOL)a0;
- (void)onEdit:(id)a0;
- (void)onFavFullScreenEditImageAt:(unsigned int)a0 withImage:(id)a1;
- (void)OnUploadData:(id)a0 filename:(id)a1 errorCode:(int)a2 errMsg:(id)a3;
- (void).cxx_destruct;

@end
