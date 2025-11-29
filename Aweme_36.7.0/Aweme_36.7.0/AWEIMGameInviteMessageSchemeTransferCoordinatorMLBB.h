@class NSString;

@interface AWEIMGameInviteMessageSchemeTransferCoordinatorMLBB : AWEIMGameInviteMessageSchemeTransferCoordinatorDefalut <AWEIMGameInviteMessageSchemeTransferCoordinatorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)adjustSchemeIfNeededWithMessage:(id)a0 completion:(id /* block */)a1;
- (void)transferWithMessage:(id)a0 scheme:(id)a1 completion:(id /* block */)a2;

@end
