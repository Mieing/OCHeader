@class CloudCollaboratePingResp_Data;

@interface CloudCollaboratePingResp : IESLivePBBaseMessage

@property (retain, nonatomic) CloudCollaboratePingResp_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
