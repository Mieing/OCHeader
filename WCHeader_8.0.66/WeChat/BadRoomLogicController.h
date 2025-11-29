@class CMMDB, NSString, MMSessionInfo, CBaseContact, CMessageWrap, ProtobufCGIWrap;
@protocol BadRoomLogicControllerDelegate;

@interface BadRoomLogicController : NSObject <PBMessageObserverDelegate, BadRoomMgrExt, CNetworkStatusExt> {
    CMMDB *m_oMMDB;
    CBaseContact *m_contact;
    MMSessionInfo *m_sessionInfo;
    unsigned int m_lastDeleteSequence;
    unsigned int m_initialLastMsgSeq;
    CMessageWrap *m_currentBrokenMsg;
    CMessageWrap *m_nextBrokenMsg;
    unsigned int m_nextNewMessageToGet;
    BOOL m_bHasMoreNewMsg;
    BOOL m_bGettingMsg;
    BOOL m_bHasDownBrokeMsg;
    CMessageWrap *m_firstUnreadMsg;
    ProtobufCGIWrap *m_cgiWrap;
    BOOL m_hasExitRoom;
    BOOL m_hasGetFirstPage;
}

@property (weak, nonatomic) id<BadRoomLogicControllerDelegate> m_delegate;
@property (nonatomic) unsigned int m_firstDownGetSeq;
@property (nonatomic) BOOL m_hasIniitialUnread;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)updateSessionDB:(id)a0;
+ (void)clearUnReadCount:(id)a0;
+ (void)clearSession:(id)a0;
+ (void)clearUnReadCount:(id)a0 clearUndeliverCount:(BOOL)a1;

- (id)initWithContact:(id)a0;
- (void)onEnterRoom:(id)a0;
- (id)getFirstUnreadMsg;
- (void)getChatRoomMsg:(unsigned int)a0 getOld:(BOOL)a1;
- (void)getChatRoomMsg:(unsigned int)a0 getOld:(BOOL)a1 filterSeq:(unsigned int)a2;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (BOOL)HandleGetChatRoomMsgResp:(id)a0 Event:(unsigned int)a1;
- (void)getMoreMsg;
- (void)exitRoom;
- (void)batchAddMsg:(id)a0 ignoreSession:(BOOL)a1;
- (void)onGetRoomNewMsg:(id)a0 continueFlag:(BOOL)a1 isFirstUnRead:(BOOL)a2;
- (void)stopGettingDownForUnreadMsgs;
- (BOOL)filterDownMsgList:(id)a0;
- (BOOL)filterMsgList:(id)a0;
- (void)onGetRoomOldMsg:(id)a0 continueFlag:(BOOL)a1;
- (id)changeToSysMsgIfRevoked:(id)a0;
- (id)createRevokeMsgByOriginMsg:(id)a0 revokeContent:(id)a1;
- (void)updateMsgForSecurityMsgContent:(id)a0 candidateMsgs:(id)a1;
- (void)onSilenceNotify:(id)a0 msgSequence:(unsigned int)a1;
- (void)onDeleteSession:(id)a0 lastSequence:(unsigned int)a1;
- (BOOL)hasBadRoomUnread;
- (void)ReachabilityChange:(unsigned int)a0;
- (void).cxx_destruct;

@end
