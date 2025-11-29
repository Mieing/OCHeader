@class DeleteCloudCollabTemplateResp_Data;

@interface DeleteCloudCollabTemplateResp : IESLivePBBaseMessage

@property (retain, nonatomic) DeleteCloudCollabTemplateResp_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
