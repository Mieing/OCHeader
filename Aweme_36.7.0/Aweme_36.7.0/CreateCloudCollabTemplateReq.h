@class NSString;

@interface CreateCloudCollabTemplateReq : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *resourceId;
@property (copy, nonatomic) NSString *templateName;
@property (copy, nonatomic) NSString *subResourceList;

+ (id)descriptor;

@end
