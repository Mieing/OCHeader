@interface BDXBridgeCheckPermissionV2Method : BDXBridgeMethod

+ (void)checkWithModel:(id)a0 completion:(id /* block */)a1;
+ (unsigned long long)permissionStatusForCalendarWithRefererContext:(id)a0;
+ (void)execCheckWithModel:(id)a0 completion:(id /* block */)a1;
+ (unsigned long long)permissionStatusForMediaType:(id)a0;
+ (void)notificationPermissionWithCompletion:(id /* block */)a0;
+ (id)permissionStatusForContacts;
+ (id)permissionStatusForLocation;
+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (void)_callbackWithPermissionStatus:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (long long)authType;
- (id)methodName;

@end
