@class NSURLSession, NSString, NSMutableDictionary, NSMutableArray;
@protocol WAPackageDownloadLogicDelegate;

@interface WAPackageDownloadLogic : NSObject <NSURLSessionDelegate, NSURLSessionDownloadDelegate, ICdnComMgrExt, WAPackageDownloadTaskDelegate> {
    NSMutableDictionary *_dicDownloadStatus;
    NSMutableArray *_arrWaittingTaskQueue;
    NSMutableArray *_arrDownloadingTaskQueue;
}

@property (retain, nonatomic) NSURLSession *session;
@property (weak, nonatomic) id<WAPackageDownloadLogicDelegate> m_delegate;
@property (nonatomic) BOOL bUseSerialMode;
@property (nonatomic) unsigned long long pkgType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)shouldUseCdnDownLoad;
- (BOOL)shouldUseCronetDierctlyDownLoad;
- (unsigned int)getDownloadDNSTypeWithUrl:(id)a0;
- (BOOL)dominCanUseSimpleDNS:(id)a0;
- (void)realStartDownloadWithTask:(id)a0;
- (void)invalidate;
- (id)getDownloadFileIdentifier:(id)a0;
- (BOOL)isDownloadingTaskWithUrlStr:(id)a0;
- (id)getDownloadDirectoryPath:(id)a0;
- (void)addDownloadTaskWithParams:(id)a0;
- (void)checkQueue;
- (void)raiseDownloadPriorityWithAppid:(id)a0;
- (void)cancelAllDownloads;
- (void)cancelDownloadTaskWithUrlStr:(id)a0;
- (void)cleanTmpDirectory;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)reportDownloadSpendTime:(double)a0 isDownloadError:(BOOL)a1 fileIdentifier:(id)a2;
- (float)remainingTimeForDownload:(id)a0 bytesTransferred:(long long)a1 totalBytesExpectedToWrite:(long long)a2;
- (void)onCronetDownloadResponse:(id)a0 filePath:(id)a1 protocolInfo:(id)a2;
- (void)OnCronetDownloadProgress:(id)a0;
- (void)OnCdnDownloadProgress:(id)a0;
- (void)OnCdnDownload:(id)a0;
- (void)onDownloadSuccess:(id)a0 protocolInfo:(id)a1 sourceFilePath:(id)a2 downloadType:(unsigned long long)a3;
- (void)onDownloadFail:(id)a0 statusCode:(int)a1 retCode:(int)a2 transferInfo:(id)a3 protocolInfo:(id)a4 downloadType:(unsigned long long)a5;
- (unsigned long long)getProtocolFromCdnDownloadInfo:(id)a0;
- (id)getProtocolInfoFromCdnDownloadInfo:(id)a0;
- (id)getDescriptionForDownloadProtocol:(unsigned long long)a0;
- (id)getTaskUrlList;
- (void).cxx_destruct;

@end
