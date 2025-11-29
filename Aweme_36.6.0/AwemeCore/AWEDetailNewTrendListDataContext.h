@class NSArray, AWEDetailNewTrendTitleCellModel, AWEDetailTrendDescriptionModel, AWEDetailNewTrendVideoListCellModel, AWEDetailNewTrendMiddleListCellModel;

@interface AWEDetailNewTrendListDataContext : NSObject

@property (retain, nonatomic) AWEDetailNewTrendTitleCellModel *titleCellModel;
@property (retain, nonatomic) AWEDetailTrendDescriptionModel *descriptionCellModel;
@property (retain, nonatomic) AWEDetailNewTrendVideoListCellModel *videoCellModel;
@property (retain, nonatomic) AWEDetailNewTrendMiddleListCellModel *middleCellModel;
@property (retain, nonatomic) NSArray *moreTrendCellModels;

- (void)configWithRouterParamsDictionary:(id)a0;
- (void).cxx_destruct;

@end
