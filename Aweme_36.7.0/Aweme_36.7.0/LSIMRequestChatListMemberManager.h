@class LSIMMemberManager, NSMutableDictionary, LSIMThrottle, NSMutableArray;

@interface LSIMRequestChatListMemberManager : NSObject

@property (retain, nonatomic) LSIMMemberManager *memberManager;
@property (retain, nonatomic) LSIMThrottle *requestListThrottle;
@property (retain, nonatomic) NSMutableDictionary *batchShopInfoDict;
@property (retain, nonatomic) NSMutableDictionary *conGroupIdCidDict;
@property (retain, nonatomic) NSMutableArray *requestingMembers;
@property (nonatomic) long long requestCountLimit;

- (void)requestMemberInChatListWithConversation:(id)a0 completion:(id /* block */)a1;
- (void)requestMembersInCSChatList;
- (void).cxx_destruct;
- (id)init;

@end
