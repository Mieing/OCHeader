@class NSArray;

@interface AWECodeGenRandomInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSArray *dimensionsArray;
@property (copy, nonatomic) NSArray *historysArray;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
