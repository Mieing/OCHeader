@class IESLiveComponentBootLoader, IESLiveComponentSyncManager, IESLiveMultiRoomPreloadContextPlugin;

@interface IESLiveMultiRoomPreloadBootloaderPlugin : IESLiveMultiRoomPreloadBasePlugin

@property (retain, nonatomic) IESLiveComponentBootLoader *bootLoader;
@property (retain, nonatomic) IESLiveComponentSyncManager *componentSyncManager;
@property (weak, nonatomic) IESLiveMultiRoomPreloadContextPlugin *contextPlugin;
@property (nonatomic) double startCreateTime;
@property (nonatomic) unsigned long long loadStage;
@property (copy, nonatomic) id /* block */ loadComplete;

- (BOOL)isLinkmicRoom:(id)a0;
- (void)loadComponentStrategyMgr;
- (BOOL)openLiveLifeShelfOrGoodsDetail;
- (void)refreshSyncGroupWithInfo:(id)a0 show:(BOOL)a1;
- (void)loadWithContextPlugin:(id)a0;
- (void)installBootloaderWithContainerPlugin:(id)a0;
- (id)getBootloader:(BOOL)a0;
- (id)getComponentSyncManager:(BOOL)a0;
- (void).cxx_destruct;
- (void)clear;

@end
