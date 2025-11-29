@class NSArray, AWEVideoPublishViewModel;
@protocol IESServiceProvider;

@interface ACCSideslipPanelListDataBuilderBaseWorker : NSObject

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (copy, nonatomic) NSArray *cellModels;

- (id)initWithServiceContainer:(id)a0 repository:(id)a1;
- (unsigned long long)workerScene;
- (void)composeListDataWithPropPickDic:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (unsigned long long)workerType;

@end
