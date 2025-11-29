@class NSString;

@interface AWEIMChatListTransformComponent : AWEIMComponentBase <AWEIMChatListTransformInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (void)didTransferToChat:(id)a0 entryType:(long long)a1 isPushByFromVC:(BOOL)a2 extraParams:(id)a3 completion:(id /* block */)a4;
- (void)didDeleteChat:(id)a0;

@end
