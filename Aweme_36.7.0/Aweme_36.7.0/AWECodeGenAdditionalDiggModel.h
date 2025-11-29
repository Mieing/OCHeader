@class AWECodeGenUrlModel, AWECodeGenIMDataSourceModel;

@interface AWECodeGenAdditionalDiggModel : AWEBaseDataModel

@property (nonatomic) long long cid;
@property (retain, nonatomic) AWECodeGenIMDataSourceModel *imSourceModel;
@property (retain, nonatomic) AWECodeGenUrlModel *coverOriginModel;
@property (nonatomic) int mergeCount;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
