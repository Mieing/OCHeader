@class CloudCollabUserInfo;

@interface AcceptCloudCollaborateResp_Data : IESLivePBBaseMessage

@property (retain, nonatomic) CloudCollabUserInfo *userInfo;
@property (nonatomic) BOOL hasUserInfo;

+ (id)descriptor;

@end
