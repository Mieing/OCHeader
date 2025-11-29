@class GetPcPanelBizDataResp_Data;

@interface GetPcPanelBizDataResp : IESLivePBBaseMessage

@property (retain, nonatomic) GetPcPanelBizDataResp_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
