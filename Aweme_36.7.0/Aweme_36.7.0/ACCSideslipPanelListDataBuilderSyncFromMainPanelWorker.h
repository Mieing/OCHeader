@interface ACCSideslipPanelListDataBuilderSyncFromMainPanelWorker : ACCSideslipPanelListDataBuilderBaseWorker

@property (retain, nonatomic) id rawModel;

- (unsigned long long)workerScene;
- (void)composeListDataWithPropPickDic:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
