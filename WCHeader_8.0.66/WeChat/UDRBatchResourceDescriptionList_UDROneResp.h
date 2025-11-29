@class NSString, ResourceResponse;

@interface UDRBatchResourceDescriptionList_UDROneResp : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *projectId;
@property (nonatomic) int ret;
@property (retain, nonatomic) ResourceResponse *resp;

+ (void)initialize;

@end
