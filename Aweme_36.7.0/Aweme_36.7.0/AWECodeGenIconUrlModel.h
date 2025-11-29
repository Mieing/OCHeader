@class AWECodeGenUrlModel;

@interface AWECodeGenIconUrlModel : AWEBaseDataModel

@property (retain, nonatomic) AWECodeGenUrlModel *darkModel;
@property (retain, nonatomic) AWECodeGenUrlModel *lightModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
