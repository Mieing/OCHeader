@class RejectCloudCollaborateResp_Data;

@interface RejectCloudCollaborateResp : IESLivePBBaseMessage

@property (retain, nonatomic) RejectCloudCollaborateResp_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
