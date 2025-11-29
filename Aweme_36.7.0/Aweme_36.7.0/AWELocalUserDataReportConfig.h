@class NSString;

@interface AWELocalUserDataReportConfig : AWEBaseApiModel

@property (retain, nonatomic) NSString *tableName;
@property (nonatomic) double reportTime;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
