@class NSString, CContact, CMessageWrap, NSMutableArray;

@interface SessionReportController : NSObject <SessionReportControllerProtocol> {
    CContact *m_oChatContact;
    unsigned int m_uiUnReadCount;
    unsigned int m_uiReceiveCount;
    unsigned int m_uiSendCount;
    BOOL m_bShowUnreadTip;
    BOOL m_bClickUnreadTip;
    BOOL m_bDidScroll;
    unsigned long long m_enterSessionTimeMs;
    unsigned long long m_leaveSessionTimeMs;
    CMessageWrap *m_lastMsg;
    NSMutableArray *m_msgInfos;
}

@property (nonatomic) unsigned long long fromScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithChatContact:(id)a0 unreadMsgCount:(unsigned int)a1 lastMsg:(id)a2;
- (void)dealloc;
- (void)onSessionWillDisplayMsg:(id)a0;
- (void)onSessionAddMsg:(id)a0;
- (void)onSessionDidScroll;
- (void)onShowUnreadTip;
- (void)onClickUnreadTip;
- (void)onLeaveSession;
- (void)didEnterBackground:(id)a0;
- (void)willEnterForeground:(id)a0;
- (void)willTerminate:(id)a0;
- (void)doReport:(BOOL)a0;
- (void)realReport:(BOOL)a0;
- (int)getEnterScene;
- (void).cxx_destruct;

@end
