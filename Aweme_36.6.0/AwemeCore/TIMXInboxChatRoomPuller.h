@class NSString, TIMXSDKInstance, TIMXPBResponseLongConnectionCallback, NSObject;
@protocol OS_dispatch_queue, TIMXInboxChatRoomPullerDelegate;

@interface TIMXInboxChatRoomPuller : NSObject {
    TIMXSDKInstance *_r;
}

@property (nonatomic) int inbox;
@property (copy, nonatomic) NSString *conversationID;
@property long long currentIndexV2;
@property long long pullIndex;
@property (retain, nonatomic) TIMXPBResponseLongConnectionCallback *notifyNewMessageCallback;
@property BOOL pullingOfflineMessage;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;
@property (weak, nonatomic) id<TIMXInboxChatRoomPullerDelegate> delegate;

- (void)appEnterForeground:(id)a0;
- (id)initWithRootObject:(id)a0 inbox:(int)a1 conversationID:(id)a2 currentIndex:(long long)a3;
- (void)tokenChanged:(id)a0;
- (void)notifyConversationHasNewMessage:(id)a0;
- (void)wsStateChangedToConnected:(id)a0;
- (void).cxx_destruct;
- (void)kickoff;
- (void)appDidEnterBackground:(id)a0;
- (void)dealloc;
- (BOOL)validateMessage:(id)a0;

@end
