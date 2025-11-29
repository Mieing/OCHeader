@interface AWEOpenPlatformShareNetworking : NSObject

+ (void)requestAwemeItemWithID:(id)a0 completion:(id /* block */)a1;
+ (void)requestRealUidsWithOpenIDs:(id)a0 appId:(id)a1 clientKey:(id)a2 completion:(id /* block */)a3;
+ (id)getRealUIDWithRealOpenID:(id)a0 clientKey:(id)a1;
+ (void)saveOrClearRealUID:(id)a0 realOpenID:(id)a1 clientKey:(id)a2;
+ (BOOL)shouldStorageOpenIDAndUID;
+ (id)generateSkipRequestPermissionResultWithRequestParams:(id)a0;
+ (void)requestIMShareCheckWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)requestSecUidWithUserOpenId:(id)a0 inviteeOpenId:(id)a1 appId:(id)a2 clientKey:(id)a3 completion:(id /* block */)a4;
+ (void)requestInvokeGameInfoWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)requestInvokeCardTemplateIDInfoWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)requestIronManCardIMInfoWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)requestCheckGameGroupId:(id)a0 completion:(id /* block */)a1;
+ (void)requestIMGameFansEnterCheckWithGroupID:(id)a0 clientKey:(id)a1 openID:(id)a2 completion:(id /* block */)a3;
+ (void)requestOpenShareCheckPermisionWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)getPoiDetail:(id)a0 completion:(id /* block */)a1;

@end
