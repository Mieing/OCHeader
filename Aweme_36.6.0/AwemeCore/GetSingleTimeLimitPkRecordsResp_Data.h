@class NSMutableArray;

@interface GetSingleTimeLimitPkRecordsResp_Data : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *memberPkRecordsArray;
@property (readonly, nonatomic) unsigned long long memberPkRecordsArray_Count;

+ (id)descriptor;

@end
