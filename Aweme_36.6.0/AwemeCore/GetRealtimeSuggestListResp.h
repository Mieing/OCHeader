@class GetRealtimeSuggestListResp_Data;

@interface GetRealtimeSuggestListResp : IESLivePBBaseMessage

@property (retain, nonatomic) GetRealtimeSuggestListResp_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
