@class NSString, AFDLocalDataReportConfig;

@interface AFDLocalDataReportResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *tableMeta;
@property (retain, nonatomic) AFDLocalDataReportConfig *reportConfig;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
