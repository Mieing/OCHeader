@class NSString, NSMutableDictionary, NSHashTable;

@interface AWEShowMonetizeRefresh : NSObject <AWEShowMonetizeRefreshService>

@property (retain, nonatomic) NSMutableDictionary *refreshers;
@property (retain, nonatomic) NSHashTable *handlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addRefreshHandler:(id)a0;
- (void)removeRefreshHandler:(id)a0;
- (void)refreshMonetizeContentWithConfigs:(id)a0;
- (BOOL)isTopMonetizeSceneContainerWithHandler:(id)a0;
- (BOOL)shouldCheckAwemeIDsWithConfig:(id)a0;
- (id)findSameContentIDMonetizeContent:(id)a0 monetizeDataItems:(id)a1;
- (id)getRefresherWithConfig:(id)a0;
- (id)createRefresherWithType:(unsigned long long)a0;
- (id)getAllRefreshHandlers;
- (id)getInTopMonetizeContainerHandler;
- (void).cxx_destruct;
- (id)init;

@end
