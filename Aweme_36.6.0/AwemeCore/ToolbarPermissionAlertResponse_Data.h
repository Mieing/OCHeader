@class ToolbarPermissionAlertResponse_Alert;

@interface ToolbarPermissionAlertResponse_Data : IESLivePBBaseMessage

@property (nonatomic) BOOL hasPermission;
@property (retain, nonatomic) ToolbarPermissionAlertResponse_Alert *alert;
@property (nonatomic) BOOL hasAlert;

+ (id)descriptor;

@end
