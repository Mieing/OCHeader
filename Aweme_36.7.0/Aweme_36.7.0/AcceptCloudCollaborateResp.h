@class AcceptCloudCollaborateResp_Data;

@interface AcceptCloudCollaborateResp : IESLivePBBaseMessage

@property (retain, nonatomic) AcceptCloudCollaborateResp_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
