@class AWEIMConversationContext, NSDictionary, NSString;
@protocol AWEIMConversationUpdateInputBarCustomPlaceholderService;

@interface AWEIMInputBarCustomPlaceholderComponent_EnterpriseConversation : AWEIMComponentBase <AWEIMConversationDidFetchPeerFullDetailUserAction, AWEIMEnterpriseQuickReplyInputActionBarAction, AWEIMInputActionBarAction, AWEIMInputActionBarDynamicConfigFetcherAction>

@property (weak, nonatomic) AWEIMConversationContext *conversationContext;
@property (nonatomic) long long strategy;
@property (weak, nonatomic) id<AWEIMConversationUpdateInputBarCustomPlaceholderService> customePlaceholderService;
@property (nonatomic) BOOL actionBarHasResolved;
@property (copy, nonatomic) NSDictionary *placeholderTextDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)didFetchPeerFullDetailUser:(id)a0;
- (void)didResolveEnterpriseQuickReplyInputActionBarWithResult:(BOOL)a0;
- (void)actionBarDisplayStatusDidChange:(BOOL)a0;
- (void)didFetchDynamicConfigWithResultConfig:(id)a0;
- (void)__tryResolveExperimentWithRoleIDs:(id)a0;
- (void)__tryReloadCustomPlaceholder;
- (void).cxx_destruct;
- (id)init;

@end
