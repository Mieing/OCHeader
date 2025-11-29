@class NSString, NSMutableSet, NSMutableDictionary;

@interface WCTempChatMgr : MMUserService <IContactMgrExt, IMMNewSessionMgrExt, PBMessageObserverDelegate, MMServiceProtocol, IMsgExt, IWCBusinessJumpExt> {
    NSMutableSet *_tempSessionUsrNameSet;
    NSMutableDictionary *_getContactInfoDict;
    NSMutableDictionary *_dictCallBackInfo;
    NSMutableDictionary *_dictMsgControllerInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)initData;
- (void)startTempSessionFromJSApi:(id)a0 params:(id)a1 parentViewController:(id)a2 scene:(unsigned int)a3;
- (void)realCreateTempSession:(id)a0 sceneValue:(long long)a1 sessionFrom:(id)a2 parentViewController:(id)a3 callBackInfo:(id)a4;
- (void)pushMsgControllerByContact:(id)a0 parentController:(id)a1;
- (BOOL)isTempChatForUserName:(id)a0;
- (BOOL)isFromBusinessJump:(id)a0;
- (long long)getJumpSceneValue:(id)a0;
- (void)handleJumpCallBack:(id)a0;
- (BOOL)isShowChatMode:(id)a0;
- (BOOL)isShowMenuMode:(id)a0;
- (void)asyncSaveTempChatUsrNames;
- (void)startEnterTempSessionLogicWithQueryDict:(id)a0 parentController:(id)a1 originUrl:(id)a2 translateInfo:(id)a3;
- (void)processTranslateResultWithPath:(id)a0 queryDict:(id)a1 parentController:(id)a2 originUrl:(id)a3 translateInfo:(id)a4 jumpController:(id)a5;
- (void)onModifyContact:(id)a0;
- (void)onFailedToGetContactsFromSvr;
- (void)onDeleteSessionOfUser:(id)a0;
- (void)OnAddMsg:(id)a0 MsgWrap:(id)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (id)pathForUserNameSet;
- (void)sendDelTempSessionReq:(id)a0;
- (void)sendEnterTempSessionReq:(long long)a0 sessionFrom:(id)a1 bizUsrName:(id)a2 userInfo:(id)a3;
- (void).cxx_destruct;

@end
