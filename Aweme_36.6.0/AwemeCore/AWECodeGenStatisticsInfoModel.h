@class NSString;

@interface AWECodeGenStatisticsInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *timegranularity;
@property (copy, nonatomic) NSString *theme;
@property (copy, nonatomic) NSString *aggregatestrategy;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
