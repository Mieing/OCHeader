@class AWECodeGenSeriesOutflowContinuePlayInfoModel, AWECodeGenSeriesItemTitlePrefixModel;

@interface AWECodeGenSeriesPlayDetailInfoModel : AWEBaseDataModel

@property (retain, nonatomic) AWECodeGenSeriesOutflowContinuePlayInfoModel *outflowContinuePlayInfoModel;
@property (retain, nonatomic) AWECodeGenSeriesItemTitlePrefixModel *itemTitlePrefixModel;
@property (nonatomic) int seriesAwemeIndex;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
