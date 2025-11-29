@class NSString, NSArray, CdnUploadTaskInfo, NSDate, WXGChatSyncDataPacker;

@interface WXGChatSyncLogic : NSObject <ICdnComMgrExt, PBMessageObserverDelegate, WXGChatSyncDataPackerDelegate, IOnlineClientMgrExt> {
    NSString *m_uploadingFileName;
    NSString *m_uploadingFilePath;
    BOOL m_startSync;
    long long m_sessionListCount;
    long long m_sessionInfoCount;
    long long m_msgCount;
    long long m_timeLimit;
    NSArray *m_msgIntervalArray;
    NSArray *m_msgLimitArray;
    NSString *m_getMoreIdentifier;
    unsigned long long m_getMoreMsgLimit;
    unsigned int m_dataSize;
    NSDate *m_startSyncDate;
    NSDate *m_startPack;
    NSString *m_pemPublicKey;
    CdnUploadTaskInfo *m_currentUploadInfo;
    BOOL m_bPartnerDeviceLogin;
    unsigned int m_deviceType;
    NSString *m_currentSyncType;
}

@property (retain, nonatomic) WXGChatSyncDataPacker *dataPacker;
@property (copy, nonatomic) NSString *deviceContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)unsignedcharToHexString:(char *)a0 withSize:(unsigned int)a1;

- (id)init;
- (long long)getSessionListCount;
- (long long)getSessionInfoCount;
- (long long)getTimeLimit;
- (void)p_markStartSync;
- (void)p_markStopSync;
- (void)stopSync;
- (void)startSyncWithType:(unsigned long long)a0 withPemKey:(id)a1;
- (void)trySendAppMessage;
- (void)onLoginWeb;
- (void)onLogoutWeb;
- (void)startSleepSyncWithExt:(id)a0 withPemKey:(id)a1;
- (void)startGetMoreSynceWithExt:(id)a0 withPemKey:(id)a1;
- (void)onChatSyncDataPackFinishWithFilePath:(id)a0 withMsgCount:(unsigned long long)a1;
- (void)startUploadDataToCDNWithFilePath:(id)a0;
- (void)OnCdnUpload:(id)a0;
- (void)autoSendAppMessage;
- (BOOL)sendAppMessage;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)reportStartSync;
- (void)reportSyncSuccess;
- (void)reportCDNFailed;
- (void)reportAppMsgFailed;
- (void).cxx_destruct;

@end
