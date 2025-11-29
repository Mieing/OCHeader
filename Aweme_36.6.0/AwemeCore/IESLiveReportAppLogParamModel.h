@class NSString, NSDictionary;

@interface IESLiveReportAppLogParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *noPrefix;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
