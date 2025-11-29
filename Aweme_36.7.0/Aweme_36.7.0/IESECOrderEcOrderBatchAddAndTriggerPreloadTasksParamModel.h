@class NSArray, NSDictionary;

@interface IESECOrderEcOrderBatchAddAndTriggerPreloadTasksParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSArray *preloadTasks;
@property (copy, nonatomic) NSArray *preloadBizScenePriority;
@property (copy, nonatomic) NSDictionary *trackCommonParams;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
