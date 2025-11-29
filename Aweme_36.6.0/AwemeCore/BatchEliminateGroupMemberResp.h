@class BatchEliminateGroupMemberResp_Data;

@interface BatchEliminateGroupMemberResp : IESLivePBBaseMessage

@property (retain, nonatomic) BatchEliminateGroupMemberResp_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
