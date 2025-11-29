@class StartInteractionPluginResponse_Data;

@interface StartInteractionPluginResponse : IESLivePBBaseMessage

@property (retain, nonatomic) StartInteractionPluginResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
