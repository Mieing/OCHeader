@class NSString;
@protocol ChatRoomMemMsgDataLogicDelegate;

@interface ChatRoomMemMsgDataLogic : NSObject {
    NSString *m_nsChatName;
    NSString *m_nsMemName;
    id<ChatRoomMemMsgDataLogicDelegate> m_delegate;
    unsigned int m_uiFromID;
    unsigned int m_uiCreateTime;
    unsigned int m_uiLeftCount;
}

- (id)initWithChat:(id)a0 memName:(id)a1 delegate:(id)a2;
- (BOOL)isMsgMatch:(id)a0;
- (void)getMsgsLimit:(int)a0;
- (void).cxx_destruct;

@end
