@class CMMDB, NSString, MassSendInfo, NSRecursiveLock, NSMutableDictionary;

@interface MassSendMgr : MMUserService <PBMessageObserverDelegate, MMServiceProtocol, IMsgExt> {
    unsigned int m_uiEventID;
    unsigned int m_uiMaxSupport;
    CMMDB *m_oMMDB;
    NSRecursiveLock *m_oLock;
    NSMutableDictionary *m_dicContacts;
    BOOL m_bDataNeedReload;
    BOOL m_bCancel;
    BOOL m_bFreqLimit;
}

@property (retain, nonatomic) MassSendInfo *m_info;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)getAllContactsFromDB;
- (BOOL)autoReload;
- (id)getContactByName:(id)a0;
- (BOOL)addContactInDB:(id)a0;
- (void)addContact:(id)a0;
- (void)initDB:(id)a0 withLock:(id)a1;
- (id)init;
- (void)dealloc;
- (id)getRealChatUsrByMD5:(id)a0;
- (id)getToListMD5:(id)a0;
- (id)getToList:(id)a0;
- (void)safeCallFailExtension:(unsigned int)a0;
- (void)safeCallFailExtension:(unsigned int)a0 WithErrorMsg:(id)a1;
- (BOOL)WriteAudioFile:(id)a0 LocalID:(unsigned int)a1 Offset:(unsigned int)a2 Len:(unsigned int)a3 Data:(id)a4;
- (BOOL)SaveMesImg:(id)a0 MsgWrap:(id)a1;
- (BOOL)SaveMesThumb:(id)a0 MsgWrap:(id)a1;
- (void)addLocalMessage:(id)a0;
- (void)CreateMassSendEvent;
- (void)MassSend:(id)a0;
- (void)hanldeMassSendUploadOK:(id)a0;
- (void)addSystemMsgWithMassMsgSvrID:(unsigned long long)a0 msgIdForNewXmlList:(id)a1;
- (void)cancelFreqLimit;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (id)GetMsg:(id)a0 FromID:(unsigned int)a1 Limit:(int)a2 LeftCount:(unsigned int *)a3;
- (id)GetMsg:(id)a0 LocalID:(unsigned int)a1;
- (void)DelMsg:(id)a0 MsgWrap:(id)a1;
- (void)CancelMassSend;
- (void)tryUploadDataWithMars;
- (void)uploadDataWithMars;
- (void)onUploadCdnSucc:(id)a0;
- (void)updateVoiceMsgWrap:(id)a0 taskInfo:(id)a1;
- (void)updateVideoMsgWrap:(id)a0 taskInfo:(id)a1;
- (void)updateImageMsgWrap:(id)a0 taskInfo:(id)a1;
- (id)generateVoiceRequestDataWithTaskInfo:(id)a0;
- (id)generateVideoRequestDataWithTaskInfo:(id)a0;
- (BOOL)GetStartAndEndDateFromXmlContent:(id)a0 arrStart:(id)a1 arrEnd:(id)a2;
- (BOOL)isNeedBeTop:(id)a0;
- (id)genMainFrameSessionInfo:(id)a0;
- (void)OnMsgNotAddDBNotify:(id)a0 MsgWrap:(id)a1;
- (BOOL)HandleMassSendTopMsg:(id)a0 MsgWrap:(id)a1;
- (unsigned int)InsertMassSendContact:(id)a0;
- (id)GetAllMassSendContact;
- (void)OnGetNewXmlMsg:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (void).cxx_destruct;

@end
