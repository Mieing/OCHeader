@class NSString;

@interface AWEHomepageThirdDepModuleService : HTSService <AWEHomepageThirdDepModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createSideBarRecentVisitUserViewControllerWithUserID:(id)a0 title:(id)a1 referString:(id)a2 latestVideo:(BOOL)a3 hasMoreUser:(BOOL)a4 pageHandler:(id)a5 logExtraDict:(id)a6 willDisappearBlock:(id /* block */)a7;
- (id)createSideBarRecentVisitUserListPageHandlerWithUserList:(id)a0;
- (id)getSideBarRevisitUserCacheManager;

@end
