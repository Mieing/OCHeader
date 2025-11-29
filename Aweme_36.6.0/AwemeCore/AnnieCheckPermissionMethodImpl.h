@interface AnnieCheckPermissionMethodImpl : AnnieCheckPermissionMethod

+ (void)permissionService:(id)a0 checkPermission:(long long)a1 refererContext:(id)a2 completion:(id /* block */)a3;

- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)_callbackWithPermissionStatus:(long long)a0 completionHandler:(id /* block */)a1;

@end
