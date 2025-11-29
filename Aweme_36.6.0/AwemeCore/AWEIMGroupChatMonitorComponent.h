@class AWEIMMessageConversation, AWEIMGroupChatMonitorTrigger, AWEIMConversationContext, NSString;

@interface AWEIMGroupChatMonitorComponent : AWEIMComponentBase <AWEIMGroupChatMonitorAction, AWEIMGroupChatMonitorTriggerDelegate>

@property (readonly) AWEIMConversationContext *conversationContext;
@property (readonly) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) AWEIMGroupChatMonitorTrigger *trigger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_viewDidDisappear;
- (void)componentDidMounted:(id)a0;
- (void)__trackEvent:(id)a0 params:(id)a1;
- (void)elementLayoutDone:(id)a0;
- (void)__endMonitorAll;
- (void)__startMonitorAll;
- (void)triggerTrackEvent:(id)a0 params:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
