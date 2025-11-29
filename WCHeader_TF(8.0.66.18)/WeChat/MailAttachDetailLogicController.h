@class CAttach, NSString, ForwardMessageLogicController, MMUIViewController;
@protocol MailAttachDelegate;

@interface MailAttachDetailLogicController : FileDetailLogicController <PBMessageObserverDelegate, ForwardMessageLogicDelegate> {
    unsigned int m_uiStartPos;
    unsigned int m_uiDataLen;
    unsigned int m_uiEventID;
    ForwardMessageLogicController *m_forwardLogic;
    MMUIViewController *m_fileDetailViewController;
    BOOL m_bDownloading;
}

@property (retain, nonatomic) CAttach *m_oAttach;
@property (retain, nonatomic) NSString *m_nsMailID;
@property (weak, nonatomic) id<MailAttachDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)startDownload;
- (void)stopDownload;
- (void)checkIsFileExistInSvr;
- (BOOL)OnPreviewFile:(unsigned int)a0;
- (void)onForwardToContact:(id)a0;
- (id)generateFavoriteItem;
- (BOOL)isDownloading;
- (BOOL)autoDownload;
- (BOOL)canAddToFavorites;
- (unsigned int)GetPreviewType;
- (unsigned long long)GetFileSize;
- (unsigned long long)GetTempSize;
- (id)GetFilePath;
- (id)GetTmpFilePath;
- (id)GetFileName;
- (id)getMusicLocalFileDataUnit;
- (unsigned int)getMsgUiDownloadStatus;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (id)getCurrentViewController;
- (BOOL)isMinimizeEnable;
- (id)getMinimizeTaskData;
- (BOOL)configWithMinimizeData:(id)a0;
- (void)stopDownloadAppMsgByUser;
- (void).cxx_destruct;

@end
