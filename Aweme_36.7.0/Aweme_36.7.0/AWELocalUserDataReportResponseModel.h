@class NSString, AWELocalUserDataReportConfig;

@interface AWELocalUserDataReportResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *tableMeta;
@property (retain, nonatomic) AWELocalUserDataReportConfig *reportConfig;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
