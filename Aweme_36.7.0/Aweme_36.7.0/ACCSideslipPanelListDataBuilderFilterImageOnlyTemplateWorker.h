@interface ACCSideslipPanelListDataBuilderFilterImageOnlyTemplateWorker : ACCSideslipPanelListDataBuilderBaseWorker

@property (copy, nonatomic) id /* block */ getOriginalTotalListBlk;
@property (copy, nonatomic) id /* block */ getApplyingTemplateID;

- (unsigned long long)workerScene;
- (void)composeListDataWithPropPickDic:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (unsigned long long)workerType;

@end
