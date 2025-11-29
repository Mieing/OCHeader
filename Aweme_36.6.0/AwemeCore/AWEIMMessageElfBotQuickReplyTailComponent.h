@class NSString;

@interface AWEIMMessageElfBotQuickReplyTailComponent : AWEIMFlexComponent <AWEIMMessageElfBotCanReplyDetectAction>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)p_trackWithActionType:(id)a0;
- (void)p_createPresenterIfNeeded;
- (void)elfBotCanReplyMessageDetectChanged:(id)a0;
- (void)p_updateUIIfNeeded:(BOOL)a0;
- (void)p_didTapButton;
- (void)p_showIfNeededWithMessage:(id)a0;
- (void)p_sendMessageWithConversation:(id)a0 elfUser:(id)a1;
- (id)message;

@end
