@class NSString, NSNumber;

@interface IESLiveLynxReportResponseParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *requestName;
@property (retain, nonatomic) NSNumber *responseResult;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
