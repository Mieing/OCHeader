@class AWECodeGenInteractiveConfigModel;

@interface AWECodeGenSeriesInteractiveModel : AWEBaseDataModel

@property (nonatomic) BOOL enableConfig;
@property (retain, nonatomic) AWECodeGenInteractiveConfigModel *interactiveConfigModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
