@class NSString, NSMutableDictionary, TIMXSDKInstance, TIMXPBResponseLongConnectionCallback;

@interface TIMXOBroadCast : NSObject {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) NSMutableDictionary *imageFiles;
@property (retain, nonatomic) TIMXPBResponseLongConnectionCallback *longConnectCallback;
@property (nonatomic) BOOL isFetching;
@property (nonatomic) long long cursor;
@property (copy, nonatomic) NSString *conversationID;
@property (nonatomic) long long limit;
@property (nonatomic) int inbox;
@property (copy, nonatomic) id /* block */ receiveMessageBlock;
@property (copy, nonatomic) id /* block */ receiveCMDMessageBlock;

- (void)broadCastSendMessage:(id)a0 inbox:(int)a1 conversationId:(id)a2 completion:(id /* block */)a3;
- (void)broadCastUserCounter:(id)a0 inbox:(int)a1 completion:(id /* block */)a2;
- (void)handleReceiveNewMessage:(id)a0;
- (void)handleReceiveNewCMDMessage:(id)a0;
- (id)converMessageAndCacheImageFiles:(id)a0;
- (void)loadNewerBroadCastRecvMessageConversationId:(id)a0 inbox:(int)a1 cursor:(long long)a2 limit:(long long)a3 pullType:(int)a4 completion:(id /* block */)a5;
- (void)loadNewerBroadCastRecvMessageConversationId:(id)a0 inbox:(int)a1 cursor:(long long)a2 limit:(long long)a3 completion:(id /* block */)a4;
- (void)loadOlderBroadCastRecvMessageConversationId:(id)a0 inbox:(int)a1 cursor:(long long)a2 limit:(long long)a3 completion:(id /* block */)a4;
- (id)filesByMessageIdentifier:(id)a0 withDisplayType:(id)a1;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
