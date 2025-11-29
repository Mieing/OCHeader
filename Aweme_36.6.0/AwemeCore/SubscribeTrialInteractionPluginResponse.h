@class SubscribeTrialInteractionPluginResponse_Data;

@interface SubscribeTrialInteractionPluginResponse : IESLivePBBaseMessage

@property (retain, nonatomic) SubscribeTrialInteractionPluginResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
