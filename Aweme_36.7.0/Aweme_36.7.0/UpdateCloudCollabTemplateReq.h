@class NSString;

@interface UpdateCloudCollabTemplateReq : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *templateId;
@property (copy, nonatomic) NSString *resourceId;
@property (copy, nonatomic) NSString *templateName;
@property (copy, nonatomic) NSString *subResourceList;

+ (id)descriptor;

@end
