@class LeaveCloudCollaborateResp_Data;

@interface LeaveCloudCollaborateResp : IESLivePBBaseMessage

@property (retain, nonatomic) LeaveCloudCollaborateResp_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
