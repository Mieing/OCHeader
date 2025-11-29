@class NSString, ResourceDescriptionList;

@interface BatchResourceDescriptionList_OneResp : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *projectId;
@property (nonatomic) int ret;
@property (retain, nonatomic) ResourceDescriptionList *resp;

+ (void)initialize;

@end
