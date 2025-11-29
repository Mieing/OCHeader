@class NSString, NSMutableDictionary, SvrErrorTipViewController;

@interface DisasterNoticeMgr : MMRootService <PBMessageObserverDelegate, MMServiceProtocol> {
    unsigned int m_gettingDisasterInfoNoticeId;
    NSMutableDictionary *m_dicSvrErrorInfo;
    unsigned int m_manualAuthNoticeId;
    BOOL m_needContinueHandleAfterManualAuth;
    SvrErrorTipViewController *_fullScreenViewController;
    unsigned long long m_lastFullScreenShowTime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)onManualAuthFinished;

- (void)makeSureInit;
- (void)removeExpireInfos;
- (void)SaveData;
- (void)continueAfterManualAuthFinished;
- (void)onNewDnsError:(id)a0;
- (void)MainThreadNotifyOldIDCErrorMsg:(id)a0;
- (void)onNewIDCErrorWithNoticeId:(unsigned int)a0 uiCgi:(unsigned int)a1;
- (void)MainThreadNotifyIDCErrorMsg:(unsigned int)a0;
- (void)getDisasterInfo:(unsigned int)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)handleDisasterInfo:(id)a0;
- (void)showFullScreenSvrErrorTip:(id)a0 urlStr:(id)a1 timeOut:(unsigned int)a2;
- (void)OnGetLoginDisaster:(id)a0 Tips:(id)a1 Url:(id)a2 isManualAuth:(BOOL)a3;
- (void)OnGetSvrError:(id)a0 Url:(id)a1 Tips:(id)a2;
- (void).cxx_destruct;

@end
