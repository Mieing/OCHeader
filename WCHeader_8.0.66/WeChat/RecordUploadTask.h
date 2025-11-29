@class FavoritesItemDataField, CdnUploadTaskInfo, NSString, CMessageWrap, CdnFavMediaInfo, MsgDataDownloadLogic, CdnRecordMediaInfo;
@protocol RecordUploadTaskDelegate;

@interface RecordUploadTask : NSObject <ICdnComMgrExt, PBMessageObserverDelegate, MsgDataDownloadDelegate, MMAppAttachFileMgrExt> {
    BOOL m_hasDownload;
    BOOL m_enableHitCheck;
    BOOL m_fromFav;
    BOOL m_isOpenVideoThumbUpload;
    CMessageWrap *m_recordMsg;
    CdnFavMediaInfo *m_downloadFavMediaInfo;
    CMessageWrap *m_sourceMsg;
    CdnRecordMediaInfo *m_downloadMediaInfo;
    MsgDataDownloadLogic *m_downloadLogic;
    int m_retryCount;
}

@property (nonatomic) BOOL hasTryFormatConvert;
@property (retain, nonatomic) CdnRecordMediaInfo *cdnInfo;
@property (retain, nonatomic) CdnUploadTaskInfo *uploadResult;
@property (retain, nonatomic) FavoritesItemDataField *recordData;
@property (nonatomic) BOOL isThumb;
@property (nonatomic) BOOL isMiddleData;
@property (nonatomic) BOOL isLivePhotoData;
@property (nonatomic) BOOL isLocalResource;
@property (weak, nonatomic) id<RecordUploadTaskDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithUploadArgs:(id)a0;
- (void)startUpload;
- (void)stopUpload;
- (void)internalStartUpload;
- (BOOL)retryUpload;
- (void)OnCdnUploadProgress:(id)a0;
- (void)OnCdnUpload:(id)a0;
- (int)getHitCacheMediaType;
- (void)reportHitCacheInfo:(BOOL)a0;
- (void)startDownload;
- (void)realDownload;
- (void)onDownloadSuccess:(id)a0;
- (void)onDownloadExpireFail:(id)a0;
- (void)onDownloadCommonFail:(id)a0;
- (void)onDownloadCancel:(id)a0;
- (id)getTempFilePath:(id)a0 data:(id)a1;
- (id)getFilePath:(id)a0 data:(id)a1;
- (void)handleRecordThumbDownLoadSuess;
- (void)handleRecordDownLoadSuess;
- (void)OnCdnDownloadProgress:(id)a0;
- (void)OnCdnDownload:(id)a0;
- (void)checkMd5:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)convertVideoToH264;
- (void).cxx_destruct;

@end
