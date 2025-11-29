@class GetCloudCollabTemplateListResp_Data;

@interface GetCloudCollabTemplateListResp : IESLivePBBaseMessage

@property (retain, nonatomic) GetCloudCollabTemplateListResp_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
