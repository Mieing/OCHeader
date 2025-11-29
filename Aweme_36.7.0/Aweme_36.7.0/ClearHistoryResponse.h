@class ClearHistoryResponse_Data;

@interface ClearHistoryResponse : IESLivePBBaseMessage

@property (retain, nonatomic) ClearHistoryResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
