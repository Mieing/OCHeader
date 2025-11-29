@class OpenIMContactExtendCodePB, OpenImSyncMgr, OpenImResourceMgr;

@interface OpenImContactMgr : NSObject <PBMessageObserverDelegate, IMsgExt> {
    OpenImSyncMgr *m_OpenImSyncMgr;
    OpenImResourceMgr *m_OpenImResourceMgr;
    OpenIMContactExtendCodePB *m_openImExtendInfo;
}

+ (id)convertToCContact:(id)a0;
+ (void)fillToCContact:(id)a0 from:(id)a1;
+ (id)convertChatRoomContactToCContact:(id)a0;
+ (void)fillToCContact:(id)a0 fromChatRoomContact:(id)a1;
+ (void)fillToOpenImContact:(id)a0 withOpenImContact:(id)a1;
+ (id)convertChatRoomMemberToCContact:(id)a0 isSimplify:(BOOL)a1;
+ (void)fillToCContact:(id)a0 fromChatRoomMember:(id)a1 isSimplify:(BOOL)a2;
+ (id)getWordingIDFromCContact:(id)a0;
+ (id)getWordingIDFromOpenIMInfo:(id)a0;

- (void)OnGetNewXmlMsg:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (void)OnAddMsg:(id)a0 MsgWrap:(id)a1;
- (void)reportOpenIMNewSucceedAcceptSucceedMessagewrapWithUsrName:(id)a0 andMessageWrap:(id)a1;
- (void)disableOpenIMFriReqAcceptedInWxWorkWithSystemMsgWrap:(id)a0 andNsUsrName:(id)a1;
- (void)doOpenIMStorageArchivePopUpWithSystemMsgWrap:(id)a0 andNsUsrName:(id)a1;
- (id)init;
- (void)dealloc;
- (void)initListen;
- (void)removeListen;
- (id)resourceMgr;
- (void)batchCheckAndUpdataOpenImResource:(id)a0;
- (BOOL)getOpenIMContactOpenUrlFromServer:(id)a0 andLastReceiveContent:(id)a1;
- (void)onGetOpenIMContactOpenUrl:(id)a0;
- (BOOL)getContactsFromServer:(id)a0 chatContact:(id)a1 withTicket:(id)a2;
- (void)onGetContact:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (unsigned int)addOplogType:(unsigned int)a0 Buffer:(id)a1;
- (unsigned int)setOpenImContact:(id)a0 remark:(id)a1;
- (unsigned int)setOpenImContact:(id)a0 black:(BOOL)a1;
- (unsigned int)setOpenImContact:(id)a0 top:(BOOL)a1;
- (unsigned int)setOpenImContact:(id)a0 mute:(BOOL)a1;
- (unsigned int)setOpenImContact:(id)a0 favour:(BOOL)a1;
- (unsigned int)setOpenImContact:(id)a0 fold:(BOOL)a1;
- (unsigned int)deleteOpenImContact:(id)a0 isRetainChatHistory:(BOOL)a1;
- (void)getOpenIMArchivePopUpInfo:(id)a0 privacyAgreementUrl:(id)a1;
- (void)onGetOpenIMArchivePopUpInfo:(id)a0;
- (void)updateOpenIMArchiveStatus:(id)a0 privacyAgreementUrl:(id)a1 isAgreementArchiveStatus:(BOOL)a2;
- (void)onUpdateOpenIMArchiveStatus:(id)a0;
- (void)safeCallOpenIMStorageArchivePopUp:(id)a0 privacyAgreementUrl:(id)a1;
- (void)saveOpenIMContactHadShowSucceedContactWindow:(id)a0;
- (void)saveOpenIMContactHadSucceedContact:(id)a0;
- (BOOL)openIMContactHadShowSucceedContactWindow:(id)a0;
- (BOOL)openIMContactHadSucceedContact:(id)a0;
- (id)getOpenImExtendInfoDataFilePath;
- (void)saveOpenImExtendInfoToDataFileInternal;
- (void)loadOpenImExtendInfoInternal;
- (void).cxx_destruct;

@end
