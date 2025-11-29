@class StartInteractionPluginIMTaskResponse_Data;

@interface StartInteractionPluginIMTaskResponse : IESLivePBBaseMessage

@property (retain, nonatomic) StartInteractionPluginIMTaskResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
