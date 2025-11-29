@class NSString;

@interface AWEIMMessageListGroupForbiddenTipComponent : AWEIMMessageListTopFloatingBaseComponent <AWEIMMessageListDataAction>

@property (copy, nonatomic) NSString *tip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)onConversationDidUpdateWithConversation:(id)a0;
- (id)shouldContinueForPriorityObject:(id)a0;
- (id)shouldRemoveForPriorityObject:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)didReceiveNewMessage:(id)a0 reason:(long long)a1;
- (void)processPunishmentForConversation:(id)a0;
- (void)dismissForbiddenTipIfNeed;
- (void)showForbiddenNoticeTip:(id)a0;
- (void).cxx_destruct;

@end
