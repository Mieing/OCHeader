@class NSString;

@interface AWEPigeonLuckycatUnionImpl : NSObject <AWEIronManPigeonProtocol, AWEPigeonLuckyCatUnionImplPrivateAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pigeonMethodName;
+ (Class)aAWEPigeonLuckyCatUnionImplLiteAdapterClass;
+ (id)create;

- (void)callMethod:(id)a0 arguments:(id)a1 completion:(id /* block */)a2;
- (void)_luckycatCheckAppsInfoWithParams:(id)a0 completion:(id /* block */)a1;
- (void)_luckycatOpenAppWithParam:(id)a0 completion:(id /* block */)a1;
- (void)_luckycatActivateWithParams:(id)a0 completion:(id /* block */)a1;
- (void)_luckycatSyncTimeWithParams:(id)a0 completion:(id /* block */)a1;
- (void)_applyContactsPermissionWithParams:(id)a0 completion:(id /* block */)a1;
- (void)_openRecommendFriendsWithParams:(id)a0 completion:(id /* block */)a1;
- (void)_isContactsGrantedWithParams:(id)a0 appId:(id)a1 completion:(id /* block */)a2;
- (id)_invalidParamError;
- (id)_callbackDictWithDataDict:(id)a0 isSuccess:(BOOL)a1 errorMsg:(id)a2 errorCode:(long long)a3;
- (id)aAWEPigeonLuckyCatUnionImplLiteAdapter;

@end
