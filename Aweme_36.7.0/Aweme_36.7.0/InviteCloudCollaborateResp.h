@class InviteCloudCollaborateResp_Data;

@interface InviteCloudCollaborateResp : IESLivePBBaseMessage

@property (retain, nonatomic) InviteCloudCollaborateResp_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
