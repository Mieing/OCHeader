@class StartCloudCollaborateResp_Data;

@interface StartCloudCollaborateResp : IESLivePBBaseMessage

@property (retain, nonatomic) StartCloudCollaborateResp_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
