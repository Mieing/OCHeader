@class NSString;

@interface IESIMHomePageService : HTSService <IESIMHomePageService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)feedRootViewController;
- (BOOL)hasLeftSideBarEntrance;
- (BOOL)leftSideBarCacheDataHasCurrentBusinessId:(id)a0;
- (BOOL)isTopVCRecommendFeed;
- (id)currentTabReferString;
- (BOOL)grouponNodeNotExsitWithTabID:(id)a0;
- (id)multiTabIdentiferGrouponTabID;

@end
