@class NSNumber, NSDictionary;

@interface IESLiveMonitorPKEventParamModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *eventType;
@property (copy, nonatomic) NSDictionary *eventParams;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
