@class AWECodeGenUrlModel;

@interface AWECodeGenSeriesBarTagInfoModel : AWEBaseDataModel

@property (retain, nonatomic) AWECodeGenUrlModel *iconForBarModel;
@property (nonatomic) int width;
@property (nonatomic) int height;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
