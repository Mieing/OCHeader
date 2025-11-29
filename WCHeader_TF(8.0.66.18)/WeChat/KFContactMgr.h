@class NSString, WCTDatabase, NSMutableDictionary;

@interface KFContactMgr : MMUserService <IMMNewSessionMgrExt, IMsgExt, MMServiceProtocol, PBMessageObserverDelegate> {
    WCTDatabase *_db;
    NSMutableDictionary *_dictBrandUsrName2Cacher;
    NSMutableDictionary *_dictOpenId2ReqInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)getAndUpdateKFContactIfNeed:(id)a0 kfType:(unsigned int)a1 brandUsrName:(id)a2;
- (id)getBindKFContactFromLocal:(id)a0;
- (void)updateBindKFContactToLocal:(id)a0 bindKFContact:(id)a1;
- (id)getLocalKFContactWithOpenId:(id)a0;
- (void)deleteAllKfContacts:(id)a0;
- (void)modifyHeadImgUpdateFlag:(id)a0 isNeedUpdate:(BOOL)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)getKFContactInfoFromSvr:(id)a0 brandUsrName:(id)a1;
- (void)OnAddMsgListForSession:(id)a0 NotifyUsrName:(id)a1;
- (id)pathOfKFDB;
- (id)contactCacherForBrandUsr:(id)a0;
- (void)handleGetKFContactDefaultList:(id)a0;
- (void)handleGetKFContactBindList:(id)a0;
- (void)handleGetKFContactInfo:(id)a0;
- (void)updateKFContactsToLocal:(id)a0 brandUsrName:(id)a1;
- (id)kfContactListFromWorkinfoList:(id)a0 brandUsrName:(id)a1;
- (void).cxx_destruct;

@end
