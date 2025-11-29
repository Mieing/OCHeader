@class NSString;

@interface WXGChatSyncClientMgr : MMUserService <IMsgExt, ICdnComMgrExt, PBMessageObserverDelegate, MMKernelExt, WXGImportMessageHelperDelegate, MMServiceProtocol> {
    NSString *_lastDownloadFileName;
    BOOL _isAuthFinish;
    BOOL _isManualAuth;
    BOOL _isMainDeviceSupportAfterSleep;
    unsigned int _timeIntervalFromLastSucceedChatSync;
    unsigned int _timeIntervalFromLastSendChatSyncRequest;
    unsigned int _timeLimitPackageMsg;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)hexStringToUnsignedChar:(id)a0 output:(char **)a1 outputLength:(unsigned int *)a2;

- (void)onServiceInit;
- (void)dealloc;
- (void)onRevChatSyncRequest:(id)a0 MsgWrap:(id)a1;
- (void)parseAppMsg:(id)a0;
- (id)getRealSyncDataDirFromUnzipDir:(id)a0;
- (void)importMsgFromSyncFile:(id)a0;
- (BOOL)checkRequestAfterSleepFrequent;
- (void)requestChatSyncAfterSleep;
- (void)sendChatSyncNewXmlWithAction:(id)a0 startTime:(unsigned int)a1 endTime:(unsigned int)a2 sessionName:(id)a3 identifier:(id)a4 limit:(unsigned int)a5;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)onAuthOK;
- (void)onManulLoginOK;
- (void)OnCdnDownload:(id)a0;
- (BOOL)filterMsgBeforeAddToDB:(id)a0;
- (id)getMMKV;
- (void)saveStatus;
- (void)loadStatus;
- (id)decryptOriginAesKeyFromAppMsg:(id)a0 withPrivatekey:(id)a1;
- (void).cxx_destruct;

@end
