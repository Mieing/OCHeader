@class NSString, TIMXOConversation, NSArray, TIMXSDKInstance;
@protocol TIMXMessageModelProtocol;

@interface TIMXOThreadModel : NSObject <IGListDiffable> {
    TIMXSDKInstance *_r;
}

@property (nonatomic) long long limit;
@property (retain, nonatomic) id<TIMXMessageModelProtocol> rootMessage;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) TIMXOConversation *thread;
@property (retain) NSArray *latestMessages;
@property (nonatomic) long long messageCount;

+ (id)instanceWithRootObject:(id)a0 threadID:(id)a1 rootMessage:(id)a2 shouldFilterMessageBlock:(id /* block */)a3;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (id)initWithRootObject:(id)a0 threadID:(id)a1 rootMessage:(id)a2;
- (void)refreshLatestMessagesWithFilterBlock:(id /* block */)a0;
- (id)p_getLatestMessageWithFilterBlock:(id /* block */)a0 latestMsgs:(id)a1 beforeMessage:(id)a2;
- (id)initWithThread:(id)a0 latestMessages:(id)a1 rootMessage:(id)a2 sdkRoot:(id)a3 shouldFilterMessageBlock:(id /* block */)a4;
- (void).cxx_destruct;

@end
