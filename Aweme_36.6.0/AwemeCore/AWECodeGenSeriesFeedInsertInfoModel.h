@class NSString;

@interface AWECodeGenSeriesFeedInsertInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *seriesId;
@property (copy, nonatomic) NSString *coverLabel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
