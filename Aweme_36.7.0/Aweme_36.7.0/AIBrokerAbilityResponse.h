@class AIBrokerAbilityResponse_ResponseData;

@interface AIBrokerAbilityResponse : IESLivePBBaseMessage

@property (retain, nonatomic) AIBrokerAbilityResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
