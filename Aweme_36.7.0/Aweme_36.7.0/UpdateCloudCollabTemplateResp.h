@class UpdateCloudCollabTemplateResp_Data;

@interface UpdateCloudCollabTemplateResp : IESLivePBBaseMessage

@property (retain, nonatomic) UpdateCloudCollabTemplateResp_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
