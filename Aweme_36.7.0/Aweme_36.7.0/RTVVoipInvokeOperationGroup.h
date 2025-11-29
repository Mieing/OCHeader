@class NSString, NSArray;

@interface RTVVoipInvokeOperationGroup : RTVVoipInvokeOperation

@property (readonly, copy, nonatomic) NSString *conversationID;
@property (readonly, copy, nonatomic) NSArray *participatorIDs;
@property (readonly, nonatomic) long long source;
@property (readonly, copy, nonatomic) NSString *inviteText;
@property (readonly, nonatomic) BOOL needCreateGroup;
@property (readonly, nonatomic) BOOL needShowSelectPanel;

- (void)updateInvokeSource:(long long)a0;
- (void)updateConversationID:(id)a0;
- (void)updateInviteText:(id)a0;
- (void)updateNeedCreateGroup:(BOOL)a0;
- (id)initWithConversationID:(id)a0 participatorIDs:(id)a1 voipType:(long long)a2 enterFrom:(unsigned long long)a3;
- (void)updateParticipators:(id)a0;
- (void)updateNeedShowSelectPanel:(BOOL)a0;
- (long long)operationType;
- (void).cxx_destruct;

@end
