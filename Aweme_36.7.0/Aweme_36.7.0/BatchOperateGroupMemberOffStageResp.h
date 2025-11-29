@class BatchOperateGroupMemberOffStageResp_Data;

@interface BatchOperateGroupMemberOffStageResp : IESLivePBBaseMessage

@property (retain, nonatomic) BatchOperateGroupMemberOffStageResp_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
