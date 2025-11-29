@class NSString;

@interface GameLitePkgUpdateMgr : MMUserService <MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)getGameLitePkgWithPkgId:(id)a0 liteAppId:(id)a1 pagePath:(id)a2 complectionBlock:(id /* block */)a3;
- (id)doubleCheckGetLiteAppInfoItemWithPkgId:(id)a0 liteAppId:(id)a1;
- (void)callComplectionWithPkgId:(id)a0 liteAppId:(id)a1 complectionBlock:(id /* block */)a2 liteItem:(id)a3;

@end
