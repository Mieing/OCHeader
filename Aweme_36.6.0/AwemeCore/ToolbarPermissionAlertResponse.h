@class ToolbarPermissionAlertResponse_Data;

@interface ToolbarPermissionAlertResponse : IESLivePBBaseMessage

@property (retain, nonatomic) ToolbarPermissionAlertResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
