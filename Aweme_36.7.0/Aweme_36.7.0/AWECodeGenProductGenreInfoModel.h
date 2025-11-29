@class NSArray, AWECodeGenSpecialInfoModel;

@interface AWECodeGenProductGenreInfoModel : AWEBaseDataModel

@property (nonatomic) long long productGenreType;
@property (copy, nonatomic) NSArray *materialGenreSubTypeSetArray;
@property (retain, nonatomic) AWECodeGenSpecialInfoModel *specialInfoModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
