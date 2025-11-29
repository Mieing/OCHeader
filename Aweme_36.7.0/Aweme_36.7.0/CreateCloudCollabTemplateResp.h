@class CreateCloudCollabTemplateResp_Data;

@interface CreateCloudCollabTemplateResp : IESLivePBBaseMessage

@property (retain, nonatomic) CreateCloudCollabTemplateResp_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
