@class NSString, NSMutableDictionary, TIMXSDKInstance, NSMutableArray;

@interface TIMXBroadCast : NSObject <TIMXBroadCastProtocol, TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) NSMutableArray *messagesArray;
@property (retain, nonatomic) NSMutableDictionary *dicMessageSendingCompletion;
@property (retain, nonatomic) NSMutableDictionary *imageMessageSendingDic;
@property (nonatomic) int inbox;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)uploadSuccessRequest:(id)a0;
- (void)uploadFailRequest:(id)a0;
- (void)broadCastRecvMessageConversationId:(id)a0 inbox:(int)a1 cursor:(long long)a2 limit:(long long)a3 reverse:(BOOL)a4 pullType:(int)a5 completion:(id /* block */)a6;
- (id)messageModelFromPBMessage:(id)a0;
- (void)_broadCastSendMessage:(id)a0 inbox:(int)a1 conversationId:(id)a2 needNetWork:(BOOL)a3 completion:(id /* block */)a4;
- (void)removeCacheWith:(id)a0;
- (void)broadCastSendMessage:(id)a0 inbox:(int)a1 conversationId:(id)a2 completion:(id /* block */)a3;
- (void)broadCastReverseRecvMessageConversationId:(id)a0 inbox:(int)a1 cursor:(long long)a2 limit:(long long)a3 pullType:(int)a4 completion:(id /* block */)a5;
- (void)broadCastUserCounter:(id)a0 inbox:(int)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
