@class NSMutableArray;
@protocol ShakeMsgNotifyMgrDelegate;

@interface ShakeMsgNotifyMgr : MMObject <IMsgExt> {
    NSMutableArray *_messageQueue;
    NSMutableArray *_unreadMsgQueue;
    BOOL _messageLoaded;
}

@property (weak, nonatomic) id<ShakeMsgNotifyMgrDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)tryLoadMessage;
- (void)saveMessage;
- (BOOL)hasUnreadMessages;
- (unsigned long long)getUnreadMessageCount;
- (id)getUnreadMessages;
- (id)getUnreadMsgPidDesc;
- (id)getLastestUnreadMessage;
- (id)getMessagesFrom:(id)a0 maxCount:(unsigned int)a1;
- (void)markMessageListRead:(id)a0;
- (void)deleteMessageItem:(id)a0;
- (void)deleteAllMessages;
- (void)insertMsgItem:(id)a0;
- (BOOL)hasSameMsg:(id)a0;
- (void)OnGetNewXmlMsg:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (void).cxx_destruct;

@end
