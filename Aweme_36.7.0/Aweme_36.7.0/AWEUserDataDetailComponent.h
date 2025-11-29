@class NSString, AWEUserModel, AWEProfilePreloadUser;

@interface AWEUserDataDetailComponent : AWEUserDetailBaseComponent <AWEUserDataDetailComponentProtocol>

@property (retain, nonatomic) AWEProfilePreloadUser *userPreloader;
@property (nonatomic) long long fromScene;
@property (retain, nonatomic) AWEUserModel *user;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fetchUserExtraParams;
- (BOOL)onConfigWithRouterParamDict:(id)a0;
- (BOOL)hasPreloadUser:(BOOL)a0 completion:(id /* block */)a1;
- (void)fetchUser:(id /* block */)a0;
- (id)p_tabLandingParams;
- (id)p_noNeedParsedParamsToServer;
- (id)secUserID;
- (id)userID;
- (id)model;
- (void).cxx_destruct;
- (BOOL)isCurrentUser;
- (void)onInit;

@end
