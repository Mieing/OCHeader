@class GetSingleTimeLimitPkRecordsResp_Data;

@interface GetSingleTimeLimitPkRecordsResp : IESLivePBBaseMessage

@property (retain, nonatomic) GetSingleTimeLimitPkRecordsResp_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
