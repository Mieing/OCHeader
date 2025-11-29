@class NSString, NSMutableDictionary;

@interface MMEnterpriseBrandSessionMgr : MMUserService <ISessionInfoExt, MMServiceProtocol, IMsgExt, IContactMgrExt, IMMNewSessionMgrExt, IMMNewSessionMgrFilterExt, IEnterpriseBrandContactMgrExt> {
    NSMutableDictionary *_dictMainUsr2SubSessionCacher;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onServiceMemoryWarning;
- (unsigned int)sessionCountWithMainUsrName:(id)a0;
- (unsigned int)sessionUnreadCountWithMainUsrName:(id)a0 isExcludeMuteSession:(BOOL)a1 except:(id)a2;
- (unsigned int)sessionUnreadCountWithMainUsrName:(id)a0 isExcludeMuteSession:(BOOL)a1;
- (id)sessionInfoWithMainUsrName:(id)a0 atIndex:(long long)a1;
- (id)sessionCellDataWithMainUsrName:(id)a0 atIndex:(long long)a1;
- (id)convertSessionInfoWithSubUsrName:(id)a0;
- (id)sessionInfoListWithMainUsrName:(id)a0;
- (id)genMainFrameSessionInfo:(id)a0;
- (void)addSessionOfSubBrandContact:(id)a0;
- (void)deleteSessionListOfMainUsrName:(id)a0;
- (void)deleteSessionOfSubUsrName:(id)a0 mainUsrName:(id)a1 clearMsg:(BOOL)a2 notifyChange:(BOOL)a3;
- (void)clearUnReadCountOfMainUsrName:(id)a0;
- (void)topSessionOfSubUsrName:(id)a0;
- (void)updateSessionOfSubUsrName:(id)a0;
- (void)clearUnReadCountOfSubUsrName:(id)a0;
- (void)checkBrandOfMainUsrName:(id)a0;
- (void)notifyEnterpriseBrandSessionsChanged:(id)a0;
- (void)openEnterpriseWebSubBrand:(id)a0 navigationController:(id)a1;
- (void)openEnterpriseWebSubBrand:(id)a0 navigationController:(id)a1 completion:(id /* block */)a2;
- (void)openWebview:(id)a0 inChatBrand:(id)a1 inEnterpriseChat:(id)a2 navigationController:(id)a3;
- (void)openEnterpriseNormalSubBrand:(id)a0 navigationController:(id)a1;
- (void)openEnterpriseHomeContactUrl:(id)a0 navigationController:(id)a1;
- (void)onGetDraft:(id)a0 contact:(id)a1;
- (void)onModifyDraft:(id)a0 contact:(id)a1 draftTime:(unsigned int)a2;
- (void)onEnterpriseBrandContactChanged:(id)a0;
- (void)onEnterpriseBrandContactDeleted:(id)a0;
- (void)onDeleteSessionOfUser:(id)a0;
- (BOOL)isUserShouldHandled:(id)a0;
- (BOOL)isMessageShouldHandled:(id)a0;
- (id)isUserHasSpecalSessionInfo:(id)a0;
- (void)OnDelMsg:(id)a0;
- (void)OnUnReadCountChange:(id)a0;
- (void)OnAddMsg:(id)a0 MsgWrap:(id)a1;
- (void)OnAddMsgListForSession:(id)a0 NotifyUsrName:(id)a1;
- (void)OnModMsg:(id)a0 MsgWrap:(id)a1;
- (id)subSessionCacher:(id)a0;
- (id)subSessionCacherWithSubUsrName:(id)a0;
- (id)sessionInfoWithSubUsrName:(id)a0;
- (id)sessionInfoWithSubUsrName:(id)a0 mainUsrName:(id)a1;
- (id)getMainUsrName:(id)a0;
- (BOOL)isExistRedDot:(id)a0;
- (unsigned int)sessionNewArrivalUnreadCountWithMainUsrName:(id)a0;
- (BOOL)isShowRedDotWithMainUsrName:(id)a0;
- (id)getSubBrandSessionInfoOfLastMsg:(id)a0;
- (BOOL)checkSessionHasLastMsg:(id)a0;
- (void)updateMainSession:(id)a0;
- (void)addMainSession:(id)a0 notify:(BOOL)a1;
- (void)deleteMainSession:(id)a0;
- (BOOL)hasBrandSessionNewFlag:(id)a0;
- (void)setBrandSessionNewFlag:(id)a0;
- (void)resetBrandSessionNewFlag:(id)a0;
- (void)resetBrandSessionNewFlag:(id)a0 mainUserName:(id)a1;
- (void).cxx_destruct;

@end
