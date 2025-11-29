@class BatchResurrectGroupMemberResp_Data;

@interface BatchResurrectGroupMemberResp : IESLivePBBaseMessage

@property (retain, nonatomic) BatchResurrectGroupMemberResp_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
