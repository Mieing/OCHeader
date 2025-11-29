@class StopCloudCollaborateResp_Data;

@interface StopCloudCollaborateResp : IESLivePBBaseMessage

@property (retain, nonatomic) StopCloudCollaborateResp_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
