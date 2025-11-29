@class MMUIActivityIndicatorView, UILabel, MailAttachment, UIButton;
@protocol MailAttachmentsViewDelegate;

@interface MailAttachmentsView : MMUIButton <IQQMailExt> {
    MMUIActivityIndicatorView *m_loadingView;
    UILabel *m_labelName;
    UILabel *m_labelPercent;
    UILabel *m_labelUploadFail;
    UIButton *m_btnResend;
    unsigned int m_uiPercent;
    MailAttachment *m_mailAttachment;
}

@property (weak, nonatomic) id<MailAttachmentsViewDelegate> m_delegate;

- (void)initData;
- (BOOL)isUploadSuccess;
- (void)setUploadFailStatus;
- (void)setUploadSuccessStatus;
- (void)updateUploadPercent:(unsigned int)a0;
- (void)setUploadingStatus;
- (void)updateUploadPercentForNewQQMail:(unsigned int)a0;
- (void)setUploadSuccessStatusForNewQQMail:(unsigned int)a0;
- (void)OnResend:(id)a0;
- (void)initView;
- (void)adjustNameLabel;
- (unsigned long long)attachmentSize;
- (void)setDataID:(id)a0;
- (void)setData:(id)a0;
- (id)getData;
- (id)getDataID;
- (id)getDataName;
- (id)initWithMailAttachment:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)startUploadData;
- (void)cancelUpload;
- (void)OnUploadData:(id)a0 filename:(id)a1 errorCode:(int)a2 errMsg:(id)a3;
- (void).cxx_destruct;

@end
