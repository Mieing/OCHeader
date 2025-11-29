@class NSArray, NSString, NSDictionary, RTVBehaviorOptions;

@interface AWERTVInteractionInvokeOperation : JSONModel

@property (copy, nonatomic) NSArray *inviteUserIDs;
@property (nonatomic) BOOL micMuted;
@property (nonatomic) long long enterFrom;
@property (nonatomic) unsigned long long callScene;
@property (nonatomic) long long initialActrions;
@property (copy, nonatomic) NSString *conversationID;
@property (readonly, nonatomic) unsigned long long interactionType;
@property (copy, nonatomic) NSDictionary *params;
@property (readonly, nonatomic) RTVBehaviorOptions *behaviorOptions;
@property (readonly, copy, nonatomic) NSString *invokeSource;
@property (copy, nonatomic) NSString *tryJoinRoomID;

- (id)initWithInteractionType:(unsigned long long)a0 params:(id)a1;
- (id)initWithInteractionType:(unsigned long long)a0;
- (void)updateInviteUserIDs:(id)a0;
- (void)updateMicMuted:(BOOL)a0;
- (void)updateEnterFrom:(long long)a0;
- (void)updateCallScene:(unsigned long long)a0;
- (void)updateInvokeSource:(id)a0;
- (void)mergeInitialActions:(long long)a0;
- (void)updateConversationID:(id)a0;
- (void).cxx_destruct;

@end
