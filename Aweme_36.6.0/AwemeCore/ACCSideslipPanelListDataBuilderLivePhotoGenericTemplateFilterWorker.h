@interface ACCSideslipPanelListDataBuilderLivePhotoGenericTemplateFilterWorker : ACCSideslipPanelListDataBuilderBaseWorker

@property (copy, nonatomic) id /* block */ getOriginalTotalListBlk;

- (BOOL)isRealLivePhoto;
- (unsigned long long)workerScene;
- (void)composeListDataWithPropPickDic:(id)a0 completion:(id /* block */)a1;
- (BOOL)enableLivePhotoTemplate;
- (BOOL)isInvalidGenericTemplateModelForSingleLivePhoto:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)workerType;

@end
