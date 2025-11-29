@class AWECodeGenUrlModel;

@interface AWECodeGenIconWithIndexModel : AWEBaseDataModel

@property (nonatomic) int index;
@property (retain, nonatomic) AWECodeGenUrlModel *iconModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
