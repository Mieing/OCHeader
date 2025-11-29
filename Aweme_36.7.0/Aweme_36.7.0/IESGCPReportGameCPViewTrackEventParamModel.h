@class NSString, NSDictionary;

@interface IESGCPReportGameCPViewTrackEventParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSDictionary *params;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
