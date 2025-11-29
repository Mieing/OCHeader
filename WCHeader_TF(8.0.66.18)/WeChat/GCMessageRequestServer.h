@class GCChatRoomServer;

@interface GCMessageRequestServer : NSObject

@property (retain, nonatomic) GCChatRoomServer *chatRoomServer;
@property (nonatomic) long long channelId;
@property (nonatomic) long long requestSeq;

- (id)initWithChatRoomServer:(id)a0;
- (void)invalidatePreviousRequest;
- (void)loadMessageLtSeq:(unsigned long long)a0 completionBlock:(id /* block */)a1;
- (void)loadMessageGtSeq:(unsigned long long)a0 completionBlock:(id /* block */)a1;
- (void)getChatRoomMsg:(id)a0 completionBlock:(id /* block */)a1;
- (void)clearMinAndMaxMsgSeq;
- (void).cxx_destruct;

@end
