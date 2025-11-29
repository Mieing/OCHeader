@class AnchorPermissionResponse_Data;

@interface AnchorPermissionResponse : IESLivePBBaseMessage

@property (retain, nonatomic) AnchorPermissionResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
