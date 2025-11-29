@class NSString, TIMXSDKInstance, TIMXInboxChatRoomPuller, NSObject;
@protocol OS_dispatch_queue, TIMXOMessagesChatRoomDataSourceDelegate;

@interface TIMXOMessagesChatRoomDataSource : NSObject <TIMXInboxChatRoomPullerDelegate, TIMXOMessageSenderDelegate> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) TIMXInboxChatRoomPuller *puller;
@property (copy, nonatomic) NSString *token;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) NSString *conversationID;
@property (weak, nonatomic) id<TIMXOMessagesChatRoomDataSourceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)message:(id)a0 inConversation:(id)a1 didReceiveResponse:(id)a2 error:(id)a3;
- (id)initWithRootObject:(id)a0 inbox:(int)a1 conversationID:(id)a2 currentIndex:(long long)a3;
- (void)chatRoomPuller:(id)a0 didReceiveMessages:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setup;

@end
