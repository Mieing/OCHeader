@class GetCloudCollabTemplateDetailResp_Data;

@interface GetCloudCollabTemplateDetailResp : IESLivePBBaseMessage

@property (retain, nonatomic) GetCloudCollabTemplateDetailResp_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
