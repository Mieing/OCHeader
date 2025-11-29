@interface AWETimorOpenPlatformManager : NSObject

+ (id)sharedManager;

- (void)requestIMGameFansEnterCheckWithGroupID:(id)a0 clientKey:(id)a1 openID:(id)a2 completion:(id /* block */)a3;
- (void)shareGameAddGroupWithId:(id)a0 appID:(id)a1 isHalfPage:(BOOL)a2 extraDict:(id)a3 completion:(id /* block */)a4;
- (void)requestOpenIDWithAppID:(id)a0 completion:(id /* block */)a1;
- (void)shareGameAddGroupWithId:(id)a0 appID:(id)a1 completion:(id /* block */)a2;

@end
