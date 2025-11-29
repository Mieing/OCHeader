@class NSString, CMessageWrap;

@interface CPushContact : CContact

@property (retain, nonatomic) NSString *m_nsSource;
@property (nonatomic) BOOL m_bReaded;
@property (nonatomic) unsigned int m_uiPushTime;
@property (retain, nonatomic) NSString *m_nsDes;
@property (retain, nonatomic) NSString *m_nsTicket;
@property (retain, nonatomic) CMessageWrap *m_oMessage;
@property (nonatomic) unsigned int m_uiOpCode;
@property (nonatomic) unsigned int m_uiStatus;
@property (retain, nonatomic) NSString *m_nsChatRoomUserName;
@property (retain, nonatomic) NSString *m_nsSourceUserName;
@property (retain, nonatomic) NSString *m_nsSourceNickName;
@property (retain, nonatomic) NSString *m_nsShareCardUserName;
@property (retain, nonatomic) NSString *m_nsShareCardNickName;
@property (nonatomic) unsigned int m_uiOpenimVerifyStatus;
@property (nonatomic) BOOL m_bHadMMContactDelete;
@property (nonatomic) BOOL m_bSuspiciousUser;
@property (retain, nonatomic) NSString *m_safetyWarning;
@property (retain, nonatomic) NSString *m_safetyWarningDetail;

+ (id)thread_GetContactDetailFromMsg:(id)a0;

- (id)init;
- (BOOL)genPushContactFromMsgWrap:(id)a0;
- (id)xmlForMessageWrapContent:(id)a0 OpCode:(unsigned int)a1;
- (long long)comparePushContactAscending:(id)a0;
- (id)initWithMsgWrap:(id)a0;
- (BOOL)IsShake;
- (BOOL)isMsgSendFromMe;
- (BOOL)isVerifyRequestFromMe;
- (BOOL)isWaitingForVerify;
- (BOOL)isAddRequestContact;
- (void)getPushContactSource;
- (void)getPushContactDes;
- (BOOL)isExpire;
- (id)description;
- (long long)compare:(id)a0;
- (id)toContact;
- (BOOL)copyFieldFromContact:(id)a0;
- (BOOL)isMobilePush;
- (void).cxx_destruct;

@end
