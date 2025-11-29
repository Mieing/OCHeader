@class NSString;

@interface CloudCollabTemplateInfo_SubResourceInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *index;
@property (copy, nonatomic) NSString *oid;
@property (copy, nonatomic) NSString *URL;

+ (id)descriptor;

@end
