@class NSNumber, NSString;

@interface AWEIMGroupBotsManagerComponent : AWEIMComponentBase <AWEIMMessageConversationDelegate, AWEIMMessageListDataAction>

@property (retain, nonatomic) NSNumber *botUidCountNum;
@property (nonatomic) BOOL lastAISwitchValue;
@property (copy, nonatomic) NSString *delayTransferSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)onConversationDidUpdateWithConversation:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)participantsDidUpdate;
- (void)botsDidUpdate;
- (void).cxx_destruct;
- (id)conversation;

@end
