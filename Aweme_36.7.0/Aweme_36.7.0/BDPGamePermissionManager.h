@class NSString;

@interface BDPGamePermissionManager : NSObject <BDPGamePermissionFooterViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)acquirePermissionForScopes:(id)a0 source:(id)a1 uniqueID:(id)a2 onShow:(id /* block */)a3 onClick:(id /* block */)a4 extra:(id)a5 completion:(id /* block */)a6;
- (void)footerDidClickProtocol:(id)a0 protocol:(id)a1;
- (void)showPermissionView:(id)a0 source:(id)a1 popupConfig:(id)a2 onShow:(id /* block */)a3 onClick:(id /* block */)a4 extra:(id)a5 completion:(id /* block */)a6;
- (id)getAuthResultWithSelectScopes:(id)a0 unselectedScopes:(id)a1;
- (void)saveAuthResultToServer:(id)a0 source:(id)a1 popupConfig:(id)a2 authResult:(id)a3 completion:(id /* block */)a4;
- (void)event:(id)a0 uniqueID:(id)a1 source:(id)a2 popupConfig:(id)a3 extra:(id)a4;
- (id)sceneFromScopeList:(id)a0;
- (id)authChannelFromSource:(id)a0;
- (void)acquirePermissionForScopes:(id)a0 source:(id)a1 uniqueID:(id)a2 completion:(id /* block */)a3;
- (void)acquireAllPermission:(id)a0 source:(id)a1 completion:(id /* block */)a2;
- (void)acquireNoAdCardPermission:(id)a0 completion:(id /* block */)a1;
- (void)showPermissionView:(id)a0 source:(id)a1 popupConfig:(id)a2 completion:(id /* block */)a3;

@end
