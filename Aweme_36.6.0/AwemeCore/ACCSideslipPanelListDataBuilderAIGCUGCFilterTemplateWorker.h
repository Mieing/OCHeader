@interface ACCSideslipPanelListDataBuilderAIGCUGCFilterTemplateWorker : ACCSideslipPanelListDataBuilderBaseWorker

@property (copy, nonatomic) id /* block */ getOriginalTotalListBlk;

- (unsigned long long)workerScene;
- (void)composeListDataWithPropPickDic:(id)a0 completion:(id /* block */)a1;
- (BOOL)isSlotDurationExceedVideoDuration:(id)a0 videoDuration:(double)a1;
- (BOOL)isInvalidTemplateForLivePhoto:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)workerType;

@end
