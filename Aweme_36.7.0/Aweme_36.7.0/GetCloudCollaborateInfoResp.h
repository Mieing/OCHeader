@class GetCloudCollaborateInfoResp_Data;

@interface GetCloudCollaborateInfoResp : IESLivePBBaseMessage

@property (retain, nonatomic) GetCloudCollaborateInfoResp_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
