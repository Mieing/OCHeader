@class CloudCollabTemplateInfo;

@interface GetCloudCollabTemplateDetailResp_Data : IESLivePBBaseMessage

@property (retain, nonatomic) CloudCollabTemplateInfo *templateInfo;
@property (nonatomic) BOOL hasTemplateInfo;

+ (id)descriptor;

@end
