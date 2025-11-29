@class NSMutableDictionary, NSPointerArray, NSString, TIMXPBResponseLongConnectionCallback, TIMXSDKInstance;

@interface TIMXMessageReadManager : NSObject <TIMXStartUpTaskProtocol, TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (readonly, nonatomic) NSMutableDictionary *sharedData;
@property (retain, nonatomic) TIMXPBResponseLongConnectionCallback *longConnectionCallback;
@property (retain) NSPointerArray *arrDelegate;
@property (nonatomic) double lastThrottleRequestTime;
@property (nonatomic) BOOL hasHandleThrottleRequestPlan;
@property (retain, nonatomic) NSMutableDictionary *dicmThrottleConvID2ShortID;
@property (nonatomic) double throttleTimeInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)startUpOrder;
+ (void)startUpWithRootObject:(id)a0;

- (void)addWeakDelegate:(id)a0;
- (void)userDidLogin:(id)a0;
- (long long)messageReadIndexInConversation:(id)a0 byUserID:(long long)a1;
- (void)fetchMessageReadsWithArrConversationID:(id)a0 arrConversationShortID:(id)a1 arrWhichUserID:(id)a2 inbox:(int)a3 requestFrom:(id)a4 completion:(id /* block */)a5;
- (id)messageReadIndexOfAllUsersInConversation:(id)a0;
- (void)userDidLogout:(id)a0;
- (id)messageReadParticipantsWithConversationID:(id)a0 messageIndex:(long long)a1;
- (BOOL)messageReadWithConversationID:(id)a0 messageIndex:(long long)a1 byUserID:(long long)a2;
- (void)fetchMessageReadsWithConversationID:(id)a0 conversationShortID:(id)a1 requestFrom:(id)a2 completion:(id /* block */)a3;
- (void)fetchMessageReadsWithArrConversationID:(id)a0 arrConversationShortID:(id)a1 requestFrom:(id)a2 completion:(id /* block */)a3;
- (void)fetchAllMembersReadsWithArrConversationID:(id)a0 arrConversationShortID:(id)a1 byInbox:(int)a2 requestFrom:(id)a3 completion:(id /* block */)a4;
- (void)requestReadMessageByInboxWithConvIDs:(id)a0 convShortIDs:(id)a1 requestFrom:(id)a2 completion:(id /* block */)a3;
- (void)fetchMessageReadsForAllConversationWithCompletion:(id /* block */)a0;
- (void)handleThrottleRequest;
- (void)setupLongConnection;
- (void)reloadMessageReadsFromDbWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)handleCallback:(id)a0;
- (void)dealloc;
- (id)initWithRootObject:(id)a0;

@end
