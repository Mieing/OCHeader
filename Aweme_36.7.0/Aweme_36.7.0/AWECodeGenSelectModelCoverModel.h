@class AWECodeGenUrlModel;

@interface AWECodeGenSelectModelCoverModel : AWEBaseDataModel

@property (retain, nonatomic) AWECodeGenUrlModel *horizontalCoverModel;
@property (retain, nonatomic) AWECodeGenUrlModel *yCoverModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
