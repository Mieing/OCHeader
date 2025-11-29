@class StopInteractionPluginIMTaskResponse_Data;

@interface StopInteractionPluginIMTaskResponse : IESLivePBBaseMessage

@property (retain, nonatomic) StopInteractionPluginIMTaskResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
