@class BatchOperateGroupMemberOnStageResp_Data;

@interface BatchOperateGroupMemberOnStageResp : IESLivePBBaseMessage

@property (retain, nonatomic) BatchOperateGroupMemberOnStageResp_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
