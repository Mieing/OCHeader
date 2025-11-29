@class BalanceInfo, NSMutableArray, InteractivePanelAppInfo;

@interface GetPanelBaseInfoResponse_Data : IESLivePBBaseMessage

@property (retain, nonatomic) InteractivePanelAppInfo *appInfo;
@property (nonatomic) BOOL hasAppInfo;
@property (retain, nonatomic) NSMutableArray *tabEntranceInfoListArray;
@property (readonly, nonatomic) unsigned long long tabEntranceInfoListArray_Count;
@property (retain, nonatomic) BalanceInfo *balanceInfo;
@property (nonatomic) BOOL hasBalanceInfo;

+ (id)descriptor;

@end
