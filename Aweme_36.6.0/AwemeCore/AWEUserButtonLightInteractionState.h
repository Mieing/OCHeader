@class AWEUserButtonLightInteractionContext;

@interface AWEUserButtonLightInteractionState : AWEUserButtonState

@property (retain, nonatomic) AWEUserButtonLightInteractionContext *context;

- (void)trackQuickReplyWithEventType:(id)a0;
- (id)getIconCacheImage:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)enter;
- (void)click;

@end
