@class StopAllPluginResponse_Data;

@interface StopAllPluginResponse : IESLivePBBaseMessage

@property (retain, nonatomic) StopAllPluginResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
