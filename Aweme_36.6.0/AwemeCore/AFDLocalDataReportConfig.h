@class NSString;

@interface AFDLocalDataReportConfig : AWEBaseApiModel

@property (retain, nonatomic) NSString *tableName;
@property (nonatomic) double reportTime;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
