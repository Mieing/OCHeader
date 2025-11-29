@class AWECodeGenItemBasicModel, AWECodeGenAuthorBasicModel, AWECodeGenItemStatsModel;

@interface AWECodeGenVideoPreviewDataModel : AWEBaseDataModel

@property (retain, nonatomic) AWECodeGenItemBasicModel *itemModel;
@property (retain, nonatomic) AWECodeGenAuthorBasicModel *authorModel;
@property (retain, nonatomic) AWECodeGenItemStatsModel *itemStatsModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
