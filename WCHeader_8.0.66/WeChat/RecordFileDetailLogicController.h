@class NSString, ForwardMessageLogicController, MsgRecordDataWrap, MMUIViewController;
@protocol MsgRecordFileDetailDelegate;

@interface RecordFileDetailLogicController : FileDetailLogicController <IRecordDownloadExt, ForwardMessageLogicDelegate> {
    MsgRecordDataWrap *m_recordDataWrap;
    ForwardMessageLogicController *m_forwardMsgLogic;
    MMUIViewController *m_fileDetailViewController;
}

@property (weak, nonatomic) id<MsgRecordFileDetailDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRecordDataWrap:(id)a0;
- (void)startDownload;
- (void)stopDownload;
- (BOOL)OnPreviewFile:(unsigned int)a0;
- (void)onForwardToContact:(id)a0;
- (BOOL)isDownloading;
- (BOOL)isViewBePopedStopDownload;
- (unsigned int)GetPreviewType;
- (id)GetForwardData;
- (unsigned long long)GetFileSize;
- (id)GetFilePath;
- (id)GetTmpFilePath;
- (unsigned long long)GetTempSize;
- (id)GetFileName;
- (int)getFileExpiredDays;
- (unsigned int)getMsgUiDownloadStatus;
- (id)getMusicLocalFileDataUnit;
- (void)OnDownloadRecordMessageExpired:(id)a0 DataId:(id)a1;
- (void)OnDownloadRecordMessageFail:(id)a0 DataId:(id)a1 failRetCode:(int)a2;
- (BOOL)HandleDownloadRepeatRecordMessageFail:(id)a0 DataId:(id)a1 failRetCode:(int)a2;
- (void)OnDownloadRecordMessageOK:(id)a0 DataId:(id)a1 bThumb:(BOOL)a2;
- (void)OnDownloadRecordMessagePart:(id)a0 DataId:(id)a1 PartLen:(unsigned int)a2 TotalLen:(unsigned int)a3;
- (id)getCurrentViewController;
- (BOOL)configWithMinimizeData:(id)a0;
- (id)getMinimizeTaskData;
- (BOOL)isMinimizeEnable;
- (id)getHandOffItem;
- (BOOL)canAddToFavorites;
- (id)generateFavoriteItem;
- (void)stopDownloadAppMsgByUser;
- (id)commonReportViewParams;
- (void).cxx_destruct;

@end
