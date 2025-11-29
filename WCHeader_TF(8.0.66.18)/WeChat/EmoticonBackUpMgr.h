@class NSString, NSMutableArray, EmoticonRecoverLogicObject;

@interface EmoticonBackUpMgr : MMUserService <EmoticonRecoverLogicObjectDelegate, MMKernelExt, CNetworkStatusExt, IMsgExt, EmoticonServerNotifyTaskDelegate, MMServiceProtocol, EmoticonRecover>

@property (retain, nonatomic) EmoticonRecoverLogicObject *m_recoverLogicObject;
@property (retain, nonatomic) NSMutableArray *m_notifyTaskList;
@property (nonatomic) BOOL m_hasOnceStartRecover;
@property (nonatomic) unsigned int m_lastManageViewUploadTime;
@property (nonatomic) BOOL m_hasNotStartRecoverTaskInList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onServiceClearData;
- (BOOL)canStartCgiNow;
- (void)recoverEmoticonFromManageView;
- (BOOL)recoverEmoticonFromServer;
- (BOOL)isRecoveringEmoticon;
- (BOOL)isRecoveringEmoticonComplete;
- (BOOL)isRecoveringEmoticonFromServer;
- (BOOL)isRecoveringStatusSafeForOperation;
- (BOOL)isFirstRecoverAfterAuth;
- (void)tryRecoverAnotherPart;
- (void)checkRecoverEmoticonFromServer;
- (BOOL)needRecover;
- (void)onEmoticonRecoverLogicDownloadMd5ListOK;
- (void)onEmoticonRecoverLogicOk;
- (void)onEmoticonRecoverLogicFailed;
- (void)onEmoticonRecoverLogicDownloadOneEmoticonOK;
- (BOOL)isInManageView;
- (BOOL)needNotifyEmoticonListChangeImmediately;
- (void)onEmoticonRecoverLogicFinishedPartSync;
- (void)onEmoticonRecoverLogicNotifyDownloadProgress;
- (void)setNeedsRecoverAndNeedClearData:(BOOL)a0;
- (void)onAuthOK;
- (void)onManulLoginOK;
- (void)ReachabilityChange:(unsigned int)a0;
- (void)OnGetNewXmlMsg:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (BOOL)serverNotifyTaskCanResumeLogic:(id)a0;
- (void)onLogicDidResumed:(id)a0;
- (void)runNotifyTask;
- (void).cxx_destruct;

@end
