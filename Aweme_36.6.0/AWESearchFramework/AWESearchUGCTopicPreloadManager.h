@class AWESearchUGCTopicDiscussDataController, NSMutableSet, AWESearchResultCachalotResponseParams;

@interface AWESearchUGCTopicPreloadManager : NSObject

@property (retain, nonatomic) NSMutableSet *preloadedTabs;
@property (nonatomic) BOOL isPreFetching;
@property (retain, nonatomic) AWESearchResultCachalotResponseParams *discussResponseParams;
@property (retain, nonatomic) AWESearchUGCTopicDiscussDataController *discussDataController;

+ (id)sharedManager;

- (BOOL)shouldPreloadImmediatelyWithContext:(id)a0 routerModel:(id)a1;
- (id)discussRequestParamsFrom:(id)a0;
- (void)preloadDiscussTabWithContext:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (id)clientEngineExtraFromRouterModel:(id)a0;
- (id)tabKeyForContext:(id)a0;
- (void)checkAndPreloadDiscussTabWithContext:(id)a0 routerModel:(id)a1 params:(id)a2 completion:(id /* block */)a3;
- (void)resetPreloadState;
- (void).cxx_destruct;
- (id)init;

@end
