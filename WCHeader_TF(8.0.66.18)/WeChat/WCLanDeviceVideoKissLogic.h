@class NSMutableDictionary, WCLanDeviceData, CdnUploadTaskInfo, NSMutableArray;

@interface WCLanDeviceVideoKissLogic : WCLanDeviceBaseKissLogic <ICdnComMgrExt, PBMessageObserverDelegate, WCFacadeExt> {
    NSMutableDictionary *m_sendTaskMap;
    WCLanDeviceData *m_deviceData;
    NSMutableArray *m_deviceWaitingUploadArray;
    CdnUploadTaskInfo *m_uploadInfo;
    BOOL m_isUploading;
    unsigned int m_uploadProgress;
    BOOL m_isDownloading;
    NSMutableArray *m_deviceWaitingDownloadArray;
}

- (id)initWithDelegate:(id)a0 deviceData:(id)a1;
- (void)dealloc;
- (void)forwardData:(id)a0 toDevice:(id)a1 isThrouSever:(BOOL)a2;
- (void)sendVideoRequestWithDevice:(id)a0 isTroughSever:(BOOL)a1 fileInfo:(id)a2 CdnUrl:(id)a3;
- (void)sendVideoRequestWithDevice:(id)a0 isTroughSever:(BOOL)a1 fileInfo:(id)a2 CdnUrl:(id)a3 xorKey:(unsigned long long)a4;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)handleDeviceMsgTransferAppMsg:(id)a0;
- (void)startDownloadVideo;
- (BOOL)stopDownloadVideo:(id)a0;
- (void)onDownloadMediaProcessChange:(id)a0 downloadType:(long long)a1 current:(long long)a2 total:(long long)a3;
- (void)onDownloadFinish:(id)a0 downloadType:(long long)a1;
- (void)uploadDeviceData;
- (BOOL)stopUploadWithDevice:(id)a0;
- (void)OnCdnUpload:(id)a0;
- (void)OnCdnUploadProgress:(id)a0;
- (void)kissDeviceWithJsonStr:(id)a0 filePath:(id)a1 device:(id)a2;
- (void)onSendFileToWCLanDevice:(long long)a0 Progress:(float)a1 isFinish:(BOOL)a2 ErrCode:(int)a3;
- (void)onKissDeviceResponseWithErrorCode:(unsigned int)a0 queueType:(unsigned long long)a1;
- (void)onKissDeviceProgressResponeWithProgress:(double)a0 queueType:(unsigned long long)a1;
- (BOOL)cancelTaskWithDevice:(id)a0;
- (BOOL)isSightVideoExist;
- (void).cxx_destruct;

@end
