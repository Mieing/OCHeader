@class WCPayGetCollAssistMenuCgi, NSString, NSMutableDictionary, NSObject, BizAttrSyncCtrl;
@protocol OS_dispatch_queue;

@interface BrandAttrMgr : MMUserService <IContactMgrExt, WCPayGetCollAssistMenuCgiDelegate, MMKernelExt, INewSyncExt, MMServiceProtocol, PBMessageObserverDelegate, IMsgExt, MMConfigMgrExt> {
    NSMutableDictionary *_syncBufList;
    BizAttrSyncCtrl *_syncCtrl;
}

@property (retain, nonatomic) WCPayGetCollAssistMenuCgi *getCollAssistMenuCgi;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workerThread;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)dealloc;
- (BOOL)shouldUseNewAttrCGIToUpdate:(id)a0;
- (BOOL)getBrandInfoByNewAttrCGI:(id)a0;
- (BOOL)getBrandInfoByNewAttrCGI:(id)a0 ignoreCheckInterval:(BOOL)a1;
- (void)onGetContactByNewAttrCGI:(id)a0;
- (BOOL)fetchProfileFirstPkg:(id)a0 bizSessionID:(unsigned int)a1 scene:(unsigned int)a2 userInfo:(id)a3 searchClickId:(id)a4 pageMode:(unsigned int)a5 bizFromScene:(int)a6 isMpManagementScene:(BOOL)a7;
- (BOOL)fetchProfileNextPkg:(id)a0 bizSessionID:(unsigned int)a1 scene:(unsigned int)a2 action:(int)a3 offset:(id)a4 userInfo:(id)a5 searchClickId:(id)a6 pageMode:(unsigned int)a7 bizFromScene:(int)a8 isMpManagementScene:(BOOL)a9;
- (BOOL)_fetchBiz:(id)a0 bizSessionID:(unsigned int)a1 scene:(unsigned int)a2 action:(int)a3 offset:(id)a4 pageSize:(unsigned int)a5 userInfo:(id)a6 searchClickId:(id)a7 pageMode:(unsigned int)a8 bizFromScene:(int)a9 isMpManagementScene:(BOOL)a10;
- (void)onFetchBizProfile:(id)a0;
- (void)requestModifiyUseUserInfoWithSceneType:(unsigned int)a0 appid:(id)a1 JSAPIName:(id)a2 scopeName:(id)a3 state:(unsigned int)a4;
- (void)requestModifyProfileSettingWithBizName:(id)a0 finderUserName:(id)a1 setting:(id)a2;
- (void)handleModBizUseUserInfoResponse:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)handleSetProfileSettingResponse:(id)a0;
- (void)OnGetNewXmlMsg:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (void)onMMDynamicConfigUpdated;
- (unsigned long long)loadRequestIntervalFromDynamicConfig;
- (void)onDeleteContact:(id)a0;
- (void)onNewSyncBatchModContacts:(id)a0;
- (void)updateBrandContact:(id)a0 withSyncBuf:(id)a1;
- (void)deleteSyncBuf:(id)a0;
- (void)deleteSyncBufferWithBrandUserNameList:(id)a0;
- (void)tryLoadSyncBufList;
- (void)asyncQueue_saveBufCache;
- (void)loadBufCache;
- (void)tryLoadSyncCtrl;
- (void)saveCtrlInfo;
- (void)loadCtrlInfo;
- (void)updateCollAssistMenuFromSvr;
- (void)onGetCollAssistMenuCgiResponse:(id)a0;
- (void)onAuthOK;
- (BOOL)trySetCurrentLanguageAsLastLanguage;
- (BOOL)isLanguageChanged;
- (void).cxx_destruct;

@end
