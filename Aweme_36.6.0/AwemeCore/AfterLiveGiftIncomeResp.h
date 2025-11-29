@class AfterLiveGiftIncomeResp_Data;

@interface AfterLiveGiftIncomeResp : IESLivePBBaseMessage

@property (retain, nonatomic) AfterLiveGiftIncomeResp_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
