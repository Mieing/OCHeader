@class CreateCloudCollaborateResp_Data;

@interface CreateCloudCollaborateResp : IESLivePBBaseMessage

@property (retain, nonatomic) CreateCloudCollaborateResp_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
