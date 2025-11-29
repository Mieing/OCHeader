@class NSNumber, NSDictionary;

@interface AnnieReportLinkmicStatusParamModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *reportType;
@property (copy, nonatomic) NSDictionary *reportInfo;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
