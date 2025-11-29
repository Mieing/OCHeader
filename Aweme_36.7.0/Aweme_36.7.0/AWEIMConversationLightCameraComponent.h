@class NSString;

@interface AWEIMConversationLightCameraComponent : AWEIMComponentBase <AWEIMConversationLightCameraComponentInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (void)requireShootingForCell:(id)a0 type:(unsigned long long)a1 completion:(id /* block */)a2;
- (id /* block */)lightCameraReplyCompletionBlock;
- (id)tableView;
- (id)conversation;

@end
