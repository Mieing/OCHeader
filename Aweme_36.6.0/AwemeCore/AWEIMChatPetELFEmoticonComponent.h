@class NSString;

@interface AWEIMChatPetELFEmoticonComponent : AWEIMComponentBase <AWEIMChatPetELFEmoticonComponentInterface, AWEIMMessageListDataAction, AWEUserMessage>

@property (nonatomic) BOOL hasPetELF;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)onConversationDidUpdateWithConversation:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)prefetchAndResolvedACB;
- (void)dealloc;

@end
