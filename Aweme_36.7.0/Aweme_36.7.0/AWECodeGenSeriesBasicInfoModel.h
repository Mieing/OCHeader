@class NSString;

@interface AWECodeGenSeriesBasicInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *seriesId;
@property (copy, nonatomic) NSString *seriesAuthorId;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
