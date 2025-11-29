@class NSString, CMessageWrap, NSMutableArray, CdnRecordMediaInfo;

@interface RecordDownloadCDNMgr : MMObject <ICdnComMgrExt, IRoamBackupPackageServiceExt> {
    NSMutableArray *m_arrCDNDownloadInfo;
}

@property (retain, nonatomic) CMessageWrap *m_curDownMsgWrap;
@property (retain, nonatomic) CMessageWrap *m_waitDownMsgWrap;
@property (retain, nonatomic) CdnRecordMediaInfo *m_curDownMediaInfo;
@property (nonatomic) BOOL enableChatMessageNotify;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)findRecordDataInList:(id)a0 WithLocalDataId:(id)a1;
+ (unsigned int)getCacheMediaTypeWithFileType:(unsigned int)a0;

- (id)init;
- (BOOL)StartDownloadByRecordMsg:(id)a0;
- (void)StartDownloadByRecordData:(id)a0 DataId:(id)a1;
- (void)StartDownloadByRecordData:(id)a0 DataId:(id)a1 thumb:(BOOL)a2 data:(BOOL)a3;
- (void)StartDownloadByRecordData:(id)a0 DataId:(id)a1 thumb:(BOOL)a2 data:(BOOL)a3 prior:(BOOL)a4;
- (BOOL)StopDownloadRecordMsg:(id)a0 DataId:(id)a1 downloadTaskInfo:(id *)a2;
- (BOOL)StopDownloadRecordMsg:(id)a0 downloadTaskInfo:(id *)a1;
- (id)getDownloadInfo:(id)a0 DataId:(id)a1 thumb:(BOOL)a2 data:(BOOL)a3;
- (BOOL)needDownloadFromDataList:(id)a0 inMsgWrap:(id)a1;
- (void)AddDownloadTasksFromDataList:(id)a0;
- (id)generateLiveVideoMediaInfoWithMsgWrap:(id)a0 dataField:(id)a1;
- (void)StartDownloadCurMsg;
- (void)CheckDownloadRecordData;
- (id)getTempFilePath:(id)a0 data:(id)a1;
- (id)getFilePath:(id)a0 data:(id)a1;
- (id)getMiddleFilePath:(id)a0 data:(id)a1;
- (id)getCdnMediaInfoWithFileKey:(id)a0;
- (void)tryDownloadFromCloudBackup;
- (void)DownloadFail:(int)a0 Expired:(BOOL)a1 DownloadInfo:(id)a2;
- (void)DownLoadOK;
- (void)handleDownloadSucc:(id)a0 taskInfo:(id)a1;
- (void)OnSetCdnDnsInfo;
- (void)OnCdnDownloadProgress:(id)a0;
- (void)OnCdnDownload:(id)a0;
- (void)videoKVReport:(id)a0 cdnInfo:(id)a1;
- (void)CallPlayeDownloadErrorWithClientMsgID:(id)a0 RetCode:(int)a1 WithDownloadInfo:(id)a2;
- (void)onPlayerDownloadFinishEvent:(id)a0 retcode:(int)a1;
- (void)onPlayerDownloadStartFail:(int)a0 argsWrap:(id)a1;
- (void)onPlayerDownloadComplete:(id)a0 downloadInfo:(id)a1;
- (void)onRoamBackupPackageServiceLoadMediaResult:(id)a0 errorCode:(unsigned int)a1 dataID:(id)a2;
- (void).cxx_destruct;

@end
