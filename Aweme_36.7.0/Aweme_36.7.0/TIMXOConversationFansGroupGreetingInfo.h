@class NSString;

@interface TIMXOConversationFansGroupGreetingInfo : TIMXOModel <TIMXOConversationFansGroupWelcomeModelProtocol>

@property (copy, nonatomic) NSString *belongingConversationIdentifier;
@property (nonatomic) int greetingUpdateValue;
@property (copy, nonatomic) NSString *greetingMessages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithGroupManagementInfo:(id)a0;
- (id)initWithRootObject:(id)a0 conversationId:(id)a1;
- (void).cxx_destruct;

@end
