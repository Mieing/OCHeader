@class NSString, NSMutableArray;

@interface CloudCollabTemplateInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *templateId;
@property (copy, nonatomic) NSString *resourceId;
@property (copy, nonatomic) NSString *templateName;
@property (retain, nonatomic) NSMutableArray *subResourceListArray;
@property (readonly, nonatomic) unsigned long long subResourceListArray_Count;

+ (id)descriptor;

@end
