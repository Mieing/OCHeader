@class CdnUploadTaskInfo, NSMutableDictionary, WCLanDeviceData, NSMutableArray;

@interface WCLanDeviceImageKissLogic : WCLanDeviceBaseKissLogic <ICdnComMgrExt, PBMessageObserverDelegate, WCFacadeExt> {
    NSMutableDictionary *m_sendTaskMap;
    WCLanDeviceData *m_deviceData;
    CdnUploadTaskInfo *m_uploadInfo;
    NSMutableArray *m_deviceWaitingUploadArray;
    BOOL m_isUploading;
    BOOL m_isDownloading;
    NSMutableArray *m_deviceWaitingDownloadArray;
    unsigned long long m_nonceNum;
}

- (id)initWithDelegate:(id)a0 deviceData:(id)a1;
- (void)forwardData:(id)a0 toDevice:(id)a1 isThrouSever:(BOOL)a2;
- (void)dealloc;
- (void)sendFileRequestWithDevice:(id)a0 isTroughSever:(BOOL)a1 fileInfo:(id)a2 CdnUrl:(id)a3;
- (void)sendFileRequestWithDevice:(id)a0 isTroughSever:(BOOL)a1 fileInfo:(id)a2 CdnUrl:(id)a3 encKey:(id)a4;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)handleDeviceMsgTransferAppMsg:(id)a0;
- (void)startDownloadImage;
- (BOOL)stopDownloadImage:(id)a0;
- (void)onDownloadMediaProcessChange:(id)a0 downloadType:(long long)a1 current:(long long)a2 total:(long long)a3;
- (void)kissDeviceWithJsonStr:(id)a0 filePath:(id)a1 device:(id)a2;
- (void)onSendFileToWCLanDevice:(long long)a0 Progress:(float)a1 isFinish:(BOOL)a2 ErrCode:(int)a3;
- (void)uploadDeviceData;
- (id)getEncryptImagePath:(id)a0;
- (id)encryptImageBuffer:(id)a0;
- (BOOL)stopUploadWithDevice:(id)a0;
- (void)OnCdnUpload:(id)a0;
- (void)OnCdnUploadProgress:(id)a0;
- (id)genTimeLineEncrptUrl;
- (void)onKissDeviceResponseWithErrorCode:(unsigned int)a0 queueType:(unsigned long long)a1;
- (void)onKissDeviceProgressResponeWithProgress:(double)a0 queueType:(unsigned long long)a1;
- (BOOL)cancelTaskWithDevice:(id)a0;
- (unsigned long long)getRandNumber;
- (void).cxx_destruct;

@end
