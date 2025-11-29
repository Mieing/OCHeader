@class NSMutableDictionary, WCLanDeviceData, CdnUploadTaskInfo, NSMutableArray;

@interface WCLanDeviceFileKissLogic : WCLanDeviceBaseKissLogic <ICdnComMgrExt, PBMessageObserverDelegate> {
    NSMutableDictionary *m_sendTaskMap;
    WCLanDeviceData *m_deviceData;
    NSMutableArray *m_deviceWaitingUploadArray;
    CdnUploadTaskInfo *m_uploadInfo;
    BOOL m_isUploading;
    unsigned int m_uploadProgress;
}

- (id)initWithDelegate:(id)a0 deviceData:(id)a1;
- (void)forwardData:(id)a0 toDevice:(id)a1 isThrouSever:(BOOL)a2;
- (void)dealloc;
- (void)sendFileRequestWithDevice:(id)a0 isTroughSever:(BOOL)a1 fileInfo:(id)a2 uploadInfo:(id)a3;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)handleDeviceMsgTransferAppMsg:(id)a0;
- (void)kissDeviceWithJsonStr:(id)a0 filePath:(id)a1 device:(id)a2;
- (void)onSendFileToWCLanDevice:(long long)a0 Progress:(float)a1 isFinish:(BOOL)a2 ErrCode:(int)a3;
- (void)uploadDeviceData;
- (BOOL)stopUploadWithDevice:(id)a0;
- (void)OnCdnUpload:(id)a0;
- (void)OnCdnUploadProgress:(id)a0;
- (void)onKissDeviceResponseWithErrorCode:(unsigned int)a0;
- (void)onKissDeviceProgressResponeWithProgressInfo:(id)a0;
- (BOOL)cancelTaskWithDevice:(id)a0;
- (void).cxx_destruct;

@end
