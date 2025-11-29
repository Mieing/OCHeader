@class JoinCloudCollaborateResp_Data;

@interface JoinCloudCollaborateResp : IESLivePBBaseMessage

@property (retain, nonatomic) JoinCloudCollaborateResp_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
