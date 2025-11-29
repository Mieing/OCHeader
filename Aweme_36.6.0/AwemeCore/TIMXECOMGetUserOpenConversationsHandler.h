@class TIMXSDKInstance, NSObject;
@protocol OS_dispatch_queue, TIMXKVStorageProtocol;

@interface TIMXECOMGetUserOpenConversationsHandler : NSObject {
    TIMXSDKInstance *_r;
}

@property (nonatomic) int inbox;
@property (nonatomic) long long userID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *messageProcessQueue;
@property (retain, nonatomic) id<TIMXKVStorageProtocol> kvStorage;

- (id)initWithInbox:(int)a0 userID:(long long)a1 rootObject:(id)a2;
- (void)fetchAllOpenConversationsWithCurVersion:(long long)a0 completion:(id /* block */)a1;
- (void)__fetchAllOpenConversationsWithCurVersion:(long long)a0 curFetchConversationCount:(long long)a1 completion:(id /* block */)a2;
- (void)loadHistoryMessageWithConversationID:(id)a0 inbox:(int)a1;
- (void).cxx_destruct;

@end
