@class NSString;

@interface AWEIMGameInviteMessageSchemeTransferCoordinatorDefalut : NSObject <AWEIMGameInviteMessageSchemeTransferCoordinatorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)transferWithScheme:(unsigned long long)a0 scheme:(id)a1 gameStationScheme:(id)a2 shouldCheckAppExist:(BOOL)a3 shouldOpenGameStation:(BOOL)a4 completion:(id /* block */)a5;
- (void)openExternalUrlWithURL:(id)a0 completion:(id /* block */)a1;
- (void)openExternalSchemeWithGameStationScheme:(id)a0 scheme:(id)a1 shouldCheckAppExist:(BOOL)a2 shouldOpenGameStation:(BOOL)a3 url:(id)a4 completion:(id /* block */)a5;
- (void)adjustSchemeIfNeededWithMessage:(id)a0 completion:(id /* block */)a1;
- (void)transferWithMessage:(id)a0 scheme:(id)a1 completion:(id /* block */)a2;

@end
