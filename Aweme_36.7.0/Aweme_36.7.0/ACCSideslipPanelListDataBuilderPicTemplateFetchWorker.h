@class NSArray;

@interface ACCSideslipPanelListDataBuilderPicTemplateFetchWorker : ACCSideslipPanelListDataBuilderBaseWorker

@property (retain, nonatomic) NSArray *picTemplateArray;
@property (copy, nonatomic) id /* block */ updateCategoryIDBlock;

- (void)composeListDataWithPropPickDic:(id)a0 completion:(id /* block */)a1;
- (id)filterWithCellModel:(id)a0 propPickDic:(id)a1;
- (id)buildOneSideCellModelsWithTemplateDataModels:(id)a0 propPickDic:(id)a1;
- (void).cxx_destruct;

@end
