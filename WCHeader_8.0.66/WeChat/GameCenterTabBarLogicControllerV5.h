@class NSString;

@interface GameCenterTabBarLogicControllerV5 : MMObject <IGameCenterExt> {
    id /* block */ _tabItemCompleteBlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)getHomeTabItemsFromCache;
- (void)requestHomeTabItems:(id /* block */)a0;
- (void)onFetchGameCenterHomeTabNavV5:(id)a0 error:(long long)a1;
- (void).cxx_destruct;

@end
