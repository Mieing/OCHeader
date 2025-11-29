@class AWEVideoUniformEffectDataManager, NSString;

@interface ACCSideslipPanelListDataBuilderLegacyEffectsFetchWorker : ACCSideslipPanelListDataBuilderBaseWorker

@property (retain, nonatomic) AWEVideoUniformEffectDataManager *effectDataManager;
@property (copy, nonatomic) NSString *effectCategory;
@property (nonatomic) unsigned long long maxCount;

- (BOOL)isRealLivePhoto;
- (id)initWithServiceContainer:(id)a0 repository:(id)a1;
- (void)composeListDataWithPropPickDic:(id)a0 completion:(id /* block */)a1;
- (void)initRequestExtraParameters;
- (id)buildOneSideCellModelsWithEffectList:(id)a0 propPickDic:(id)a1;
- (id)filterWithCellModel:(id)a0 propPickDic:(id)a1;
- (void).cxx_destruct;

@end
