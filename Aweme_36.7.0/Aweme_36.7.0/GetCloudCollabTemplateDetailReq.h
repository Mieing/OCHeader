@class NSString;

@interface GetCloudCollabTemplateDetailReq : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *templateId;

+ (id)descriptor;

@end
