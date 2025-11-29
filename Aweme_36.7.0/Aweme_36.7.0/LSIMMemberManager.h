@class NSDictionary, NSMutableDictionary;
@protocol LSIMMember, LSIMServiceClient;

@interface LSIMMemberManager : NSObject

@property (copy, nonatomic) NSDictionary *memberBizExt;
@property (retain, nonatomic) NSMutableDictionary *mMembers;
@property (weak, nonatomic) id<LSIMServiceClient> client;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) id<LSIMMember> currentUser;
@property (retain, nonatomic) id<LSIMMember> otherSideUser;
@property (readonly, copy, nonatomic) NSDictionary *members;

+ (void)registerCategory;

- (void)requestChatDetailMembersWithConversation:(id)a0 completion:(id /* block */)a1;
- (id)memberInChatDetailWithMessage:(id)a0;
- (id)createMemberIfNeededWithKey:(id)a0;
- (void)bindRealMember:(id)a0 withKey:(id)a1;
- (BOOL)isEqualToSelfKeyWithKey:(id)a0;
- (id)selfKey;
- (id)selfKey;
- (void)requestChatListMembersWithConversations:(id)a0 completion:(id /* block */)a1;
- (void)requestChatListMembersWithUidsMap:(id)a0 extend:(id)a1 completion:(id /* block */)a2;
- (id)memberInChatListWithConversation:(id)a0;
- (id)memberInChatListWithUid:(id)a0;
- (id)memberInChatDetailWithUid:(id)a0;
- (id)lsimc_memberInChatListWithConversation:(id)a0;
- (void).cxx_destruct;
- (id)client;
- (id)initWithScene:(unsigned long long)a0;

@end
