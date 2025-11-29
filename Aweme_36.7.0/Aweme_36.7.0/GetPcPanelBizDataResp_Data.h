@class NSMutableArray;

@interface GetPcPanelBizDataResp_Data : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *tabListArray;
@property (readonly, nonatomic) unsigned long long tabListArray_Count;

+ (id)descriptor;

@end
