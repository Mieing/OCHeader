@class NSString;

@interface AWECodeGenSeriesRankInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *rankCardText;
@property (nonatomic) int rank;
@property (copy, nonatomic) NSString *rankType;
@property (copy, nonatomic) NSString *rankSchema;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
