@class NSString, NSMutableArray, EmoticonRecoverLogicObject;

@interface EmoticonCameraRecoverMgr : MMUserService <EmoticonRecoverLogicObjectDelegate, IMsgExt, CNetworkStatusExt, MMKernelExt, EmoticonServerNotifyTaskDelegate, MMServiceProtocol, EmoticonRecover>

@property (retain, nonatomic) EmoticonRecoverLogicObject *m_recoverLogicObject;
@property (retain, nonatomic) NSMutableArray *m_notifyTaskList;
@property (nonatomic) BOOL m_hasOnceStartRecover;
@property (nonatomic) BOOL m_hasNotStartRecoverTaskInList;
@property (nonatomic) unsigned int m_manageViewRecentUpdateTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)recoverEmoticonFromServer;
- (void)recoverEmoticonFromManageView;
- (BOOL)isRecoveringEmoticon;
- (BOOL)isRecoveringEmoticonComplete;
- (BOOL)isRecoveringStatusSafeForOperation;
- (BOOL)isFirstRecoverAfterAuth;
- (void)tryRecoverAnotherPart;
- (void)checkRecoverEmoticonFromServer;
- (void)setNeedsRecoverAndNeedClearData:(BOOL)a0;
- (BOOL)needRecover;
- (void)onManulLoginOK;
- (void)onServiceClearData;
- (void)onAuthOK;
- (void)ReachabilityChange:(unsigned int)a0;
- (void)OnGetNewXmlMsg:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (BOOL)serverNotifyTaskCanResumeLogic:(id)a0;
- (void)onLogicDidResumed:(id)a0;
- (BOOL)isInManageView;
- (BOOL)needNotifyEmoticonListChangeImmediately;
- (void)onEmoticonRecoverLogicDownloadMd5ListOK;
- (void)onEmoticonRecoverLogicOk;
- (void)onEmoticonRecoverLogicFailed;
- (void)onEmoticonRecoverLogicDownloadOneEmoticonOK;
- (void)onEmoticonRecoverLogicFinishedPartSync;
- (void)onEmoticonRecoverLogicNotifyDownloadProgress;
- (void)runNotifyTask;
- (void).cxx_destruct;

@end
