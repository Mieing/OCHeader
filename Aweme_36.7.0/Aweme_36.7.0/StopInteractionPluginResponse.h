@class StopInteractionPluginResponse_Data;

@interface StopInteractionPluginResponse : IESLivePBBaseMessage

@property (retain, nonatomic) StopInteractionPluginResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
