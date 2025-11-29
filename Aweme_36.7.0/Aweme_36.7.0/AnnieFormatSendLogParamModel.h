@class NSString, NSDictionary;

@interface AnnieFormatSendLogParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *eventName;
@property (nonatomic) BOOL withCommonParams;
@property (copy, nonatomic) NSDictionary *logParams;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
