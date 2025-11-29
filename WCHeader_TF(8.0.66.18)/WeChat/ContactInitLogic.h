@class NSMutableArray;
@protocol ContactInitLogicExt;

@interface ContactInitLogic : MMObject <PBMessageObserverDelegate> {
    id<ContactInitLogicExt> m_delegate;
    NSMutableArray *m_usernames;
    NSMutableArray *m_failedUsernames;
    struct ContactInitSeqs { unsigned int currentWxcontactSeq; unsigned int currentChatRoomContactSeq; } m_contactInitSeqs;
    unsigned long long m_totalContactCount;
    unsigned long long m_finishedContactCount;
}

+ (BOOL)isContactInited;
+ (void)setContactInitedStatus:(BOOL)a0;

- (id)initWithDelegate:(id)a0;
- (BOOL)startContactInitLogic;
- (BOOL)tryGetUsernames;
- (void)handleGetUsernamesRsp:(id)a0;
- (void)doGetContactLogic;
- (BOOL)tryGetContacts;
- (void)handleGetContactsRsp:(id)a0;
- (void)checkIsSucceed;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
