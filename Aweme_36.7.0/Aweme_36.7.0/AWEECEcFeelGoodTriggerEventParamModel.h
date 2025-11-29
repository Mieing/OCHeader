@class NSString, NSDictionary;

@interface AWEECEcFeelGoodTriggerEventParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *eventID;
@property (copy, nonatomic) NSDictionary *extraUserInfo;
@property (copy, nonatomic) NSString *appKey;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
