@class AWEUserButtonLightInteractionContext;

@interface AWEUserButtonSendMessageState : AWEUserButtonState

@property (retain, nonatomic) AWEUserButtonLightInteractionContext *context;

- (void)trackQuickReplyWithEventType:(id)a0;
- (id)chatEnterMethod;
- (void)trackEnterChatWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
