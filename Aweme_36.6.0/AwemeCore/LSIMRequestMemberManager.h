@class NSArray, NSMutableDictionary;

@interface LSIMRequestMemberManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *requestOnAirDict;
@property (nonatomic) BOOL isMemberRequestOnAir;
@property (nonatomic) BOOL needRequestAdditionalMember;
@property (copy, nonatomic) NSArray *requestConversations;

+ (void)registerCategory;
+ (id)shared;

- (void)requestMemberInChatListWithManager:(id)a0 conversations:(id)a1 completion:(id /* block */)a2;
- (void)requestMemberInChatListWithManager:(id)a0 uidsMap:(id)a1 extend:(id)a2 completion:(id /* block */)a3;
- (void)requestMemberInChatDetailWithManager:(id)a0 conversation:(id)a1 completion:(id /* block */)a2;
- (void)lsimc_requestMemberInChatListWithManager:(id)a0 conversations:(id)a1 completion:(id /* block */)a2;
- (void)lsimc_requestMemberInChatDetailWithManager:(id)a0 conversation:(id)a1 completion:(id /* block */)a2;
- (void)requestMembersInCSChatListSceneWithConversations:(id)a0 memberManager:(id)a1 bizExt:(id)a2 completion:(id /* block */)a3;
- (void)requestMembersInCSChatDetailSceneWithConversation:(id)a0 memberManager:(id)a1 bizExt:(id)a2 completion:(id /* block */)a3;
- (void)requestMembersInKOLChatDetailSceneWithConversation:(id)a0 memberManager:(id)a1 completion:(id /* block */)a2;
- (BOOL)isRequestOnAirWithMemberManager:(id)a0;
- (void)setRequestOnAir:(BOOL)a0 memberManager:(id)a1;
- (void)trackQueryParticipator:(id)a0;
- (void)trackQueryParticipatorWithConversation:(id)a0 result:(BOOL)a1 startTime:(long long)a2 errMsg:(id)a3;
- (id)requestKeyWithMemberManager:(id)a0;
- (void).cxx_destruct;

@end
